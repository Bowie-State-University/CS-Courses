function s = RSADigitalSig(P,d,n)
%  s = RSADigitalSig(P,d,n)
s = FastExp(P,d,n);
