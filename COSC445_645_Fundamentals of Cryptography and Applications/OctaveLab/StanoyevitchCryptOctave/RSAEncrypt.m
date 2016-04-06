function C = RSAEncrypt(P,e,n)
%  C = RSAEncrypt(P,e,n)
C = FastExp(P,e,n);
