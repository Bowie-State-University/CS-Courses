function fgx = ZpModmMult(fx,gx,mx,p)
% fgx = ZpModmMult(fx,gx,mx,p)
%Program for multiplying elements in Zp[X] (mod m).
%Inputs are three vectors representing polynomials: fx, gx, mx, and p a prime number.
%We assume that
%the first components of fx, gx, mx are nonzero, unless the polynomial is
%zero, in which case [0] is used to represent it. mx is assumed
%nonconstant.
%Output will be a vectors fgx, representing the produce of the two 
%polynomials  fx by gx, reduced mod mx  
%All polynomials are stored as vectors in the following format:
%X^4 +3X^2 + 1 ---> [1 3 0 1]

%First multiply polynomials as usual in Z_p[X]:
fgxRaw = ZpPolyMult(fx,gx,p);

%Now apply the division algorithm and take fgx to be the remainder:
[qx fgx] = ZpDivAlg(fgxRaw ,mx,p);


