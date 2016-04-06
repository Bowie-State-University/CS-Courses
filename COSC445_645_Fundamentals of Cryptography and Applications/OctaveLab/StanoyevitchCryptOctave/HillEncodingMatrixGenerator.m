function A = HillEncodingMatrixGenerator(n)
% A = HillEncodingMatrixGenerator(n)
done = 0;
while done == 0;
    A = floor(26*rand(n,n));
    detA = mod(det(A),26);
    GCD = EuclidAlgExt(detA,26);
    if GCD(1) == 1; done = 1; end
end