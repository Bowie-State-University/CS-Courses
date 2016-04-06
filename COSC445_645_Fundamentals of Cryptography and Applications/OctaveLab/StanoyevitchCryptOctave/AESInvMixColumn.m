function OutStateHex = AESInvMixColumn(InStateHex)
% OutStateHex = AESInvMixColumn(InStateHex)
% Input: InStateHex = 4 by 4 matrix of digits in the range {0,1,...,255},
% each representing one byte.
% Output: OutStateHex = 4 by 4 matrix of double hex digits (i.e.,
% bytes), resulting from the Inverse Mix Column transformation of the 
% AES algorithm.
M = [14 11 13 9;  
9 14 11 13; 
13 9 14 11; 
11 13 9 14];

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
