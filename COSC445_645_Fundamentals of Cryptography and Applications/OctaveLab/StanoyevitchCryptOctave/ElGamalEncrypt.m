function [A, C] = ElGamalEncrypt(P,a,B,p,g)
%  [A, C] = ElGamalEncrypt(P,a,B,p,g)

A = FastExp(g,a,p);
C = mod(FastExp(B,a,p)*P,p);
