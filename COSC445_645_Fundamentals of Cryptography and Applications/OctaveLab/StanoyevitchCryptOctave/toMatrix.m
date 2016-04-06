function OutputMatrix = toMatrix(inputString)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
x = 1;
for i = 1:4,
    for j = 1:4,
        sixteenFirst = inputString(x);
        sixteenZero = inputString(x+1);
        if ((int64(sixteenFirst) >= 64) && (int64(sixteenFirst) <= 70))
            int64(sixteenFirst);
            sixteenFirst = char(int64(sixteenFirst)+32);
        end
        
        if ((int64(sixteenZero) >= 64) && (int64(sixteenZero) <= 70))
            int64(sixteenZero); 
            sixteenZero = char(int64(sixteenZero)+32);
        end
            
        
        if (sixteenFirst == 'a') || (sixteenFirst == 'b') || (sixteenFirst == 'c')  || (sixteenFirst == 'd') || (sixteenFirst == 'e') || (sixteenFirst == 'f')
            sixteenFirst = int64(sixteenFirst-87)*16;
        
        else
           sixteenFirst = int64(sixteenFirst-48)*16;
        end
        if (sixteenZero == 'a') || (sixteenZero == 'b') || (sixteenZero == 'c')  || (sixteenZero == 'd') || (sixteenZero == 'e') || (sixteenZero == 'f')
            sixteenZero = int64(sixteenZero-87);
        else
            sixteenZero = int64(sixteenZero-48);
        end
        OutputMatrix(j,i) = sixteenFirst + sixteenZero;
        x = x+2;
    end
end

