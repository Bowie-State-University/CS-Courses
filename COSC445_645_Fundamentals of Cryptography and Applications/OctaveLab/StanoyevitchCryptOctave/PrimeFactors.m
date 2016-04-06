function FactorList = PrimeFactors(n)
%  FactorList = PrimeFactors(n)
FactorList = []; %intialize empty vector as list of factors
n_new = n; %initialize number to be factored
factor = 2; %initialize factor to test
while factor <= floor(sqrt(n_new))
    if mod(n_new, factor) == 0 %factor is a factor of n_new
        FactorList = [FactorList factor];
        n_new = round(n_new/factor); %update n_new
    else
        factor = factor + 1; %update factor
    end
end
FactorList = [FactorList n_new];

