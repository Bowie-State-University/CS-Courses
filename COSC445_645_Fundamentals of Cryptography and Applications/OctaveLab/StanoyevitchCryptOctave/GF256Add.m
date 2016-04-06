function outHex = GF256Add(n1Hex, n2Hex)
% outHex = GF256Mult(n1Hex,n2Hex)
% Input:  Two hexadecimal 2 digit strings, n1Hex,n2Hex, representing elements of the field
% GF(256)  
% Output: outHex, the corresponding hexadecimal representation of their
% sum in GF(256)


%Convert inputted hex symbols to binary vectors representing polynomials
n1BinVec = int2baseb(hex2dec(n1Hex),2,8);
n2BinVec = int2baseb(hex2dec(n2Hex),2,8);


outBinVec = xor(n1BinVec,n2BinVec);
outInt = baseb2int(outBinVec,2);
outHex = dec2hex(outInt);

if numel(outHex)==1
    outHex = ['0' outHex];
end
