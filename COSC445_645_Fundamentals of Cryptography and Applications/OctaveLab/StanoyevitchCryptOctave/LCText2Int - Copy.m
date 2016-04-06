function Vec = LCText2Int(str)
% Vec = LCText2Int(str)
% Input: str = a string of Lower Case text (alphabet: a, b, ..., z)
% Output: Vec = the vector of corresponding nonnegative integers:
% a -> 0,  b->1, ..., z -> 25

if  max((str < 'a') + (str > 'z')) > 0
   error('Inputted text must only contain lower-case letters for LCText2Int');
end

Vec = str - 'a';   %MATLAB converts arithmetic operations on strings to
                   %their integer equivalents.


