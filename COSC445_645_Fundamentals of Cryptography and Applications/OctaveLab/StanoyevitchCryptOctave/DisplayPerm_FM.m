function [ ] = DisplayPerm_FM(Perm)
%[ ] = DisplayPerm_FM(Perm)

printf('   Plaintext    Ciphertext          \n \r')
printf('===============================\n\r')
for k=0:25
   CtextInt = Perm(2, k+1)-1;
   printf('      %s            %s          \n\r', char(97+k), char(65+CtextInt));
end;    
