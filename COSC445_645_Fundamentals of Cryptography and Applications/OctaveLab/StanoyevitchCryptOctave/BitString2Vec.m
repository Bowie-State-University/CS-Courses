function Vec = BitString2Vec(Str)
% Vec = BitString2Vec(Str)
% Input:  Str = a string of bits (binary string)
% Output: Vec = the corresponding vector of integers
Vec = double(Str-48);