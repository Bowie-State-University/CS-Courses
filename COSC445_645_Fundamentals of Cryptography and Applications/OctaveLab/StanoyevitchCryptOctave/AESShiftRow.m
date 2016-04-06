function OutStateHex = AESShiftRow(InStateHex, n)
% OutStateHex = AESShiftRow(InStateHex, n)
% Inputs: InStateHex = 4 by 4 matrix of digits in the range {0,1,...,255},
% each representing one byte.
% n = a positive integer.
% Output: OutStateHex = 4 by 4 matrix of resulting from the inputted matrix
% by shifting the entries in the nth row on unit to the left (with cycling)


OutStateHex = InStateHex;
x = OutStateHex(n,1);
for j=1:3,
    OutStateHex(n,j) = OutStateHex(n,j+1);
end
OutStateHex(n,4) = x;
