function Perm = RandPermGen1to27fix27
%Perm = RandPermGen1to27fix27
Perm = zeros(2,27);
Perm(1,:) = 1:27;
Perm(2,1:26) = randperm(26);
Perm(2,27) = 27;
    
