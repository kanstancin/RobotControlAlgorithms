params1 = load('./vars/params1.mat');
params2 = load('./vars/params2.mat');

params1 = params1.params1;
params2 = params2.params2;


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


times = [0:0.001:30];
plot(times, params2(:,1),'b',times,params2(:,2),'g',times,params2(:,4),'r','LineWidth',2)
hold on
size(times)
plot(times, repelem(p1,size(times,2)),'b--','LineWidth',1)
plot(times, repelem(p2,size(times,2)),'g--','LineWidth',1)
plot(times, repelem(p4,size(times,2)),'r--','LineWidth',1)
xlabel('Time, s')
ylabel('parameter value')
legend({'$\hat{\Theta}_1$','$\hat{\Theta}_2$','$\hat{\Theta}_4$'},'Interpreter','latex','FontSize',14)
%p2, lc2
%p4, lc3
%p1, J_hat