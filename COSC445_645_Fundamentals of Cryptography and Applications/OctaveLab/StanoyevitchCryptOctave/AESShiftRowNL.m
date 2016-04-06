function InStateHex = AESShiftRowNL(InStateHex)
% InStateHex = AESShiftRowNL(InStateHex)
% Input: InStateHex = 4 by 4 matrix of two hex digits (i.e.,
% byte).  
% Output: OutStateHex = 4 by 4 matrix of two hex digits (i.e.,
% bytes), resulting from cyclically shifting the elements of row i, i - 1
% units to the left.
x=1;
for i=2:4,
    %Repeated ShiftLeft 
    for j=1:x,
        InStateHex = AESShiftRowL(InStateHex, i);
    end
    x = x+1;
end
        
    