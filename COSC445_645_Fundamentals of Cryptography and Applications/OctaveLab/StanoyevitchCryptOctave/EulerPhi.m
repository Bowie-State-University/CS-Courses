function y = EulerPhi(n)
% y = EulerPhi(n)
% Input:  n = a positive integer
% Output: y = Euler phi(x)
 
Vec=factor(n);
len=length(Vec);
Vec(len + 1) = 0; % tack on an additional component for loop below to function

y=1;
exp = 1;
for i=1:len
   if Vec(i)==Vec(i+1)
      exp=exp+1; 
   else
      y=y*(Vec(i)-1)*Vec(i)^(exp-1);
      exp = 1;
   end
end

   