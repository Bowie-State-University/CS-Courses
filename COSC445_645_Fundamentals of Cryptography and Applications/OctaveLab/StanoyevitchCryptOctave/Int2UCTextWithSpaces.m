function str = Int2UCTextWithSpaces(Vec)
% str = Int2UCTextWithSpaces(Vec)
% Input: Vec = a vector of nonnegative integers in the range 
%                            (0, 1, ..., 25, 26)
% Output: str = a string of corresponding Upper-Case text (alphabet: A, B, ..., Z, space):
% 0 -> A,  1 -> B, ..., 25 -> Z, 26 -> space


for i =1:length(Vec)
   if  Vec(i) < 26
       str(i) = char(Vec(i) + 'A');%MATLAB converts arithmetic operations involving strings to
                           %their integer equivalents, so we need the char
                           %function to bring us back to a string.
   else 
       str(i) = char(32); %space
   end
end 