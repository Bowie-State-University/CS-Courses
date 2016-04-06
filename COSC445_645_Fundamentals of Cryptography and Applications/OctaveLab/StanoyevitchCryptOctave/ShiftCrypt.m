function StrOut = ShiftCrypt(str,kappa)
% StrOut = ShiftCrypt(str,kappa)
% Inputs: str = a string of lower case text (alphabet: a, b, ..., z)
%         kappa, an integer mod 26
% Output: StrOut = a string of corresponding upper-case ciphertext (alphabet: A, B, ..., Z):
% resulting from encrypting str using the shift cipher y = Vec +  kappa,
% where Vec is the vector of mod 26 integers corresponding to str under the
% basic correspondence
% 0 <-> a,  1 <-> b, ..., 25 <-> z
Vec = LCText2Int(str);
VecOut = mod( Vec + kappa, 26);
StrOut = Int2UCText(VecOut);
