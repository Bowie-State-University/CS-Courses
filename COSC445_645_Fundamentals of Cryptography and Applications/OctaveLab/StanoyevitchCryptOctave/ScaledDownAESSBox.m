function outHex = ScaledDownAESSBox(inHex)  
% outHex = ScaledDownAESSBox(inHex) 
% Input: inHex = a single hex character (a nibble)
% Output:  outHex = the corresponding single hex character representing the
% output of the scaled down AES S-box of Table 11.1

%First we create a 4 by 4 matrix of Talble 11.1 entries converted from hex
%to integers:
SBox = [9 13 6 12;
        4 1 2 14;
        10 8 0 15;
        11 5 3 7];

inBin = dec2bin(hex2dec(inHex));  %binary string rep of input
%pad w/ zeros on left as needed so string has length 4
k = 4 - numel(inBin);
for i = 1:k, inBin = ['0',inBin]; end
%IMPORTANT NOTE:  When a the string characters get converted to numbers,
%'0' -> 48, and '1' -> 49

row = (inBin(1)-48)*2+(inBin(2)-48)+1;
col = (inBin(3)-48)*2+(inBin(4)-48)+1;

outHex = dec2hex(SBox(row,col));
