function Ctext = FeistelSystem3RoundsEx7_1_Encrypt(Ptext,Key)
% Ctext = FeistelSystem3RoundsEx7_1_Encrypt(Ptext,Key)
% This is a program for performing encrytptions using the three round
% Feistel system described in Example 7.1.
% Inputs:  Ptext = an 8-bit binary string (the plaintext)
%          Key = a 12 bit binary string (the system key)
% Output:  Ctext = an 8-bit binary string (the ciphertext)

KeyVec = BitString2Vec(Key);
KeyMat(1,:) = xor(KeyVec(1:4), KeyVec(5:8)); 
KeyMat(2,:) = xor(KeyVec(5:8), KeyVec(9:12));
KeyMat(3,:) = xor(KeyVec(9:12), KeyVec(1:4));

PtextVec = BitString2Vec(Ptext);
Left = PtextVec(1:4); Right = PtextVec(5:8);
for Round = 1:3
    NewLeft = Right;
    Right = xor(Left,xor(KeyMat(Round,:), Right));
    Left = NewLeft;
end
Ctext = Vec2BitString([Right Left]);

    
