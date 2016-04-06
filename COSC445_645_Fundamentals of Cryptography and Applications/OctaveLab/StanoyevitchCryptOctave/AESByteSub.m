function OutStateHex = AESByteSub(InStateHex)
% OutStateHex = ScaledDownAESNibbleSub(InStateHex)
% Input: InStateHex = 4 by 4 matrix of double hex digits (i.e.,
% bytes).  
% Output: OutStateHex = 4 by 4 matrix of single hex digits (i.e.,
% bytes), resulting from the Byte Sub transformation of the
% AES algorithm.
for i = 1:4, 
    for j = 1:4,
       OutStateHex(i,j) = hex2dec(AESSBox(dec2hex(InStateHex(i,j))));
    end
end

