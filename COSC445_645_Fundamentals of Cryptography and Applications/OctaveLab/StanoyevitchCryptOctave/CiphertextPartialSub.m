function CtextSub = CiphertextPartialSub(Ctext,CLetters,PLetters)
%CtextSub = CiphertextPartialSub(Ctext,CLetters,PLetters)
%Inputs:  Ctext = a ciphertext string in A-Z (with or w/out spaces)
%CLetters/PLetters = two same length strings in upper/lower case letters
%which correspond to the substitutions that should be made in Ctext
CtextSub = Ctext;
for i = 1:length(CLetters)
    Ind = find(CtextSub == CLetters(i));
    CtextSub(Ind)=PLetters(i);
end

