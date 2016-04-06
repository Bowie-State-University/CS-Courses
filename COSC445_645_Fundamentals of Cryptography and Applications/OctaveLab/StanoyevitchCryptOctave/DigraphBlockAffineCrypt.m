function Ctext = DigraphBlockAffineCrypt(Ptext, alpha, beta)
% CText = DigraphBlockAffineCrypt(Ptext, alpha, beta)
% Inputs: Ptext = a string of Lower Case text (alphabet: a, b, ..., z)
%         alpha, beta, integers mod 676, with gcd(alpha,676) = 1.
% Output: CText = a string of upper case letters corresponding to the ciphertext 
% resulting from encrypting Ptext using the affine map y1y2 = alpha*x1x2 +  beta,
% where the plaintext is encrypted in pairs, and for each pair of plaintext
% letters a1, a2, we let n1, n2 be their integer equivalents under the
% usual correspondence:
% 0 <-> a,  1 <-> b, ..., 25 <-> z
% and define the mod 676 integer x1x2 to be 26*n1 + n2.
% In case Ptext has odd length, we insert an additional 'x' at the end.

Len = length(Ptext);
if mod(Len,2)==1 %odd length Ptext
    Ptext = [Ptext,'x']; Len = Len + 1;
end

for i = 1:Len/2
    ind = 2*i-1;
    Vec = LCText2Int(Ptext(ind:ind+1));  %[n1 n2]
    x1x2 = 26*Vec(1) + Vec(2);
    y = mod(alpha*x1x2 + beta, 676);
    %the corresponding pair of integers for the ciphertext pair is obtained
    %by using the division algorithm: divide this number by 26.
    y1 = floor(y/26); y2 = y - 26*y1;
    Ctext(ind:ind+1)=Int2UCText([y1 y2]);
end

    
