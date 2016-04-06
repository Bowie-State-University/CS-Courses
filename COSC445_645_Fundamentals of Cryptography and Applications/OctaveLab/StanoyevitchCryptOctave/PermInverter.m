function InvPerm = PermInverter(Perm)
% InvPerm = PermInverter(Perm)
%Input:  Perm, a 2 row matrix representing a permutation of a distinct set
%of numbers.  The first row has the numbers listed in increasing order, the
%second row the same list permuted.

Outputs = Perm(2,:);
[a Ind] = sort(Outputs);
InvPerm = Perm;
InvPerm(2,:) = Perm(1,Ind);