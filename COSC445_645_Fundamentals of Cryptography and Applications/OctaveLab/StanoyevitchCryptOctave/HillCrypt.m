function StrOut = HillCrypt(str,A)
% StrOut = HillCrypt(str,A)
% Inputs: str = a string of lower case text (alphabet: a, b, ..., z)
%         A = an invertible matrix mod 26
% Output: StrOut = a string of corresponding Upper-Case ciphertext (alphabet: A, B, ..., Z):
% resulting from encrypting str using the Hill cipher with encryption
% matrix A
[n n] = size(A);
Vec = LCText2Int(str);
lenVec = length(Vec);  
remlen = mod(lenVec,n); %if this is postive, we need to append on the plaintext vector 
                        %to make its length a multiple of n
if remlen > 0
    addlen = n - remlen;
    Vec(lenVec + 1: lenVec + addlen) = 13;
end
numCols = length(Vec)/n;
P = reshape(Vec, [n numCols]);
C = mod(A*P,26);
VecOut = C(:)';
StrOut = Int2UCText(VecOut);


