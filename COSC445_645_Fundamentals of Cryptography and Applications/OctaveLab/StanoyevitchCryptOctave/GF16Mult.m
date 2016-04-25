function outHex = GF16Mult(n1Hex,n2Hex)
% outHex = GF16Multiply(n1Hex,n2Hex)
% Input:  Two hexadecimal single digits, n1Hex,n2Hex, representing elements of the field
% GF(16), according to Table 10.6.  
% Output: outHex, the corresponding hexadecimal representation of their
% product in GF(16)


%Convert inputted hex symbols to binary vectors representing polynomials
n1BinVec = int2baseb(hex2dec(n1Hex),2,4);
n2BinVec = int2baseb(hex2dec(n2Hex),2,4);
% multiply these polynomials in Z_2[X]
n1n2BinVecPre = ZpPolyMult(n1BinVec,n2BinVec,2);

%Apply division algorithm to reduce the polynomial mod X^4+X+1 to remainder
[qx rx] = ZpDivAlg(n1n2BinVecPre,[1 0 0 1 1],2);

outBinVec = rx;
%convert to hex by first converting to integer
outInt = baseb2int(outBinVec,2);
outHex = dec2hex(outInt);