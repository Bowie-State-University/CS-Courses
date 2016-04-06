function Out2 = ScaledDownSBox(In4, n)  
% Out2 = ScaledDownSBox(In4, n) 
% Inputs: In6 = a 6 bit binary vector , and n = an S-box number  (between 1
% and 8).  
% Output:  Out4= the 4 bit vector resulting from  applying the nth S-box 
% from Table 6.8 to the 6 bit vector In6. 

%First we create a 3-dimensional array SBoxes for the 2 S-boxes.  The nth
%S-box will be SBoxes(:,:,n).

if n < 1|n>2|floor(n)<n
    error('The box number (second) input for the S-box must be an integer between 1 and 2.'), return
end

SBoxes(:,:,1) = [3 1 0 2; 2 0 1 3; 2 3 1 0;1 2 3 0];
 
SBoxes(:,:,2) = [1 3 2 0; 3 1 2 0; 2 0 3 1; 0 3 2 1];
                

            

                
%Select the appropriate S-Box
Box = SBoxes(:,:,n);
%We use the outer digits of In4 to determine the row of the S-box.
row = 2*In4(1) + In4(4) + 1;
%The inner 2 bits of In4 determine the column of the S-box.
col = 2*In4(2) + In4(3)  + 1;

preout = Box(row,col); %This needs to be put in a 2 digit binary expansion.
total = preout;
if preout >= 2, Out2(1) = 1; total = total - 2; else Out2(1) = 0; end
if total  >= 1, Out2(2) = 1;  else Out2(2) = 0; end

