function c = FastExp(a,b,n)
% c = FastExp(a,b,n)
% Input:  a, b, < n positive integers, n = the modulus
% Output: c = a^b (mod n) 
% Program uses the fast exponentiation method to calculate c = a^b (mod n).  
% Beginning with factor = a^1: 
% on each pass, it is determined whether this is a desired factor.  If so, then 
% it is multiplied into a variable containing a cumulative product of desired 
% factors.  Then the factor is squared, and the process repeated.

expon = b;
c = ones(size(a));
factor = a;

while(expon > 0)
    if (mod(expon,2) == 1)
        c = mod(c .* factor,n);
    end
    
    expon = floor(expon/2);
    factor = mod(factor.*factor,n);
end
