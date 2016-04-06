function Freq = LetterFrequencies_FM(Str)
%Freq = LetterFrequencies_FM(Str)
%Input:  Str = a string of upper case ciphertext
%Output: Freq = a vector of percentages of occurences of each of the
%letters A -> Z in Str.  A summary table will also be produced in the
%command window.  This program calls on UCText2Int

Vec = UCText2Int(Str);
totChars = length(Str); %total number of characters in Str.

printf('   Letter        Frequency           \n\r')
printf('===============================\n\r')
for k=0:25
   Freq(k+1) = sum(Str == (65+k)*ones(size(Str)))/totChars;
   printf('      %s          %f          \n\r', char(65+k), Freq(k+1));
end;


