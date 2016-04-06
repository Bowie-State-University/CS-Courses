function K = DiffieHellmanKey(p,g,B,a)
%  K = DiffieHellmanKey(p,g,B,a)
K = FastExp(B,a,p);
