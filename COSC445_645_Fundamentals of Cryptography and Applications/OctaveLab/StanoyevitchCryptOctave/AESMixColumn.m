function OutStateHex = AESMixColumn(InStateHex)
% 
% Input: InStateHex = 4 by 4 matrix of digits in the range {0,1,...,255},
% each representing one byte.
% Output: OutStateHex = 4 by 4 matrix of double hex digits (i.e.,
% bytes), resulting from the Mix Column transformation of the 
% AES algorithm.

M = [2 3 1 1; 
1 2 3 1; 
1 1 2 3; 
3 1 1 2];


final = '0';

for i = 1:4, 
    for j = 1:4
        for k = 1:4
           
           position = ByteMult(dec2hex(M(i,k)), dec2hex(InStateHex(k,j)));
           final = ByteXOR(final, position);
        end
    OutStateHex(i,j) = hex2dec(final);
    final = '0';
    end
end