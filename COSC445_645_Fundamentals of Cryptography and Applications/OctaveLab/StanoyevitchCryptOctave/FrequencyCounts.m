function Vec = FrequencyCounts(STR,i,n)
% Vec = FrequencyCounts(STR,i,n)
% Inputs:  STR a string of ciphertext in upper-case letters
%          i <= n positive integers
% Output: Vec = a 26 component vector that gives the tallies of the
% appearances of the 26 letters A, B, C, … (in order) in all of the 
% positions of the ciphertext whose places are congruent to i (mod n)
index = 'A';
lenSTR = length(STR);
STRpart = STR(i:n:lenSTR);
for j = 1:26
    Vec(j) = length(find(index == STRpart));
    index = index + 1;
end

    
