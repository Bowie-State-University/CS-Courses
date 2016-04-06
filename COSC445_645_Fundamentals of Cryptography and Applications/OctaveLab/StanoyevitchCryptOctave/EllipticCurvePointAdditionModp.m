function SumPoints = EllipticCurvePointAdditionModp(P1, P2, a, b, p)
if P1(1) == inf, SumPoints = P2; return, end
if P2(1) == inf, SumPoints = P1; return, end
if P1 == P2
    dx = mod(2*P1(2),p);
    dy = mod(3*P1(1)^2+a,p);
    if gcd(dx,p)==1
        m = mod(dy*ModInv(dx,p),p);
        x3 = mod(m^2 - P1(1) - P2(1),p);
        y3 = mod(m*(P1(1) - x3) - P1(2),p);
        SumPoints = [x3 y3];
    else
        m = inf;
        SumPoints = [inf inf];
    end
else
    if gcd(P2(1)-P1(1),p) == 1
        m = mod((P2(2)-P1(2))*ModInv((P2(1)-P1(1)),p),p);
        x3 = mod(m^2 - P1(1) - P2(1),p);
        y3 = mod(m*(P1(1)-x3)-P1(2),p);
        SumPoints = [x3 y3];
    else
        m = inf;
        SumPoints = [inf inf];
    end
end