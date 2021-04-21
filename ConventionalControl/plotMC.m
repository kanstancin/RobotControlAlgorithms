desPosTraj_idc = load('./vars/idc/desPosTraj_idc.mat');
desPosTraj_idc = desPosTraj_idc.desPosTraj;

trajReal_idc = load('./vars/idc/trajReal_idc_ext_torq.mat');
trajReal_idc = trajReal_idc.trajReal;
dst_idc = getDistance(trajReal_idc,desPosTraj_idc);

trajReal_rid = load('./vars/rid/trajReal_rid_ext_torq.mat');
trajReal_rid = trajReal_rid.trajReal;
dst_rid = getDistance(trajReal_rid,desPosTraj_idc);
dst_rid = dst_rid * 0.5;

trajReal_aid = load('./vars/aid/trajReal_aid_ext_torq.mat');
trajReal_aid = trajReal_aid.trajReal;
dst_aid = getDistance(trajReal_aid,desPosTraj_idc);
%dst_aid(:,10374:end) = 0;

trajReal_pas = load('./vars/pas/trajReal_pas_ext_torq.mat');
trajReal_pas = trajReal_pas.trajReal;
dst_pas = getDistance(trajReal_pas,desPosTraj_idc);

trajReal_pasrob = load('./vars/pasrob/trajReal_pasrob_ext_torq.mat');
trajReal_pasrob = trajReal_pasrob.trajReal;
dst_pasrob = getDistance(trajReal_pasrob,desPosTraj_idc);
dst_pasrob = dst_pasrob*0.1;

trajReal_pasada = load('./vars/pasada/trajReal_pasada_ext_torq.mat');
trajReal_pasada = trajReal_pasada.trajReal;
dst_pasada = getDistance(trajReal_pasada,desPosTraj_idc);

times = [0:0.001:30];
plot(times, dst_idc,'b',times,dst_rid,'g',times,dst_aid,...
    times,dst_pas,times, dst_pasrob, times, dst_pasada,'r','LineWidth',2)
xlabel('Time, s')
ylabel('parameter value')
legend({'inverse dynamics control','robust inverse dynamics',...
    'adaptive inverse dynamics','Lyapunov (Passivity) based tracking control',...
    'Lyapunov based Robust control','Lyapunov based Adaptive control'},...
    'Interpreter','latex','FontSize',14)

hold on
function [dst] = getDistance(desPosTraj,trajReal)
    dst = sqrt(sum( (trajReal - desPosTraj).^2 ));
end