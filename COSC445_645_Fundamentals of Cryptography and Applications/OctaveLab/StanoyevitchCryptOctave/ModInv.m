function ainv = ModInv(a,n)
% ainv = ModInv(a,n)
%Input:  a = an integer mod n, and n, an integer modulus
%Output: ainv = the multiplicative inverse of a mod n, if this inverse
%exists, otherwise will produce an error message.
[d x y] = gcd(a,n);
if d > 1, error('No Inverse'), end
ainv = mod(x,n);



   