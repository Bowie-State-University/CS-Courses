function C = DES(P,Key)
% C = DES(P,Key) 
% Inputs: P = 64 bit (plaintext) vector P, Key =  a 64 bit vector
% that serves as an admissible DES key.  
% Output: C = the 64 bit (ciphertext) vector that corresponds to the
% output of the DES encryption algorithm.  
% If the key is not admissible (i.e., if the parity check bits do not
% satisfy the required properties) the program will produce an error message.

%First we check if the parity check bits are correct.
for i = 8:8:64
    if mod(Key(i)+sum(Key(i-7:i-1)),2)==0
        error('Key fails parity bit requirement of DES, use another key and try again.'), return
    end
end

%We generate the 16 round keys; the ith row of the following matrix is the
%ith round key (of 48 bits)
RoundKeys = DESRoundKeys(Key);


%Step 1:  Initial Permutation
PIP = InitPerm(P);
L = PIP(1:32); R = PIP(33:64);

%Step 2:  16 Round Feistel Cipher
for round = 1:16
    RoundKey = RoundKeys(round,:);
    Lnew = R;
    Rnew = xor(L,DESRoundKeyFunction(R,RoundKey));
    L = Lnew; R = Rnew;
end

%Step 3: Left/Right switch, and then apply inverse of initial permutation
%to get the ciphertext

C = InvInitPerm([R L]);

