function [Bestx BestValue] = KnapsackBruteFindAllBest(Weights, s)
% x = KnapsackBruteFindAllBest(Sizes, Values, B)
%Brute force program for the knapsack problem. Inputs a vector of object
%weights (=Weights), and a desired total knapsack weight s.  The outputs
%will be a matrix Bestx and a scalar BestValue that have the following
%meaning:  BestValue will be the greatest possible knapsack weight that is
%less than or equal to s, and Bestx will be a vector of all corresponding
%binary vectors that describe the different knapsack configurations.

BestValue = -1;
n = length(Weights);


count = 1; CoverCounter = 0;
for i = 0:(2^n-1)
x = int2bin(i,n); Objects = find(x == 1);
if sum(Weights(Objects))<=s %x is a feasible solution
    Value = sum(Weights(Objects));
    if Value > BestValue %A new maximum is found
        clear Bestx
        Bestx = x; row = 1;
        BestValue = Value;
    elseif Value == BestValue %add a new x-vector
        Bestx(row+1,:) = x; row = row + 1;
    end
end
end

    
  