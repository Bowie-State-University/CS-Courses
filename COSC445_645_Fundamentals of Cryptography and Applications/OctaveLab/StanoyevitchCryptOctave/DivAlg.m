function [q r] = DivAlg(a,d)
%This program performs the division algorithm.  It inputs a positive
%integer d = the divisor, and another integer a = the dividend.  
%The output will be the (unique) integers q = the quotient, and r = the 
%remainder, satisfying a = dq + r, with 0 <= r < a.
q = floor(a/d);
r = a - q*d;
