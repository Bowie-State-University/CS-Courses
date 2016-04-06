function outHex = ScaledDownAESInvSBox(inHex)  
% outHex = ScaledDownAESInvSBox(inHex) 
% Input: inHex = a single hex character (a nibble)
% Output:  outHex = the corresponding single hex character representing the
% output of the scaled down AES INVERSE S-box of Table 11.2

%First we create a 4 by 4 matrix of Table 11.1 entries converted from hex
%to integers:
InvSBox = [10 5 6 14;
           4 13 2  15;
           9  0 8  12;
           3  1 7 11];

inBin = dec2bin(hex2dec(inHex));  %binary string rep of input
%pad w/ zeros on left as needed so string has length 4
k = 4 - numel(inBin);
for i = 1:k, inBin = ['0',inBin]; end
%IMPORTANT NOTE:  When a the string characters get converted to numbers,
%'0' -> 48, and '1' -> 49

row = (inBin(1)-48)*2+(inBin(2)-48)+1;
col = (inBin(3)-48)*2+(inBin(4)-48)+1;

outHex = dec2hex(InvSBox(row,col));
