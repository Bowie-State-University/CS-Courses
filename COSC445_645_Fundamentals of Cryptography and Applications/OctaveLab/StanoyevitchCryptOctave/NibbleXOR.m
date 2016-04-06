function outHex = NibbleXOR(n1Hex, n2Hex)
% outHex = NibbleXOR(n1Hex, n2Hex)

n1BinVec = int2baseb(hex2dec(n1Hex),2,4);
n2BinVec = int2baseb(hex2dec(n2Hex),2,4);
outBinVec = xor(n1BinVec,n2BinVec);
outInt = baseb2int(outBinVec,2);
outHex = dec2hex(outInt);
