function strOut = VigenereDeCrypt(STR,keystr)
% strOut = VigenereDeCrypt(STR,keystr)
% Inputs: STR = a string of upper-case text (alphabet: A, B, ..., Z)
%         keystr = a string of lower case text (alphabet: a, b, ..., z)
% Output: s = a string of corresponding lower-Case plaintext(alphabet: a,b, ..., z)
% resulting from decrypting STR under the Vigenere cipher with key keystr
Vec = LCText2Int(keystr);
keylength = length(keystr);
LCSTR = Int2LCText(UCText2Int(STR)); %need lower-case letter to feed into the shift program
for i=1:length(STR)
   ishift = mod(i,keylength);
   if ishift == 0, ishift = keylength; end %corresponding to the last character of keystring
   strOut(i) = ShiftCrypt(LCSTR(i),-Vec(ishift));
end
strOut = Int2LCText(UCText2Int(strOut));

