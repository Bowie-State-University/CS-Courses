function OutVec = ScaledDownInitPerm(InVec)
%  OutVec = ScaledDownInitPerm(InVec)
% Input: Invec = an length 8 binary (plaintext) vector
% Output: OutVec = another length vector that results from the first vector
% by applying the initial permutation of scaled-down DES to it.  
IP = [2 5 1 3 8 4 7 6];
OutVec = InVec(IP);

    
