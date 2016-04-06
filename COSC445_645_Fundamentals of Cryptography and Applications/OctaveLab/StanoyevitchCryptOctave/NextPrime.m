function p = NextPrime(n)
% p = NextPrime(n)
% n = a postive integer, program will output the first prime 
% that is greater than p.

p = n + 1;
% skip any even integers
if mod(p,2)==0
   p = p + 1;
end

while length(factor(p))>1
   p = p + 2;
end
