function outHex = GF16Inv(inHex)
% outHex = GF16Inv(inHex)
% Input:  A hexadecimal  digit , inHex representing a nonzero element of the field
% GF(16)  
% Output: outHex, the corresponding hexadecimal representation of the inverse element GF(16)
% A brute-search is done, as opposed to the more efficient Euclidean
% algorithm
for i = 1:15
    elem = dec2hex(i);
    if GF16Mult(elem,inHex) == '1'  %inverse found
        outHex = elem; return
    end
end
outHex ='no inverse';