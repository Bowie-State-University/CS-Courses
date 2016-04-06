function SumPoints = EllipticCurvePointAddition(P1, P2, a, b)
%  SumPoints = EllipticCurvePointAddition(P1, P2, a, b)
if P1(1) == inf, SumPoints = P2; return, end
if P2(1) == inf, SumPoints = P1; return, end
if P1 == P2
    dx = 2*P1(2);
    dy = 3*P1(1)^2+a;
    if dx ~= 0
        m = dy/dx;
        x3 = m^2 - P1(1) - P2(1);
        y3 = m*(P1(1) - x3) - P1(2);
        SumPoints = [x3 y3];
    else
        m = inf;
        SumPoints = [inf inf];
    end
else  %so P1 and P2 are different
    if P2(1) ~= P1(1)
        m = (P2(2)-P1(2))/(P2(1)-P1(1));
        x3 = m^2 - P1(1) - P2(1);
        y3 = m*(P1(1)-x3)-P1(2);
        SumPoints = [x3 y3];
    else
        m = inf;
        SumPoints = [inf inf];
    end
end