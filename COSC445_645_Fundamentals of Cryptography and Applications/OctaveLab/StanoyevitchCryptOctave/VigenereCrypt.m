function StrOut = VigenereCrypt(str,keystr)
% StrOut = VigenereCrypt(str,keystr)
% Inputs: str = a string of lower case text (alphabet: a, b, ..., z)
%         keystr = a string of lower case text (alphabet: a, b, ..., z)
% Output: StrOut = a string of corresponding Upper-Case ciphertext (alphabet: A, B, ..., Z):
% resulting from encrypting str using the Vigenere cipher with key keystr
Vec = LCText2Int(keystr);
keylength = length(keystr);
for i=1:length(str)
   ishift = mod(i,keylength);
   if ishift == 0, ishift = keylength; end %corresponding to the last character of keystring
   StrOut(i) = ShiftCrypt(str(i),Vec(ishift));
end

