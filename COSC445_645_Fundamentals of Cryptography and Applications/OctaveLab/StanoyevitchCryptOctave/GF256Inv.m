function outHex = GF256Inv(inHex)
% outHex = GF256Inv(inHex)
% Input:  A hexadecimal 2 digit string, inHex representing a nonzero element of the field
% GF(256)  
% Output: outHex, the corresponding hexadecimal representation of the inverse element GF(256)
% A brute-search is done, as opposed to the more efficient Euclidean
% algorithm
for i = 1:255
    elem = dec2hex(i);
    if numel(elem)==1
       elem = ['0' elem];
    end
    if GF256Mult(elem,inHex) == '01'  %inverse found
        outHex = elem; return
    end
end
outHex ='no inverse';