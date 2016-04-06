function [P r s] = ElGamalDigitalSig_FM(P,a,d,p,g)
%  [P r s] = ElGamalDigitalSig_FM(P,a,d,p,g)

r = FastExp(g,d,p);
dinv = ModInv(d,p-1);
s = mod(dinv*(P-a*r),p-1);
