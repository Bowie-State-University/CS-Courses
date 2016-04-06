function Ainv = MatModInv(A,n)
% Ainv = MatModInv(A,n)
%Input:  A = a square matrix of integers mod n, and n = an integer modulus
%Output: Ainv = the multiplicative inverse of A mod n, if this inverse
%exists, otherwise will produce an error message.
d = mod(round(det(A)),n);
if gcd(d,n)>1 , error('The matrix %d has no inverse mod %d.', A, n), end
Ainv = mod(round(det(A)*inv(A))*ModInv(d,n), n);



   