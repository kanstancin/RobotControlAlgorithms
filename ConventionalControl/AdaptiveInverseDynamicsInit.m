%% initialize params

l1 = 0.6731;
l2 = 0.432;
l3 = 0.434;
lc2 = 0.216*1.15;
lc3 = 0.164*1.05;
m2_hat = 15.46;
m3_hat = 9.55;
J_hat = 0.302;

%% define theta params

g = 9.81;
p1 = J_hat;
p2 = m2_hat*(lc2*lc2);
p3 = m3_hat*l2*l2;
p4 = m3_hat*lc3*lc3;
p5 = m3_hat*l2*lc3;
p6 = m2_hat*lc2*g;
p7 = m3_hat*l2*g;
p8 = m3_hat*lc3*g;
theta_params_init = [p1; p2;
                    p3; p4;
                    p5; p6;
                    p7; p8];