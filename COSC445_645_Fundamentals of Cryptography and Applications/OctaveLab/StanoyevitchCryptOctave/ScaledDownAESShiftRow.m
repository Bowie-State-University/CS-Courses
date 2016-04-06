function OutStateHex = ScaledDownAESShiftRow(InStateHex)
% OutStateHex = ScaledDownAESShiftRow(InStateHex)
% Input: InStateHex = 2 by 2 matrix of single hex digits (i.e.,
% nibbles).  
% Output: OutStateHex = 2 by 2 matrix of single hex digits (i.e.,
% nibbles), resulting from the Shift Row transformation of the scaled-down
% AES algorithm.
OutStateHex=InStateHex;
OutStateHex(2,:) = OutStateHex(2,[2 1]);
