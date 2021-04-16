%% find P given Q
Kp = [20,0,0; 0, 10 ,0; 0, 0 , 10];  %  Kp is 3*3 matrix of proportional gain 
Kd = [1,0,0; 0, 1 ,0; 0, 0 , 1]; %Kd is 3*3 matrix of derivative gain

I = eye(3);
zrs = zeros(3);
A = [zrs I; -Kp -Kd];
roots(poly(A));

Q = eye(size(A));
diagonal = [1,1,1,1,1,1]' * 0.5;
Q = Q .* repmat(diagonal, [1,6]);
P = lyap(A',Q);
eig(Q);
eig(P);
eig(-(A'*P + P*A));
Q = -(A'*P + P*A);

