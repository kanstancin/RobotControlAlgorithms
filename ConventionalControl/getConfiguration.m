function [ikInitGuess, qtask] = getConfiguration(time, robot, posTask,ikInitGuess)
    ikWeights_3dof = [0 0 0 1 1 1];
    ik_3dof = inverseKinematics('RigidBodyTree',robot);
    ts = 0.2;
    trajTimes = 0:ts:waypointTimes(end);
    numJoints = numel(robot.homeConfiguration);
    qTask = zeros(numJoints,numel(trajTimes));

    eeName = 'Link_EE';
    % Trajectory evaluation
    % Solve IK
    interpPosition = [0 0 0]
    interpPosition(1) = interp1(trajTimes,posTask(:,1),time)
    interpPosition(2) = interp1(trajTimes,posTask(:,2),time)
    interpPosition(3) = interp1(trajTimes,posTask(:,3),time)
    tgtPose = trvec2tform(interpPosition);
    [config,info] = ik_3dof(eeName,tgtPose,ikWeights_3dof,ikInitGuess);
    ikInitGuess = config;
    qTask(1,idx) = config(1).JointPosition;
    qTask(2,idx) = config(2).JointPosition;
    qTask(3,idx) = config(3).JointPosition; 