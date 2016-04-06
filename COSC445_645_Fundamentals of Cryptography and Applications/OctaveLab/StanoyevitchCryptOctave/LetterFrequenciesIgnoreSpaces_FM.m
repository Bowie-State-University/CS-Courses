function Freq = LetterFrequenciesIgnoreSpaces_FM(STR)
%Freq = LetterFrequenciesIgnoreSpaces_FM(STR)
%Input:  STR = a string of upper case ciphertext w/ (possible) spaces
%Output: Freq = a vector of percentages of occurences of each of the
%letters A -> Z in Str.  A summary table will also be produced in the
%command window.  This program calls on UCTextWithSpaces2Int

Vec = UCTextWithSpaces2Int(STR);
SpaceInd = find(Vec == 26); %indices of spaces
Vec(SpaceInd) = []; %delete these components before counting frequencies
totChars = length(Vec); %total number of characters in STR.
printf('   Letter        Frequency            \n\r')
printf('===============================\n\r')
for k=0:25
   Freq(k+1) = sum(Vec == k)/totChars;
   printf('      %s          %f          \n\r', char(65+k), Freq(k+1));
end
