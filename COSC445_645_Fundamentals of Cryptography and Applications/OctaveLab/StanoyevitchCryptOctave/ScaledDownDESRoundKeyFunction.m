function ROut = ScaledDownDESRoundKeyFunction(RIn,RoundKey)  
% ROut = ScaledDownDESRoundKeyFunctionDESRoundKeyFunction(RIn,Key)
% Inputs: RIn = a length 4 binary vector , and RoundKey = a length 8 binary round key vector
% Output: ROut = the length 4 binary vector that corresponds to the output of the scaled-down DES round key function.   

   %We will need the following expansion function permutation taken from
   %Table 7.4

ExpFunct = [3 1 2 4 2 4 3 1];

%We expand RIn and XOR it with the RoundKey


RNext = xor(RIn(ExpFunct), RoundKey);


%Now we need to run the consecutive 4 bit blocks through the corresponding S-Boxes
for i = 1:2
    Bi = RNext(4*(i-1)+1:4*i);
    ROut(2*(i-1)+1:2*i) = ScaledDownSBox(Bi, i);
end

%Finally, we need to apply the final permutation that we get from Table
%7.6:

FinalPerm = [2 4 1 3];
 
ROut = ROut(FinalPerm);
ROut = Vec2BitString(ROut);



