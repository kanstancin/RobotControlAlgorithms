# RobotControlAlgorithms
Various robot control algorithms for 3DoF manipulator: from Gravity Compensation to Force Control. Dynamical properties of the simulated robot are identical to the PUMA 560 surgical manipulator.




Conventional control approach - Passivity Based Robust Control, tracks desired trajectory 
in the presence of parametric uncertainty:




 ![Passivity Based Robust Control](robust_passive.gif) 












Reinforcement Learning control example:




![Reinforcement Learning control](reinforcement_learning_control.gif) 



The following control algorithms are implemented in this project:
- regulation problem:
- PD control
- PD control with gravity compensation
- Tracking problem:
- inverse dynamics control
- Robust control
- Adaptive Inverse Dynamics control
- Lyapunov (Passivity) based tracking control
- Lyapunov based Robust control
- Lyapunov based Adaptive control






