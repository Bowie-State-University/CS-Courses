function FermatTest_FM(n, k)
% y = FermatTest_FM(n, k)
% Input: an integer n > 3, and an optional second input k, a positive integer.
% Default value for k:  1
% The program will apply the Fermat primality test (Algorithm 8.2) k times.  
% Output: y will be 1 if at least one of the k tests has found n to be 
% composite, and 0 in case all of the tests were inconclusive (meaning, 
% informally, they all found n to be probably prime).
% Program accepts symbolic inputs and calls on the FastExpSym program.
y = 0;  %At the end, y will be 1 if at least one of the k tests has found n to be 
% composite, and 0 in case all of the tests were inconclusive (meaning, 
% informally, they all found n to be probably prime).
if nargin < 2, k = 1; end
for test = 1:k
    a = ceil((n-3)*rand)+1; %randomly select a base a:  1<a<n-1
    pwr = FastExp(a,n-1,n);
    if pwr ~=1  %proof that n is composite
        y = 1; 
        printf('Inputted number was proved composite using the Fermat test.\n\r')
        printf('Here is a corresponding witness: \n\r')
        a
        return
    end
end
if y ==0, 
    printf('Inputted integer n is declared probably prime after %d applications\n\r', k)
    printf('of the Fermat test.\n\r')
end


