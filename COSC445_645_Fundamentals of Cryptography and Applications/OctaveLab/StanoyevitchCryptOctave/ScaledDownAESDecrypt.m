function PtextHex = ScaledDownAESDecrypt(CtextHex,KeyHex)
% CtextHex = ScaledDownAESDecrypt(PtextHex,KeyHex)
% Inputs:
%   CtextHex = a length four hex string (four nibbles) representing a 16
%   bit ciphertext from the scaled-down AES encryption (Algorithm 11.1)
%   KeyHex = a length four hex string (four nibbles) representing the
%   system key
% Output
%   PtextHex = a length four hex string representing the corresponding decrypted plaintext.

%First we construct the round keys:
RoundKeysHexStr = ScaledDownAESRoundKeys(KeyHex);
%From this length 12 hex string, we extract the three keys as 2 by 2 nibble
%arrays:
K0 = [RoundKeysHexStr(1)  RoundKeysHexStr(2); RoundKeysHexStr(3)  RoundKeysHexStr(4)]; K0 = K0';
K1 = [RoundKeysHexStr(5)  RoundKeysHexStr(6); RoundKeysHexStr(7)  RoundKeysHexStr(8)]; K1 = K1';
K2 = [RoundKeysHexStr(9)  RoundKeysHexStr(10); RoundKeysHexStr(11)  RoundKeysHexStr(12)]; K2 = K2';

%We also convert the plaintext into a corresponding 2 by 2 nibble array.
C = [CtextHex(1)  CtextHex(2); CtextHex(3)  CtextHex(4)]; C = C';

%Now we are ready to go through the encryption rounds (following the
%decryption schematic diagram of Figure 11.3):

%Round 2:
Q = ScaledDownAESStateXOR(C, K2);
Q = ScaledDownAESShiftRow(Q);
Q = ScaledDownAESInvNibbleSub(Q);


%Round 1:
Q = ScaledDownAESStateXOR(Q, K1);
Q = ScaledDownAESInvMixColumn(Q);
Q = ScaledDownAESShiftRow(Q);
Q = ScaledDownAESInvNibbleSub(Q);


%Round Zero:
Q = ScaledDownAESStateXOR(Q, K0);


%Finally, we read off the ciphertext from the final state nibble matrix:
PtextHex(1) = Q(1,1); PtextHex(2) = Q(2,1); PtextHex(3) = Q(1,2); PtextHex(4) = Q(2,2);


