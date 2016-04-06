function C = ScaledDownDESDecrypt(P,Key)
% C = ScaledDownDESDecrypt(P,Key) 
% Inputs: P = 8 bit (ciphertext) string, Key =  a 12 bit string
% that serves as an admissible DES key.  
% Output: C = the 8 bit (plaintext) string that corresponds to the
% output of the Scaled-down DES encryption algorithm (Algorithm 7.1).  
% If the key is not admissible (i.e., if the parity check bits do not
% satisfy the required properties) the program will produce an error message.
% NOTE:  We used P for the ciphertext and C for the plaintext variable in this program
% to make the program easy to obtain from the corresponding encryption program.  This way,
% only one line of code needs to be changed (in Step 2 of the Feistel system):
% RoundKey = RoundKeys(round,:);---->RoundKey = RoundKeys(3-round,:);
% We first convert the inputted strings into binary vectors:
PVec = BitString2Vec(P);
KeyVec = BitString2Vec(Key);

%We check if the parity check bits are correct.
for i = 1:2
    if mod(KeyVec(6*i)+sum(KeyVec(6*i-5:6*i-1)),2)==0
        error('Key fails parity bit requirement of DES, use another key and try again.'), return
    end
end

%We generate the 2 round keys; the ith row of the following matrix is the
%ith round key vector (of 8 bits), i = 1,2
RoundKeys = ScaledDownDESRoundKeys(Key);


%Step 1:  Initial Permutation
PIP = ScaledDownInitPerm(PVec);
L = PIP(1:4); R = PIP(5:8);

%Step 2:  2 Round Feistel Cipher
for round = 1:2
    RoundKey = RoundKeys(3-round,:);
    Lnew = R;
    Rnew = xor(L,BitString2Vec(ScaledDownDESRoundKeyFunction(R,RoundKey)));
    L = Lnew; R = Rnew;
end

%Step 3: Left/Right switch, and then apply inverse of initial permutation
%to get the ciphertext

C = ScaledDownInvInitPerm([R L]);
C = Vec2BitString(C);

