function xPlaintext = MerkleHellmanDecrypt(PrivateWeights,m, w, C)
% xPlaintext = MerkleHellmanDecrypt(PrivateWeights, w, C)
winv = ModInv(w,m);
sprime = mod(winv*C,m);
xPlaintext = KnapsackSuperIncreasing(PrivateWeights, sprime);
