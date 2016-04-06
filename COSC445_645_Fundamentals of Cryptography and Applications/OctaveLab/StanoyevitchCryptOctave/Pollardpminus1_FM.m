function  Pollardpminus1_FM(n, B)
% Pollardpminus1_FM(n, B)
% Inputs: an odd composite integer n > 3, and a positive integer B:  
% Program will apply Pollard's p-1 factorization algorithm to look for a
% nontrivial factor of n.  A primality test (such as Miller-Rabin) should
% be applied first to assure that n is composite.  If no factor is found,
% algorithm may be reapplied with a larger value of B.



%First we need to compute a^(B!) (mod n); we take a = 2.
A = 2;
for i = 2:B
    A = FastExp(A,i,n);
end

d = gcd(A-1,n);
if d>1
    printf('The following factor of n has been found: d = %d.\n\r', d)
else
    printf('No factor of n was detected; you may wish to reapply the test with a larger value of B.\n\r')
end
    