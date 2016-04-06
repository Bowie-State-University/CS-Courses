function P = ElGamalDecrypt(A,C,b,p)
%  P = ElGamalDecrypt(A,C,b,p)

P = mod(FastExp(A,p-1-b,p)*C,p);
