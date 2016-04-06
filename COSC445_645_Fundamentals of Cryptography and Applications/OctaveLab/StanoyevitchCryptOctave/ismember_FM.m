function z = ismember_FM(x, Set)
% z = ismember_FM(x, Set)
% x is a number; set is a vector
% output z = 1 if x is an element of Set
% else z = 0.
z = 0;
for i = 1:length(Set)
    if x == Set(i)
        z = 1; return
    end
end
    