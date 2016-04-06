function gcd = ZpEuclidAlg(ax,bx,p)
% gcd = ZpEuclidAlg(ax,bx,p)
if bx(1) == 0;
    gcd = ax; return
end
if ax(1) == 0;
    gcd = bx; return
end

%So we now assume both polynomials ax and bx are nonzero.
Rem_m1 = ax; Rem = bx; 
[Quot NewRem] = ZpDivAlg(Rem_m1,Rem,p);
while NewRem(1) ~= 0
    Rem_m1 = Rem; Rem = NewRem;
    [Quot NewRem] = ZpDivAlg(Rem_m1,Rem,p);
end
gcd = Rem;