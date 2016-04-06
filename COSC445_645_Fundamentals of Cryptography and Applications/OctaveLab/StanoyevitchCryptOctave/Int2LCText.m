function str = Int2LCText(Vec)
% str = Int2LCText (Vec)
% Input: Vec = a vector of nonnegative integers in the range 
%                            (0, 1, ..., 25)
% Output: str = a string of corresponding Lower Case text (alphabet: a, b, ..., z):
% 0 -> a,  1 -> b, ..., 25 -> z

if  max((Vec < 0) | (Vec > 25)) > 0
   error('Inputted integer components must be in the range 0 ->25  for Int2LCText');
end

str = char(Vec + 'a');    %MATLAB converts arithmetic operations involving strings to
                           %their integer equivalents, so we need the char
                           %function to bring us back to a string.