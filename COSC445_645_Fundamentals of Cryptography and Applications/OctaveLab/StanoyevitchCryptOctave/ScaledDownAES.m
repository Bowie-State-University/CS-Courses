function CtextHex = ScaledDownAES(PtextHex,KeyHex)
% CtextHex = ScaledDownAES(PtextHex,KeyHex)
% Inputs:
%   PtextHex = a length four hex string (four nibbles) representing a 16
%   bit plaintext for the scaled-down AES encryption (Algorithm 11.1),
%   KeyHex = a length four hex string (four nibbles) representing the
%   system key
% Output
%   Ctext = a length four hex string representing the resulting ciphertext.

%First we construct the round keys:
RoundKeysHexStr = ScaledDownAESRoundKeys(KeyHex);
%From this length 12 hex string, we extract the three keys as 2 by 2 nibble
%arrays:
K0 = [RoundKeysHexStr(1)  RoundKeysHexStr(2); RoundKeysHexStr(3)  RoundKeysHexStr(4)]; K0 = K0';
K1 = [RoundKeysHexStr(5)  RoundKeysHexStr(6); RoundKeysHexStr(7)  RoundKeysHexStr(8)]; K1 = K1';
K2 = [RoundKeysHexStr(9)  RoundKeysHexStr(10); RoundKeysHexStr(11)  RoundKeysHexStr(12)]; K2 = K2';

%We also convert the plaintext into a corresponding 2 by 2 nibble array.
P = [PtextHex(1)  PtextHex(2); PtextHex(3)  PtextHex(4)]; P = P';

%Now we are ready to go through the encryption rounds:
%Round Zero:
Q = ScaledDownAESStateXOR(P, K0);

%Round 1:
Q = ScaledDownAESNibbleSub(Q);
Q = ScaledDownAESShiftRow(Q);
Q = ScaledDownAESMixColumn(Q);
Q = ScaledDownAESStateXOR(Q, K1);


%Round 2:
Q = ScaledDownAESNibbleSub(Q);
Q = ScaledDownAESShiftRow(Q);
Q = ScaledDownAESStateXOR(Q, K2);

%Finally, we read off the ciphertext from the final state nibble matrix:
CtextHex(1) = Q(1,1); CtextHex(2) = Q(2,1); CtextHex(3) = Q(1,2); CtextHex(4) = Q(2,2);


