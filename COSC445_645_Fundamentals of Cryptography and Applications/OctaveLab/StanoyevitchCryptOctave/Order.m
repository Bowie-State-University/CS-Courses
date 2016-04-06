function k = Order(a,n)
% k = Order(a,n)
k = 1;
while FastExp(a,k,n)>1
    k=k+1;
end
