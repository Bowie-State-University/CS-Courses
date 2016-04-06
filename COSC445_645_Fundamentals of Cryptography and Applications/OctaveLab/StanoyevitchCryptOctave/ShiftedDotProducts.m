function Vec = ShiftedDotProducts(F)
% Vec = ShiftedDotProducts(F)
% Inputs:  F = a 26 component vector (assumed to be empirical frequencies
% of letters appearing in a ciphertext believed to be acted on by a single
% shift cipher)
% Output:  Vec a 26 component vector recording the dot products of F with
% each of the shifted vectors V0, V1, ..., V25, where V0 gives the
% published frequencies (by Beker and Piper) of the English alphabet, and
% Vi is obtained by shifting i characters to the right (and recycling at
% the end).

%we need to create V0 from Beker-Piper data
V0 = [.082 .015 .028 .043 .127 .022 .020 .061 .07 .002 .008 .04 .024 .067 .075 .019 .001 .06 .063 .091 .028 .01 .023 .001 .02 .001];

for j = 0:25
    Vj = [V0(27-j:26) V0(1:26-j)]';
    Vec(j+1) = F*Vj;
end

    
