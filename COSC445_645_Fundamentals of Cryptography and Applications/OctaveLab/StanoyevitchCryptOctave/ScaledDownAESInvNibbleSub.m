function OutStateHex = ScaledDownAESInvNibbleSub(InStateHex)
% OutStateHex = ScaledDownAESInvNibbleSub(InStateHex)
% Input: InStateHex = 2 by 2 matrix of single hex digits (i.e.,
% nibbles).
% Output: OutStateHex = 2 by 2 matrix of single hex digits (i.e.,
% nibbles), resulting from the Inv Nibble Sub transformation of the scaled-down
% AES algorithm.
for i = 1:2, for j = 1:2
       OutStateHex(i,j) = ScaledDownAESInvSBox(InStateHex(i,j));
end, end