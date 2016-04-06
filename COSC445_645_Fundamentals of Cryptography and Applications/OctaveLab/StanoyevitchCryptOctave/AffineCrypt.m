function StrOut = AffineCrypt(str,alpha,beta)
% StrOut = AffineCrypt(str,a,k)
% Inputs: str = a string of Lower Case text (alphabet: a, b, ..., z)
%         alpha, kappa, integers mod 26, with gcd(alpha,26) = 1.
%                            (0, 1, ..., 25)
% Output: StrOut = a string of corresponding Upper-Case ciphertext (alphabet: A, B, ..., Z):
% resulting from encrypting str using the affince cipher y = alpha*Vec +  beta,
% where Vec is the vector of mod 26 integers corresponding to str under the
% basic correspondence
% 0 <-> a,  1 <-> b, ..., 25 <-> z
Vec = LCText2Int(str);
VecOut = mod( alpha*Vec + beta, 26);
StrOut = Int2UCText(VecOut);
