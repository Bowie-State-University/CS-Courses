function [Pre Post] = AdjacentLetterCounts_FM(STR,k)
%[Pre Post] = AdjacentLetterCounts_FM(STR,k)
%Inputs:  STR = a string of upper case ciphertext w/ (possible) spaces, and
%k = a number between 0 and 25 giving corresponding to a ciphertext letter.
%Output: Two length 26 vectors Pre and Post which give, for the ciphertext
%letter corr. to k, the number of times each of the 26 letters occurs directly
%before (Pre) and directly after (Post) this letter corr. to k in a word.  So if the
%letter occurs at the beginning/end of a word the last letter of the
%previous word/first letter of the subsequent word makes no contributions
%to this letter.

Pre = zeros(1,27); Post = Pre;

Vec = UCTextWithSpaces2Int(STR);
if Vec(1) == k, Post(Vec(2)+1) = Post(Vec(2)+1) + 1; end
for j = 2:length(Vec)-1
        if Vec(j) == k;
            Pre(Vec(j-1)+1)=Pre(Vec(j-1)+1)+1;
            Post(Vec(j+1)+1)=Post(Vec(j+1)+1)+1;
        end
end
if Vec(length(STR)) == k, Pre(Vec(length(STR)-1)+1) = Pre(Vec(length(STR)-1)+1) + 1; end

Pre(27) = []; Post(27) = [];    
            
printf('   Letter counts for the letter %s            \n\r', char(k+65))
printf('============================================================\n\r')
printf('Before      After   Before OR After\n\r')
for j=0:25
    if Pre(j+1)<10
    printf('   %d    %s     %d        %d      \n\r', Pre(j+1), char(65+j), Post(j+1), Pre(j+1)+Post(j+1));
    else
    printf('  %d    %s     %d        %d      \n\r', Pre(j+1), char(65+j), Post(j+1), Pre(j+1)+Post(j+1));
    end
end
printf('The letter %s does not appear before/after %d ciphertext letters.\n\r', char(65+k), 26 - nnz(Pre+Post))
