function Set = union_FM(SetA, SetB)
% Set = union_FM(SetA, SetB)
% SetA, SetB are two vectors;
% Output is a vector (sorted) of 
% the set union of the elements of the 
% two inputted sets (with duplications removed).
Set = sort([SetA SetB]);
i = 1;
while i<length(Set)
    if Set(i) == Set(i+1);
        Set(i+1)=[];
    else 
        i = i+1;
    end
end
    
    