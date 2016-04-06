function OutStateHex = AESShiftRowR(InStateHex, n)
% OutStateHex = AESShiftRowR(InStateHex, n)
% Inputs: InStateHex = 4 by 4 matrix of two hex digits (i.e.,
% byte)
% n = an integer in the range {1,2,3,4}
% Output: OutStateHex = 4 by 4 matrix of two hex digits (i.e.,
% bytes), resulting from cyclically shifting the elements of row n in the
% inputted matrix one unit to the right.


OutStateHex = InStateHex;
x = OutStateHex(n,4);
for j=4:-1:2,
    OutStateHex(n,j) = OutStateHex(n,j-1);
end
OutStateHex(n,1) = x;
