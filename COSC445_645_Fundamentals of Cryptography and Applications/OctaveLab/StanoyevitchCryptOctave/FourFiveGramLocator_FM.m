function  [Record DuplicatedGrams] = FourFiveGramLocator_FM(STR)
% [Record DuplicatedGrams] = FourFiveGramLocator_FM(STR)
% Input:  STR a string of ciphertext in upper-case letters
%         
% Outputs: Record = a matrix containing numercial data corresponding to all
% repeated 4-grams, and 5-grams in the ciphertext sample. Each
% Record corresponds to a duplicated gram in STR (of length  4 or 5).
% The number of columns of Record is 4:  the first column gives the length
% of the gram (4 or 5), the second column gives the location of the 
% character in the first instance of the gram, the third column gives the number of
% occurrences of the gram in the ciphertext, and the fourth column gives
% the gcd of all separation distances between the duplications.
% DuplicatedGrams = a vector of the strings of duplicated grams
% corresponding to the rows of the Record matrix.

%Initialize Record, and row counter:
Record = zeros(1,4); row = 1;
numChars = length(STR);


%Search for duplicated 4-grams:
%First form vector of 4-grams:
for i = 1:numChars-3
    Fourgrams(i,:) = STR(i:i+3);
end
%Now use nested for loops to find and record duplication data:
DupFourgramIndexSet = []; %initially set of duplicated 4-grams is empty 
for i = 1:numChars-3
    if ~ (ismember_FM(i,DupFourgramIndexSet)) %this is a new 4-gram to be looked at
    fourgram = Fourgrams(i,:);
    dupCounter = 0; DupIndSet = [i];
    for j = i+1:numChars-3
        if min(Fourgrams(j,:) == fourgram)>0; %duplication found
            DupIndSet = union_FM(j,DupIndSet);
            dupCounter = dupCounter + 1;
            sepdist = j-i;
            if dupCounter == 1
                sepdistGCD = sepdist;
            else
                sepdistGCD = EuclidAlg(sepdistGCD, sepdist);
            end
        end
    end
    end
    if dupCounter > 0
    Record(row,:) = [4   i  dupCounter+1  sepdistGCD];
    DuplicatedGrams(row,:) = [fourgram, ' '];
    row = row + 1;
    DupFourgramIndexSet = union_FM(DupFourgramIndexSet,DupIndSet);
    end
end

%Search for duplicated 5-grams:
%First form vector of 5-grams:
for i = 1:numChars-4
    Fivegrams(i,:) = STR(i:i+4);
end
%Now use nested for loops to find and record duplication data:
DupFivegramIndexSet = []; %initially set of duplicated 5-grams is empty 
for i = 1:numChars-4
    if ~ (ismember_FM(i,DupFivegramIndexSet)) %this is a new 5-gram to be looked at
    fivegram = Fivegrams(i,:);
    dupCounter = 0; DupIndSet = [i];
    for j = i+1:numChars-4
        if min(Fivegrams(j,:) == fivegram)>0 %duplication found
            DupIndSet = union_FM(j,DupIndSet);
            dupCounter = dupCounter + 1;
            sepdist = j-i;
            if dupCounter == 1
                sepdistGCD = sepdist;
            else
                sepdistGCD = EuclidAlg(sepdistGCD, sepdist);
            end
        end
    end
    end
    if dupCounter > 0
    Record(row,:) = [5   i  dupCounter+1  sepdistGCD];
    DuplicatedGrams(row,:) = fivegram;
    row = row + 1;
    DupFivegramIndexSet = union_FM(DupFivegramIndexSet,DupIndSet);
    end
end    
