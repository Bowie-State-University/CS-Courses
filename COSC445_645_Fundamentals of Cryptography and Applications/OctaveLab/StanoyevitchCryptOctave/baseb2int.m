function y = baseb2int(vec,b)
% y = baseb2int(vec)
%inputs = vec = a vector representing the base b expansion of a positive
%integer, output = y = the corresponding positive integer.
%Output will be a symbolic integer
N = length(vec);
y=0;
for k=N:-1:1
    y = y + b^(N-k)*vec(k);
end
