function  MillerRabinTestEnhanced_FM(n, k)
% y = MillerRabinTestEnhanced_FM(n, k)
% Inputs: an odd integer n > 3, and a positive integer k:  Program will apply the 
% Miller-Rabin Enhanced Primality Test (Algorithm 8.4).  
% The second input variable k is optional
% (default value is 1).    The program will indicate that n was found to be
% composite, if at least one of the k tests has found n to be composite, 
% and that n is probably prime, in case all of the tests were inconclusive
% (meaning, informally, they all found n to be probably prime).   In cases 
% that n is found composite, the witness a, along with the corresponding 
% exponent parameters [j m], that resulted in the composite conclusion will also
%be outputted, or a nontrivial prime factor, in case one is detected.


if nargin < 2, k = 1; end
%first we determine the largest power f of 2 that divides n - 1:
f = 0;
while floor((n-1)/2^(f+1)) == (n-1)/2^(f+1)
    f = f + 1;
end
m = (n-1)/2^f;

for Test = 1:k
    flag = 0; %will be reset to 1 if Test finds n probably prime
    a = ceil((n - 3)*rand) + 1;%randomly generate a in range 1 < a < n - 1
    A = FastExp(a,m,n);
    if A == 1 | A == n - 1
        %n is declared probably prime; for this particular test,
        %go on to new test.
        flag = 1;
    else
        for j = 1:f-2
            newA = mod(A^2,n);
            if newA == 1
                %n is proved composite; output nontrivial factor, and exit program
                printf('Inputted integer was proved composite using the Miller-Rabin test.\n\r')
                printf('Here is a corresponding nontrivial factor: \n\r')
                gcd(A,n)
                return
            elseif newA == n-1
                %n is declared probably prime; for this particular test,
                %go on to new test.
                flag = 1;
                break  %out of j for loop
            end
            oldA = A; A = newA;
        end
        if flag == 0 %n has not yet been declared probably prime (or composite)
           A = mod(A^2,n); %this is a^(n-1)/2
           if A ~= n-1 & A ~= 1
              printf('Inputted integer was proved composite using the Miller-Rabin test.\n\r')
              printf('Here is a corresponding witness: \n\r')
              a
              printf('The corresponding exponent paramters for 2^j*m are [j m]=:\n\r')
              [k-1 m]
              return
              %in case A == 1, can get a nontrivial factor as above:
           elseif A == 1
                fac1 = gcd(n, oldA);
                printf('A nontrivial factor of the inputted integer has been found to be:\n\r')
                fac1
                return
           else
              flag = 1; %don't really need this
              %n is declared probably prime for this particular test,
              %go on to new test.
           end
        end
    end
end    
%If the program has not yet exited, this means that all k tests resulted in
%a probable prime conclusion, so this will be the overall conclusion.
printf('Inputted integer n is declared probably prime after %d applications\n\r', k)
printf('of the Miller-Rabin test.\n\r')

