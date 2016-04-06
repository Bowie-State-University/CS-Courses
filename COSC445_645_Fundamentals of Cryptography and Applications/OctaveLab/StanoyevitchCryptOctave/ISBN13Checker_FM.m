function [] = ISBN13Checker_FM(first12, last)
% ISBN13Checker_FM(first12, last)
vec = ones(12,1);
vec(2:2:12)=3;
check = mod(10 - first12*vec, 10);
if check == last
    printf('No Error detected.\n\r')
else
    printf('Error Detected:  The check digit %d is different from the last digit %d.\n\r', check, last)
end