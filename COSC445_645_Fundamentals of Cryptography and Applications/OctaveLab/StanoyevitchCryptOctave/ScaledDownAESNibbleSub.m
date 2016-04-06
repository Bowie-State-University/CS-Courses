function OutStateHex = ScaledDownAESNibbleSub(InStateHex)
% OutStateHex = ScaledDownAESNibbleSub(InStateHex)
% Input: InStateHex = 2 by 2 matrix of single hex digits (i.e.,
% nibbles).  
% Output: OutStateHex = 2 by 2 matrix of single hex digits (i.e.,
% nibbles), resulting from the Nibble Sub transformation of the scaled-down
% AES algorithm.
for i = 1:2, for j = 1:2
       OutStateHex(i,j) = ScaledDownAESSBox(InStateHex(i,j));
end, end

