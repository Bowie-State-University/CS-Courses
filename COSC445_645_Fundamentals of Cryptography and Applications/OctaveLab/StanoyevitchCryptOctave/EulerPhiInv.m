function nVec = EulerPhiInv(k)
% nVec = EulerPhiInv(k)
% Input:  k = a positive integer
% Output: nVec = the vector of solutions of the equation phi(n) = k (may be
% empty vector)
% This is a brute force search, using the inequality phi(n) >= sqrt(n) if n
% not = 2, 6, so that phi(n) > sqrt(n) - 1 for any positive integer n.
% This implies that if phi(n) = k, then n < (k+1)^2
 
nVec = [];
for n = 1:(k+1)^2-1
    if EulerPhi(n)==k
        nVec = [nVec n];
    end
end
   