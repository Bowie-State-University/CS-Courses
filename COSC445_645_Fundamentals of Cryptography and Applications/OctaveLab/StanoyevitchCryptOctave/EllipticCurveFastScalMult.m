function Q = EllipticCurveFastScalMult(P, x, a, b, p)
% Q = EllipticCurveFastScalMult(P, x, a, b, p)
% Inputs:  Two integers a, b, and a prime p > 3.  It is assumed that 4a^3 +
% 27b^2 is nonzero, so that the associated elliptic curve E:
%         y^2 = x^3 + ax + b
% is nonsingular.  The first input P is a length 2 vector of mod p integers
% representing a point on the elliptic curve, the second input x is a positive
% integer representing the scalar multiplier.
% Output:  Q, a length 2 vector of mod p integers representing the point 
% x*P on the elliptic curve.  Program uses the fast integer multiples
% algorithm (Algorithm 12.4)

mult = x;
Q = [inf inf];
D = P;

while mult > 0
    if  mod(mult,2) == 1
        Q = EllipticCurvePointAdditionModp(Q, D, a, b, p);
    end   
    mult = floor(mult/2);
    D = EllipticCurvePointAdditionModp(D, D, a, b, p);
end
