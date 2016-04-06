function str = Int2UCText(Vec)
% str = Int2UCText (Vec)
% Input: Vec = a vector of nonnegative integers in the range 
%                            (0, 1, ..., 25)
% Output: str = a string of corresponding Upper-Case text (alphabet: A, B, ..., Z):
% 0 -> A,  1 -> B, ..., 25 -> Z

if  max((Vec < 0) | (Vec > 25)) > 0
   error('Inputted integer components must be in the range 0 ->25  for Int2UCText');
end

str = char(Vec + 'A');    %MATLAB converts arithmetic operations involving strings to
                           %their integer equivalents, so we need the char
                           %function to bring us back to a string.