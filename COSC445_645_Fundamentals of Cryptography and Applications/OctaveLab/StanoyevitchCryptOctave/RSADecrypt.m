function P = RSADecrypt(C,d,n)
%  P = RSADecrypt(C,d,n)
P = FastExp(C,d,n);
