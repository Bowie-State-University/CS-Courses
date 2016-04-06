function InStateHex = AESShiftRowNR(InStateHex)
% InStateHex = AESShiftRowNR(InStateHex)
% Input: InStateHex = 4 by 4 matrix of two hex digits (i.e.,
% byte).  
% Output: OutStateHex = 4 by 4 matrix of two hex digits (i.e.,
% bytes), resulting from cyclically shifting the elements of row i, i - 1
% units to the right.

x=1;
for i=2:4,
    %Repeated ShiftLeft 
    for j=1:x,
        InStateHex = AESShiftRowR(InStateHex, i);
    end
    x = x+1;
end
        
    