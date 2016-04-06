function Vec = UCText2Int(str)
% Vec = UCText2Int(str)
% Input: str = a string of Upper Case text (alphabet: A, B, ..., Z)
% Output: Vec = the vector of corresponding nonnegative integers:
% A -> 0,  B->1, ..., Z -> 25

if  max((str < 'A') + (str > 'Z')) > 0
   error('Inputted text must only contain capital letters for UCText2Int');
end

Vec = str - 'A';   %MATLAB converts arithmetic operations on strings to
                   %their integer equivalents.


