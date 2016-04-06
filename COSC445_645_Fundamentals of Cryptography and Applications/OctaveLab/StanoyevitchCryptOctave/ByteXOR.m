function outHex = ByteXOR(n1Hex, n2Hex)
% outHex = NibbleXOR(n1Hex, n2Hex)
% inputs:  two length 2 hex strings (bytes)/ upper or lower case format
% output:  an (upper case) length 2 hex string that is the XOR of the
% inputted strings
n1BinVec = int2baseb(hex2dec(n1Hex),2,8);
n2BinVec = int2baseb(hex2dec(n2Hex),2,8);
outBinVec = xor(n1BinVec,n2BinVec);
outInt = baseb2int(outBinVec,2);
outHex = dec2hex(outInt);
