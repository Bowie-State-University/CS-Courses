function RoundKeysHexStr = ScaledDownAESRoundKeys(KeyHexStr)
% RoundKeysHexStr = ScaledDownAESRoundKeys(KeyHexStr)
% Input:  KeyHexStr = a hex string of 4 nibbles, represenenting the scaled-down
% AES system key
% Output: RoundKeys = a hex string of 12 nibbles, the adjacent groups of 4
% representing the three round keys:  kappa1, kappa2, kappa3

% Round Constants:
RCon1 = '80'; RCon2 = '30';
WCol0_1 = KeyHexStr(1);
WCol0_2 = KeyHexStr(2);
WCol1_1 = KeyHexStr(3);
WCol1_2 = KeyHexStr(4);
%Need to create two entries each for WCol2, WCol3, WCol4, and WCol5 (from
%which the round keys can be read off):  The odd numbered ones are easy!
%WCol2_1
Str1 = NibbleXOR(WCol0_1, '8'); Str2 = ScaledDownAESSBox(WCol1_2);  WCol2_1 = NibbleXOR(Str1, Str2);
%WCol2_2
Str1 = NibbleXOR(WCol0_2, '0'); Str2 = ScaledDownAESSBox(WCol1_1);  WCol2_2 = NibbleXOR(Str1, Str2);
WCol3_1 = NibbleXOR(WCol1_1,WCol2_1); WCol3_2 = NibbleXOR(WCol1_2,WCol2_2);
%WCol4_1
Str1 = NibbleXOR(WCol2_1, '3'); Str2 = ScaledDownAESSBox(WCol3_2);  WCol4_1 = NibbleXOR(Str1, Str2);
%WCol4_2
Str1 = NibbleXOR(WCol2_2, '0'); Str2 = ScaledDownAESSBox(WCol3_1);  WCol4_2 = NibbleXOR(Str1, Str2);
WCol5_1 = NibbleXOR(WCol3_1,WCol4_1); WCol5_2 = NibbleXOR(WCol3_2,WCol4_2);

%Now we collect the round keys and juxtapose them into a single string:
RoundKeysHexStr = [KeyHexStr,WCol2_1,WCol2_2,WCol3_1,WCol3_2,WCol4_1,WCol4_2,WCol5_1,WCol5_2];



