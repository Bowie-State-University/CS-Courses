function Order = EllipticCurvePointsModpOrder(P, a, b, p)
% Order = EllipticCurvePointsModpOrder(P, a, b, p)
% Input:  Two integers a, b, and a prime p > 3.  It is assumed that 4a^3 +
% 27b^2 is nonzero, so that the associated elliptic curve E:
%         y^2 = x^3 + ax + b
% is nonsingular.  The first input P is a length 2 vector of mod p integers
% representing a point on the elliptic curve
% Output:  Order, a postive integer representing the order of P in the
% abelian group E (mod p).  The order is computed by brute force:  simply
% continuing to compute the sum P+P+P+... until we obtain the identity
% (inf, inf).  Although it is known that this order divides |E|, the latter
% is nontrivial to compute
Order = 1;
SumPs = P;
while sum(SumPs ~= [Inf Inf])>0
    SumPs = EllipticCurvePointAdditionModp(SumPs, P, a, b, p); Order = Order + 1;
end