function strOut = HillDeCrypt(STR,A)
% strOut = HillDeCrypt(STR,A)
% Inputs: STR = a string of upper case text (alphabet: A, B, ..., Z)
%         A = an invertible matrix mod 26
% Output: strOut = a string of corresponding lowercase plaintext (alphabet: a, b, ..., z):
% resulting from decrypting STR using the Hill cipher with encryption
% matrix A
[n n] = size(A);
Ainv = MatModInv(A,26);
Vec = UCText2Int(STR);
lenVec = length(Vec);  
numCols = length(Vec)/n;
C = reshape(Vec, [n numCols]);
U = mod(Ainv*C,26);
VecOut = U(:)';
strOut = Int2LCText(VecOut);


