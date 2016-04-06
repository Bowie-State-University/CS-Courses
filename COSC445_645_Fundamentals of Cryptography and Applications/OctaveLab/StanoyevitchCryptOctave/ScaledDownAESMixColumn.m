function OutStateHex = ScaledDownAESMixColumn(InStateHex)
% OutStateHex = ScaledDownAESMixColumn(InStateHex)
% Input: InStateHex = 2 by 2 matrix of single hex digits (i.e.,
% nibbles).  
% Output: OutStateHex = 2 by 2 matrix of single hex digits (i.e.,
% nibbles), resulting from the Mix Column transformation of the scaled-down
% AES algorithm.

%This transformation is a matrix multiplication of the input state nibble matrix
%with the 2 by 2 nibble matrix M:  
% 1  X^2
% X^2 1
% In hex notation, this matrix is:
% 1 4
% 4 1
% To construct the entries of the product matrix, we need to use the
% definition of matrix multiplication since nibble addition (NibbleXOR) and
% nibble multiplication (NibbleMult) are not the default operations used to
% compute matrix products.
M = ['1' '4'; 
     '4' '1'];
for i = 1:2, for j = 1:2
       OutStateHex(i,j) = NibbleXOR(NibbleMult(M(i,1),InStateHex(1,j)), NibbleMult(M(i,2),InStateHex(2,j)));
end, end