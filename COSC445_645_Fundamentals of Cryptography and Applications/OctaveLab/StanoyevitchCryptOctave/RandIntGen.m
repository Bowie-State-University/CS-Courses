function Vec = RandIntGen(min, max, length)
% Vec = RandIntGen(min, max, length)
% Inputs:  min, max, length, where, min < max are integers,
% and length is a positive integer.
% Output:  Vec, a vector with length components that are 
% radomly generated integers in the range min <= k <= max
Vec = min + floor((max+1-min)*rand(1,length));