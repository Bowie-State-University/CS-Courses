function Ind = CoincidenceIndex(STR1, STR2)
% Ind = CoincidenceIndex(STR1, STR2)
% Inputs:  STR1, STR2 = two strings of the same length
% Output: Ind = thier incidence of coincidence.


Count = sum(STR1==STR2);
Ind = Count/length(STR1);

