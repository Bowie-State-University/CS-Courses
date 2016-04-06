function p = primes(n)
%p = primes(n)
%   primes(n) is a row vector of the prime numbers less than or 
%   equal to n.  

if length(n)~=1 
  error('Input Not Scalar\n', 'n must be a scalar'); 
end
if n < 2, p = zeros(1,0,class(n)); return, end
p = 1:2:n;
q = length(p);
p(1) = 2;
for k = 3:2:sqrt(n)
  if p((k+1)/2)
     p(((k*k+1)/2):k:q) = 0;
  end
end
p = p(p>0); p = p';

