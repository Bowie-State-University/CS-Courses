function QString = AESDecrypt(CypherTextHex, KeyHex)
% QString = AESDecrypt(CypherTextHex, KeyHex)
% Inputs:
%   CypherTextHex = a length 32 hex string (16 bytes) representing a 128
%   bit ciphertext for the full AES encryption (Algorithm 11.1),
%   KeyHex = a length 32 hex string (16 bytes) representing the
%   system key that was used
% Output
%  Qstring = a length 32 hex string (16 bytes) representing the corresponding 
%  128 bit plaintext for the AES algorithm

% Testing/Debugging inputs:
%PtextHex = '6bc1bee22e409f96e93d7e117393172a';
%KeyHex = '2b7e151628aed2a6abf7158809cf4f3c';
%CypherTextHex = '3AD77BB40D7A3660A89ECAF32466EF97';


%First we construct the round keys:
RoundKeysHex = AESRoundKeys(KeyHex);

%Creating key0 from the 4x44 roundKeyMatrix
%arrays:
x=1;
reverseI = 41;
for i = 1:4,
    for j = 1:4,
        key(j,i) = RoundKeysHex(j,reverseI);
        %strcat(PtextHex(x), PtextHex(x+1))
        C(j,i) = hex2dec(strcat(CypherTextHex(x), CypherTextHex(x+1)));
        x = x+2;
    end
    reverseI = reverseI + 1;
end

%We also convert the plaintext into a corresponding 4 by 4 nibble array.

%Now we are ready to go through the encryption rounds:
%Round Zero:

Q= AESStateXOR(C,key);
Q= AESShiftRowNR(Q);
Q= AESInvByteSub(Q);

keyColCounter = 40;

for i = 1:9,
    for j = 4:-1:1,
        for k = 1:4,
        key(k,j) = RoundKeysHex(k,keyColCounter);
        end
        keyColCounter  = keyColCounter-1;
    end
    Q= AESStateXOR(Q,key);
    Q= AESInvMixColumn(Q);
    Q= AESShiftRowNR(Q);
    Q= AESInvByteSub(Q);
end


for i = 1:4,
    for j = 1:4
        key(j,i) = RoundKeysHex(j,i);
    end
end

Q= AESStateXOR(Q,key);
QString = '';

for i = 1:4,
    for j = 1:4,
        foo =  dec2hex(Q(j,i));
        if (numel(foo) == 1)
            foo = strcat('0', foo);
        end;    
        QString = strcat(QString, foo);
    end
end
    
     