eeName = 'Link_EE';

pathToURDF.robot = './3DoFRobot.urdf';
robot = importrobot(pathToURDF.robot);

numJoints = numel(robot.homeConfiguration);
robot.homeConfiguration.JointName

% change home configuration
ikInitGuess = [0;-0.9;2.7];
ikInitGuessSim = ikInitGuess;
initPosition = FwdKin(ikInitGuess);

env_nom = [0.691185378094064;0;0.912891515862273];

homeConfig = struct('JointName', 'Joint_1');
homeConfig(2).JointName = 'Joint_2';
homeConfig(3).JointName = 'Joint_3';
homeConfig(1).JointPosition = ikInitGuess(1);
homeConfig(2).JointPosition = ikInitGuess(2);
homeConfig(3).JointPosition = ikInitGuess(3);
ikInitGuess = homeConfig;
% Maximum number of waypoints (for Simulink)
maxWaypoints = 20;

% Positions (X Y Z)
a = 0.25;
waypoints = initPosition + ... %toolPositionHome
            [0 0 0 ; 0 -a -a ; 0 0 -2*a; 0 a -a ; 0 0 0]';
            %[0 0 0.2 ; -0.1 0.2 0.4 ; -0.2 0 0.1 ; -0.1 -0.2 0.4 ; 0 0 0.2]';
numWaypoints = size(waypoints,2) ;       
% Euler Angles (Z Y X) relative to the home orientation       
orientations = [0     0    0;
                pi/8  0    0; 
                0    pi/2  0;
               -pi/8  0    0;
                0     0    0]';   
            
% Array of waypoint times
waypointTimes = 0:4:16;

% Trajectory sample time
ts = 0.2;
trajTimes = 0:ts:waypointTimes(end);

%% Additional parameters

% Boundary conditions (for polynomial trajectories)
% Velocity (cubic and quintic)
waypointVels = 0.1 *[ 0  -1  0;
                      0  0  -1;
                      0  1  0;
                      0  0  1;
                      0  -1  0]';

% Acceleration (quintic only)
waypointAccels = zeros(size(waypointVels));

% Acceleration times (trapezoidal only)
waypointAccelTimes = diff(waypointTimes)/4;

disp('Running task space trajectory 3 DOF generation and evaluation...')
tic;

trajType = 'quintic';
switch trajType
    case 'trap'
        [posTask,velTask,accelTask] = trapveltraj(waypoints,numel(trajTimes), ...
            'AccelTime',repmat(waypointAccelTimes,[3 1]), ... 
            'EndTime',repmat(diff(waypointTimes),[3 1]));
    case 'cubic'
        [posTask,velTask,accelTask] = cubicpolytraj(waypoints,waypointTimes,trajTimes, ... 
            'VelocityBoundaryCondition',waypointVels);
        
    case 'quintic'
        [posTask,velTask,accelTask] = quinticpolytraj(waypoints,waypointTimes,trajTimes, ... 
            'VelocityBoundaryCondition',waypointVels, ...
            'AccelerationBoundaryCondition',waypointAccels);
        
    case 'bspline'
        ctrlpoints = waypoints; % Can adapt this as needed
        [posTask,velTask,accelTask] = bsplinepolytraj(ctrlpoints,waypointTimes([1 end]),trajTimes);
        
    otherwise
        error('Invalid trajectory type! Use ''trap'', ''cubic'', ''quintic'', or ''bspline''');
end

ikWeights_3dof = [ 0 0 0 1 1 1];
ik_3dof = inverseKinematics('RigidBodyTree',robot);
qTask = zeros(numJoints,numel(trajTimes));
% Trajectory evaluation
for idx = 1:numel(trajTimes) 
    % Solve IK
    tgtPose = trvec2tform(posTask(:,idx)');
    [config,info] = ik_3dof(eeName,tgtPose,ikWeights_3dof,ikInitGuess);
    ikInitGuess = config;
    qTask(1,idx) = config(1).JointPosition;
    qTask(2,idx) = config(2).JointPosition;
    qTask(3,idx) = config(3).JointPosition;
end
ikInitGuess = homeConfig;
ikInitGuess = ikInitGuessSim;

taskTime = toc;
disp(['Task space trajectory time : ' num2str(taskTime) ' s']);
figure; hold on
plot3(posTask(1,:),posTask(2,:),posTask(3,:),'b-');
plot3(waypoints(1,:),waypoints(2,:),waypoints(3,:),'ko','LineWidth',2);
title('Trajectory Comparison'); 
xlabel('X [m]');
ylabel('Y [m]');
zlabel('Z [m]');
legend('Task Space Trajectory','Waypoints');
grid on
view([45 45]);

vizStep = 100;
robot.DataFormat = 'column';
qTask = out.configReal.Data';
trajReal = FwdKin(qTask);
plotSimulationResults(robot, vizStep, qTask,posTask,trajReal,waypoints);
%plotSimulationResults(robot, vizStep, qTask,posTask,waypoints);


% Compare joint angles
% Plot each joint trajectory
% for idx = 1:numJoints
%     figure, hold on;
%     plot(trajTimes,qTask(idx,:),'b-');
%     for wIdx = 1:numWaypoints
%        xline(waypointTimes(wIdx),'k--'); 
%     end
%     title(['Joint ' num2str(idx) ' Trajectory']); 
%     xlabel('Time [s]');
%     ylabel('Joint Angle [rad]');
%     legend('Task Space Trajectory');
% end

% fwd kinematics
function [X] = FwdKin(Q)
    s1 = sin(Q(1, :));
    c1 = cos(Q(1, :));
    s2 = sin(Q(2, :));
    c2 = cos(Q(2, :));
    s23 = sin(Q(2, :) + Q(3, :));
    c23 = cos(Q(2, :) + Q(3, :));
    l = [0.6731; 0.432; 0.434];

    X(1, :) = c1.*(l(2)*c2 + l(3)*s23);
    X(2, :) = s1.*(l(2)*c2 + l(3)*s23);
    X(3, :) = l(1) - l(2)*s2 + l(3)*c23;
end

function [] = plotSimulationResults(robot, vizStep, qTask,posTask,trajReal,waypoints)
    figure;
    
    % Iterate through all joint configurations 
    for i = 1:vizStep:size(qTask,2)
        disp(strcat('Simulation step:  ',num2str(i),'/',num2str(size(qTask,2)))) 
        % Change robot configuration for projection on camera
        show(robot, qTask(:,i),'Frames','on','PreservePlot',false,'visuals','on');
        hold on
        plot3(posTask(1,:),posTask(2,:),posTask(3,:),'b-');
        plot3(trajReal(1,1:vizStep:i),trajReal(2,1:vizStep:i),trajReal(3,1:vizStep:i),'r-');
        plot3(waypoints(1,:),waypoints(2,:),waypoints(3,:),'ko','LineWidth',2);
        % Draw robot trajectories from simulation
        % Draw environment and its trajectories
        %camproj('orthographic')
        axis([-0.5 1.5 -0.75 0.75 0 1.5])
        %pbaspect([1 1 0.5])
        %view(0,0)
        drawnow
    end
    hold off
end