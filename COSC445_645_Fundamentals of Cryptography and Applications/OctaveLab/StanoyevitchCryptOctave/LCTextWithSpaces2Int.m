function Vec = LCTextWithSpaces2Int(str)
% Vec = LCTextWithSpaces2Int(str)
% Input: str = a string of lowercase text with spaces
% Output:  Vec = the vector of nonnegative integers in the range
%                            (0, 1, ..., 25, 26)
% under the standard correspondence:
% 0 <-> a,  1 <-> b, ..., 25 <-> z, 26 <-> space


for i =1:length(str)
   if  double(str(i)) > 32
       Vec(i) = double(str(i))-97; %In MATLAB:  a <-> 97,...,z <-> 122, space <-> 32
   else 
       Vec(i) = 26; %space
   end
end 