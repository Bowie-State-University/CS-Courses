function Points = EllipticCurvePointsModp(a, b, p)
% Points = EllipticCurvePointsModp(a, b, p)
% Input:  Two integers a, b, and a prime p > 3.  It is assumed that 4a^3 +
% 27b^2 is nonzero, so that the associated elliptic curve
%         y^2 = x^3 + ax + b
%is nonsingular.
% Output:  Points, a 2 column vector listing all points belonging to this
% elliptic curve mod p, including the point at infinity.  Each row of
% points will be a point on this elliptic curve.
% The method will simply run through all possible values for x (mod p) and
% then do a brute force search for any y's that satify the equation.
PointIndex = 1;
for x = 0:p-1
    rightside = mod(x^3 + a*x + b, p);
    for y = 0:p-1
        if mod(y^2, p) == rightside
            Points(PointIndex, :) = [x y];
            PointIndex = PointIndex + 1;
        end
    end
end
Points(PointIndex, :) = [Inf Inf];