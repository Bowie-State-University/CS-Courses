function y = baseb_add(u,v,b)
% y = baseb_add(u,v,b)
%inputs = u, v = two vectors representing base b expansions of a positive
%integer, b = a postive integer > 1, the base
%output = y = a vector representing the base b expansion of the sum u + v
%computed using Algorithm 6.2

%First pad one vector with zeros, if necessary, so that both have same
%length
uLen = length(u); vLen = length(v);
if uLen > vLen
    v = [zeros(1,uLen - vLen) v];
else
    u = [zeros(1,vLen - uLen) u];
end

K = length(u);

%Step 1: Initialize carry:
Car = 0;
%Step 2
for i = K:-1:1
    NewCar = floor((u(i)+v(i)+Car)/b); %New carry
    y(i+1) = u(i) + v(i) + Car -b*NewCar;
    Car = NewCar; %update carry
end
%Step 3
if Car > 0
    y(1) = Car;
else
    y(1) = [];
end

