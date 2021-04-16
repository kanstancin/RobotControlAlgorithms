%% find P given Q
Kp = [20,0,0; 0, 10 ,0; 0, 0 , 10];  %  Kp is 3*3 matrix of proportional gain 
Kd = [1,0,0; 0, 1 ,0; 0, 0 , 1]; %Kd is 3*3 matrix of derivative gain

I = eye(3);
zrs = zeros(3);
A = [zrs I; -Kp -Kd]
roots(poly(A));

Q = eye(size(A));
diagonal = [1,1,1,3,1,1]';
Q = Q .* repmat(diagonal, [1,6]);
P = lyap(A',Q);
eig(Q);
eig(P);
eig(-(A'*P + P*A));
Q = -(A'*P + P*A);

%% define rho function 
alpha = 0.5;
gamma_1 = 1;
gamma_2 = 1;
gamma_3 = 1;
error = [q - qd; dq - qd_dot];
error_norm = norm(error);
rho = (1 / (1 - alpha)) * (gamma_1 * error_norm + gamma_2 * power(error_norm,2) + gamma_3);

%% define B
B = [0;0;0;1;1;1];

%% define delta_a
vect = B' * P * error;
vect_norm = norm(vect);

limit = 0.0001;
if (vect_norm > limit)
    delta_a = -rho * (vect / vect_norm);
else
    delta_a = 0;
end




