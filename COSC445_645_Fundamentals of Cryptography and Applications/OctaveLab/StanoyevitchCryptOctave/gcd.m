function [d,x,y] = gcd(a,b)
%  [d,x,y] = gcd(a,b)
%   Input: a, b, integers not both zero.
%   Outputs:  Integers d, x, y, where d is the greatest 
%   common divisor of a and b, and x and y satisfy:
%   d = ax + by

   u = [1 0 abs(a)];
   v = [0 1 abs(b)];
   while v(3)~= 0
       q = floor( u(3)/v(3) );
       t = u - v*q;
       u = v;
       v = t;
   end
 
   x = u(1) * sign(a);
   y = u(2) * sign(b);
   d = u(3);
end

