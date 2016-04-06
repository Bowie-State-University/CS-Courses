function y = bin2int(vec)
% y = bin2int(vec)
%input = vec = a bit string representing the binary expansion of a positive
%integer, output = y = the corresponding positive integer.  
N = length(vec);
y=0;
for k=N:-1:1
    y = y + 2^(N-k)*vec(k);
end
