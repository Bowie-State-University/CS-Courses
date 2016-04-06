function OutVec = EuclidAlgExt(a,b)
%  [d x y] = EuclidAlgExt(a,b)
%This program performs the extendedEuclidean algorithm.  It inputs two positive
%integers a, b, and outputs their greatest common divisor 
%d = gcd(a,b) along with two integers x and y such that d = ax + by.
aa = max(a,b); bb = min(a,b);
U = [aa 1 0]; V = [bb 0 1];
while V(1) > 0
    W = U - floor(U(1)/V(1))*V;
    U = V; V = W;
end
d = U(1); x = U(2); y = U(3);
if aa == a
    OutVec = [d x y];
else
    OutVec = [d y x];
end
