function strOut = AffineDeCrypt(STR,alpha,beta)
% strOut = AffineDeCrypt(STR,alpha,beta)
% Inputs: STR = a string of Upper Case text (alphabet: A, B, ..., Z)
%         alpha, kappa, integers mod 26, with gcd(alpha,26) = 1.
%                            (0, 1, ..., 25)
% Output: strOut = a string of corresponding lower case plaintext (alphabet: a, b, ..., c):
% resulting from decrypting STR that was assumed to have been decrypted 
% using the affince cipher y = alpha*Vec +  beta,
% where Vec is the vector of mod 26 integers corresponding to the plaintext under the
% basic correspondence
% 0 <-> a,  1 <-> b, ..., 25 <-> z
Vec = UCText2Int(STR);
VecOut = mod( ModInv(alpha,26)*(Vec - beta), 26);
strOut = Int2LCText(VecOut);
