function y = baseb_mult(u,v,b)
% y = baseb_mult(u,v,b)
%inputs = u, v = two vectors representing base b expansions of positive
%integers, b = a postive integer > 1, the base
%output = y = a vector representing the base b expansion of the product u * v
%computed using Algorithm 6.4


L = length(u);
K = length(v);

%Step 1: Initialize product:
P = [0];
%Step 2
for i = K:-1:1 %run through digits of "bottom" number v
    ithProd = zeros(1,K-i); %this is equivalent to an appropriate shift
    Car = 0; %initialize carry
    for j = L:-1:1 %run through digits of "top" number u
        NewCar = floor((u(j)*v(i) + Car)/b); %New carry
        pNew = u(j)*v(i) + Car - b*NewCar;
        ithProd = [pNew ithProd];
        Car = NewCar; %update carry
    end
    if Car > 0
    ithProd = [Car ithProd];
    end
    P = baseb_add(P,ithProd,b);
end
y=P;
  