function d = EuclidAlg(a,b)
%  d = EuclidAlg(a,b)
%This program performs the Euclidean algorithm.  It inputs two positive
%integers a, and b, and outputs their greatest common divisor 
%d = gcd(a,b) using the Euclidean algorithm. 
aa = max(a,b); bb = min(a,b);
q = floor(aa/bb); r =  aa - q*bb;
while r > 0
    aa = bb; bb = r; q = floor(aa/bb); r = aa - q*bb;
end
d = bb; %The last nonzero remainder.
