function QString = FullAes(PtextHex, KeyHex)
% CtextHex = ScaledDownAES(PtextHex,KeyHex)
% Inputs:
%   PtextHex = a length 32 hex string (16 bytes) representing a 128
%   bit plaintext for the full AES encryption (Algorithm 11.1),
%   KeyHex = a length 32 hex string (16 bytes) representing the
%   system key
% Output
%  Qstring = a length four hex string representing the resulting ciphertext.

%First we construct the round keys:
RoundKeysHex = AESRoundKeys(KeyHex);

%Creating key0 from the 4x44 roundKeyMatrix
%arrays:
x=1;
for i = 1:4,
    for j = 1:4,
        key(j,i) = RoundKeysHex(j,i);
        %strcat(PtextHex(x), PtextHex(x+1))
        P(j,i) = hex2dec(strcat(PtextHex(x), PtextHex(x+1)));
        x = x+2;
    end
end

%We also convert the plaintext into a corresponding 4 by 4 byte array.

%Now we are ready to go through the encryption rounds:
%Round Zero:

Q = AESStateXOR(P,key);
keyColCounter = 4;


%Round 2-9
for i = 1:9,
    for j = 1:4,
        keyColCounter  = keyColCounter+1;
        for k = 1:4,
        key(k,j) = RoundKeysHex(k,keyColCounter);
        end
       
    end
   
    Q= AESByteSub(Q);
    Q= AESShiftRowNL(Q);
    Q= AESMixColumn(Q);
    Q= AESStateXOR(Q,key);
end


for i = 1:4,
    keyColCounter = keyColCounter+1;
    for j = 1:4
        key(j,i) = RoundKeysHex(j,keyColCounter);
    end
end

%Round 11
Q= AESByteSub(Q);
Q= AESShiftRowNL(Q);
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
    
     
