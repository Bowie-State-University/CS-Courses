function PermOut = PermComposer(Perm1, Perm2)
% PermOut = PermComposer(Perm1, Perm2)
%Inputs:  Perm1, Perm2, each is a 2 row matrix representing a permutation 
%of the same set of distinctnumbers.  
%The first row has the numbers listed in increasing order, the
%second row the same list permuted.
%Output:  PermOut, the corresponding 2 row matrix representing the tabular
%form of the composition permutation Perm1 o Perm2
PermOut = Perm1;
OrderedObjects = Perm1(1,:);
[a len] = size(Perm1);
for i = 1:len
    Perm2Ind = find(OrderedObjects == Perm2(2,i));
    PermOut(2,i) = Perm1(2,Perm2Ind);
end
