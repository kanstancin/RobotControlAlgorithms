pathToURDF.robot = './3DoFRobot.urdf';
robot = importrobot(pathToURDF.robot);
robot.DataFormat = 'column';

qDesPoint = out.confDes.Data';
desPosPoint = FwdKin(qDesPoint);

qReal = out.confReal.Data';
trajReal = FwdKin(qReal);

trajReal2 = load('./vars/traj_no_gc.mat');
trajReal3 = load('./vars/traj_gc_noise.mat');

vizStep = 5000;
drawSimulationResults(robot, vizStep,qReal, desPosPoint,trajReal);

figure;
plotSimulationResults(desPosPoint,trajReal);
trajReal2 = trajReal2.trajReal;
distance = getDistance(desPosPoint,trajReal2);
plot([0:0.001:30], distance,'LineWidth',2);

trajReal3 = trajReal3.trajReal;
distance = getDistance(desPosPoint,trajReal3);
plot([0:0.001:30], distance,'LineWidth',2);
legend('gravity compensation','no gravity compensation','gravity compensation with noise');
%save('./vars/traj_gc.mat','trajReal');
function [] = plotSimulationResults(desPosPoint,trajReal)
    distance = getDistance(desPosPoint,trajReal);
    hold on;
    plot([0:0.001:30], distance,'LineWidth',2);
    xlabel('time, s');
    ylabel('distance, m');
end

function [dst] = getDistance(desPosPoint,trajReal)
    dst = sqrt(sum( (trajReal - repmat(desPosPoint,[1,size(trajReal,2)])).^2 ));
end

function [] = drawSimulationResults(robot, vizStep,qReal, desPosPoint,trajReal)
    figure;
    
    % Iterate through all joint configurations 
    for i = 1:vizStep:size(qReal,2)
        
        disp(strcat('Simulation step:  ',num2str(i),'/',num2str(size(qReal,2)))) 
        % Change robot configuration for projection on camera
        show(robot, qReal(:,i),'Frames','on','PreservePlot',false,'visuals','on');
        hold on
        plot3(desPosPoint(1),desPosPoint(2),desPosPoint(3),'ko','LineWidth',2);
        plot3(trajReal(1,1:vizStep:i),trajReal(2,1:vizStep:i),trajReal(3,1:vizStep:i),'r-');
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
