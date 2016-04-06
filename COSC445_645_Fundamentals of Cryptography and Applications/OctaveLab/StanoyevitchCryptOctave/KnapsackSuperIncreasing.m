function x = KnapsackSuperIncreasing(Weights, s)
% x = KnapsackSuperIncreasing(Weights, s)

S = s;
n = length(Weights);
ind = n;
x = zeros(1,n);
while ind > 0
    if S>= Weights(ind)
        x(ind)=1; S = S - Weights(ind);
    else
      X(ind)=0;
    end
    ind = ind-1;
end
if S > 0
    error('Knapsack problem has no solution!')
end

    
    
  