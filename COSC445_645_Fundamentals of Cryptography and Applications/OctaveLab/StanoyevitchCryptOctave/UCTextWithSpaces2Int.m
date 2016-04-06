function Vec = UCTextWithSpaces2Int(STR)
% Vec = UCTextWithSpaces2Int(STR)
% Input: STR = a string of UPPERCASE text with spaces
% Output:  Vec = the vector of nonnegative integers in the range
%                            (0, 1, ..., 25, 26)
% under the standard correspondence:
% 0 <-> A,  1 <-> B, ..., 25 <-> Z, 26 <-> space


for i =1:length(STR)
   if  double(STR(i)) > 32
       Vec(i) = double(STR(i))-65; %In MATLAB:  A <-> 65,...,Z <-> 90, space <-> 32
   else 
       Vec(i) = 26; %space
   end
end 