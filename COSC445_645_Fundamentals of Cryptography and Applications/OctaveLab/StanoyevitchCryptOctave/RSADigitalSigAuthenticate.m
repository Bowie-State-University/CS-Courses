function P = RSADigitalSigAuthenticate(s,e,n)
%  P = RSADigitalSigAuthenticate(s,e,n)
P = FastExp(s,e,n);
