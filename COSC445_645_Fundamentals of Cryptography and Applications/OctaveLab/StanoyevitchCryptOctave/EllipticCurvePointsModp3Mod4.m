function Points = EllipticCurvePointsModp3Mod4(a, b, p)
% Points = EllipticCurvePointsModp3Mod4(a, b, p)
% Input:  Two integers a, b, and a prime p > 3.  It is assumed that 4a^3 +
% 27b^2 is nonzero, so that the associated elliptic curve
%         y^2 = x^3 + ax + b
%is nonsingular.
% Output:  Points, a 2 column vector listing all points belonging to this
% elliptic curve mod p, including the point at infinity.  Each row of
% points will be a point on this elliptic curve.
% The method will simply run through all possible values for x (mod p),
% compute the right side r = x^3 + ax + b, and check to see whether
% r^(p+1)/4 (mod p) is a square root of r.
PointIndex = 1;
for x = 0:p-1
    rightside = mod(x^3 + a*x + b, p);
    rpower = FastExp(rightside,(p+1)/4,p);
    if mod(rpower^2,p)==rightside %+/- rpower are sqare roots:
        if rightside == 0  %only one square root
            Points(PointIndex, :) = [x 0];  PointIndex = PointIndex + 1; 
        else
            Points(PointIndex, :) = [x rpower];  PointIndex = PointIndex + 1; 
            Points(PointIndex, :) = [x p-rpower];  PointIndex = PointIndex + 1; 
        end
    end
end
Points(PointIndex, :) = [Inf Inf];