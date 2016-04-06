function RoundKeys = ScaledDownDESRoundKeys(Key)
% RoundKeys = ScaledDownDESRoundKeys(Key)
% Input:  Key = a 12 bit string Key, that serves as an admissible
% DES key.
% Output: RoundKeys = a 2 by 8 matrix, whose ith row will be the 
% corresponding ith round key binary vector for DES.
%If the key is not admissible (i.e., if the parity check bits do not satisfy
%the required properties) the program will produce an error message.   

Key = BitString2Vec(Key);
%We check if the parity check bits are correct.
for i = 1:2
    if mod(Key(6*i)+sum(Key(6*i-5:6*i-1)),2)==0
        error('Key fails parity bit requirement of DES, use another key and try again.'), return
    end
end

%Next we form the initial permuation of the non-parity check bits of the key.    
IKeyPerm = [10 4 1 5 11 8 9 3 7 2];
Key1 = Key(IKeyPerm);
%Here is the final key selection permutation
FinKeyPerm = [8 2 4 9 7 10 6 3];


%Now split Key1 into left and right halves
C = Key1(1:5); D = Key1(6:end);

for round = 1:2
    %do the left shifts on C and D
    Cnew(1:4)=C(2:5); Cnew(5)=C(1);
    Dnew(1:4)=D(2:5); Dnew(5)=D(1);
    
    C=Cnew; D = Dnew;
    %perform selection permutation on juxtaposition of C and D
    JuxtCD = [C D];

    %The ith key is now the final permuation of JuxtCD
    RoundKeys(round,:) = JuxtCD(FinKeyPerm);

end
