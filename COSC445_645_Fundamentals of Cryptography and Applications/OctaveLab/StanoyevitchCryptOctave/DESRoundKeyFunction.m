function ROut = DESRoundKeyFunction(RIn,RoundKey)  
% ROut = DESRoundKeyFunction(RIn,Key)
% Inputs: RIn = a 32 bit vector , and RoundKey = a 48 bit round key
% Output: ROut = the 32 bit vector that corresponds to the output of the DES Round Key function.   

   %We will need the following expansion function permutation taken from Table
%6.7:

ExpFunct = [32   1   2   3   4   5   4   5   6   7   8   9  8   9   10   11   12   13   12   13   14 15    16   17            16   17   18   19   20   21   20   21   22   23   24   25            24   25   26   27   28   29   28   29   30   31   32   1];

%We expand RIn and XOR it with the RoundKey
RNext = xor(RIn(ExpFunct), RoundKey);
Vec2BitString(RNext);
%Now we need to run the consecutive 8 bit blocks through the corresponding S-Boxes
for i = 1:8
    Bi = RNext(6*(i-1)+1:6*i);
    ROut(4*(i-1)+1:4*i) = SBox(Bi, i);
end
Vec2BitString(ROut);
%Finally, we need to apply the final permutation that we get from Table
%6.9:

FinalPerm = [16 7   20   21               29   12   28   17               1   15   23   26               5   18   31   10               2   8   24   14               32   27   3   9               19   13   30   6               22   11   4   25];
 
ROut = ROut(FinalPerm);


