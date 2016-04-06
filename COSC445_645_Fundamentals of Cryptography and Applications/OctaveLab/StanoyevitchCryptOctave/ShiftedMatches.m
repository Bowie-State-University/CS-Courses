function Count = ShiftedMatches(STR,i)
% Count = ShiftedMatches(STR,i)
% Inputs:  STR a string of ciphertext in upper-case letters
%          i = a postive integer (horizontal shift parameter)
% Output: Count = a nonnegative integer that will equal the number of exact
% matches, when two copies of the ciphertext are written out with the 
% second copy shifted horizontally i characters to the right.  By an exact
% match, we mean that a certain ciphertext letter of the first list, has
% the same ciphertext character directly below it in the second list.   

%We create two new vectors of length = length(STR) + i,
%The first one (corresponding to the unshifted STR) has i 1's padded on the
%right, the second (corresponding to the shifted STR) has i 0's padded on
%the left.
STRUnshift = [STR ones(1,i)];  STRShift = [zeros(1,i) STR];
Count = sum(STRUnshift==STRShift);

