function y = baseb_sub(u,v,b)
% y = baseb_sub(u,v,b)
%inputs = u, v = two vectors representing base b expansions of positive
%integers, with u > v, b = a postive integer > 1, the base
%output = y = a vector representing the base b expansion of the difference u - v
%computed using Algorithm 6.3

%First pad one vector with zeros, if necessary, so that both have same
%length
uLen = length(u); vLen = length(v);
if uLen > vLen
    v = [zeros(1,uLen - vLen) v];
else
    u = [zeros(1,vLen - uLen) u];
end

K = length(u);

%Step 1: Initialize borrow:
Borr = 0;
%Step 2
for i = K:-1:1
    NewBorr = floor((u(i)-v(i)+Borr)/b); %New borrow
    y(i) = u(i) - v(i) + Borr - b*NewBorr;
    Borr = NewBorr; %update borrow
end

