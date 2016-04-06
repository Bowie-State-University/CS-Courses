function Ctext = PermCipher(Ptext,Perm)
%Ctext = PermCipher(Ptext,Perm)
PtextInt = LCTextWithSpaces2Int(Ptext);
CtextInt = PtextInt;
for i = 1:length(PtextInt)
    CtextInt(i) = Perm(2,PtextInt(i)+1)-1;
end
Ctext = Int2UCTextWithSpaces(CtextInt);
    
