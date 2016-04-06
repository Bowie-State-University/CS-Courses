function StrOut = SmallEnigma(str,r1,r2,r3)
% StrOut = SmallEnigma(str,r1,r2,r3)
% r1, r2, r3 are assumed to be integers in the range 0 to 5.
%Work with mod 6 integers
strInt = LCText2Int(str);

%Define Permutations as tables:
%1. Plugboard Perm:
Beta(1, 1:6) = 0:5; Beta(2,:) = [5 3 2 1 4 0];
%2. Rotor 1 Perm:
Rho1(1, 1:6) = 0:5; Rho1(2,:) = [2 1 0 4 5 3];
%3. Rotor 2 Perm:
Rho2(1, 1:6) = 0:5; Rho2(2,:) = [1 0 3 2 5 4];
%4. Rotor 3 Perm:
Rho3(1, 1:6) = 0:5; Rho3(2,:) = [2 3 4 5 0 1];
%5. Reflector Perm:
Tau(1, 1:6) = 0:5; Tau(2,:) = [5 3 4 1 2 0];
%6. Form Inverse Perms for Rotors:
Rho1Inv = PermInverter(Rho1);
Rho2Inv = PermInverter(Rho2);
Rho3Inv = PermInverter(Rho3);

%Now we perform the encryption:
for i = 1:length(strInt);
    %Rotor settings:
    rot1 = r1 + i; 
    rot2 = r2 + floor((r1+i)/6);
    rot3 = r3 + floor(rot2/6);
    %End Rotor Settings
    x = strInt(i); %plaintext character
    x = Beta(2, x+1); %plugboard
    x = mod(x + rot1, 6); x = Rho1(2,x+1); x = mod(x - rot1, 6); %first rotor
    x = mod(x + rot2, 6); x = Rho2(2,x+1); x = mod(x - rot2, 6); %second rotor
    x = mod(x + rot3, 6); x = Rho3(2,x+1); x = mod(x - rot3, 6); %third rotor
    x = Tau(2,x+1); %reflector
    x = mod(x + rot3, 6); x = Rho3Inv(2,x+1); x = mod(x - rot3, 6); %third rotor inverse
    x = mod(x + rot2, 6); x = Rho2Inv(2,x+1); x = mod(x - rot2, 6); %second rotor inverse
    x = mod(x + rot1, 6); x = Rho1Inv(2,x+1); x = mod(x - rot1, 6); %first rotor inverse
    x = Beta(2, x+1); %plugboard
    StrOutInt(i) = x; %ciphertext
end
StrOut = Int2UCText(StrOutInt);
    
    
    
    