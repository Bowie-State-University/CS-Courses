function outStateHex = ScaledDownAESStateXOR(SHex, KeyHex)
% outStateHex = ScaledDownAESStateXOR(SHex, KeyHex)
% Inputs and output are 2 by 2 matrices of single hex digits (i.e.,
% nibbles).  Entries of the output matrix are just the XOR of the
% corresponding nibbles in the input matrix.  This program can be used for
% the Add Round Key operation in the scaled-down AES algorithm.
for i = 1:2, for j = 1:2
       outStateHex(i,j) = NibbleXOR(SHex(i,j), KeyHex(i,j));
end, end

