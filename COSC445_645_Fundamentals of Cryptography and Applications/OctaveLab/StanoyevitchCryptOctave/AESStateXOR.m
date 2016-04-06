function outStateHex = AESStateXOR(SHex, KeyHex)
% outStateHex = AESStateXOR(SHex, KeyHex)
% The two inputs and output are 4 by 4 matrices of double hex digits (i.e.,
% bytes).  Entries of the output matrix are just the XOR of the
% corresponding nibbles in the input matrix.  This program can be used for
% the Add Round Key operation in the AES algorithm.
for i = 1:4, for j = 1:4
       outStateHex(j,i) = hex2dec(ByteXOR(dec2hex(SHex(j,i)), dec2hex(KeyHex(j,i))));
end, end

