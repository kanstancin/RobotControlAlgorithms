qDesTraj = squeeze(out.configDes.Data);
desPosTraj = FwdKin(qDesTraj);
save('./vars/desPosTraj_pasada_ext_torq.mat','desPosTraj');

qReal = out.configReal.Data';
trajReal = FwdKin(qReal);
save('./vars/trajReal_pasada_ext_torq.mat','trajReal');

size(desPosTraj)
size(trajReal)
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
