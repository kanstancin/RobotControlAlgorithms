%% Initialization

t_final = 30;     % simulation time
dt = 1.00e-03;    % time-steps for solver

% initialize states
q_0  = [0;-0.9;2.7];   % initial conditions for states (radian) q_0  = [0; 0; 0];
dq_0 = 0.1 *[ 0  -1  0];  % initial conditions for state velocities   dq_0 = [0; 0; 0];

delta_arr = zeros(3,t_final * 1500 );
times_arr = zeros(t_final * 1500,1);