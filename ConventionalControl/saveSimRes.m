qDesTraj = squeeze(out.configDes.Data);
desPosTraj = FwdKin(qDesTraj);
save('./vars/desPosTraj_hifc.mat','desPosTraj');

qReal = out.configReal.Data';
trajReal = FwdKin(qReal);
save('./vars/trajReal_hifc.mat','trajReal');

fReal = out.forceReal.Data';
forceReal = FwdKin(fReal);
save('./vars/forceReal_hifc.mat','forceReal');

size(desPosTraj)
size(trajReal)
size(forceReal)
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
