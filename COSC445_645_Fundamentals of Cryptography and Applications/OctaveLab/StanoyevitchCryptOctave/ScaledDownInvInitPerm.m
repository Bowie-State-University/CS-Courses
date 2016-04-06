function OutVec = ScaledDownInvInitPerm(InVec)
%  OutVec = ScaledDownInvInitPerm(InVec)
% Input: Invec = an  length 8 binary vector
% Output: OutVec = another length 8 vector that results from the first vector
% by applying the inverse of the initial permutation of the scaled-down DES to it.  
IPInv = [3 1 4 6 2 8 7 5];
OutVec = InVec(IPInv);

    
