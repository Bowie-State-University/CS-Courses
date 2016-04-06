function CText = AffineNulls(Ptext, n, alpha, beta, NullFreqVec)
% CText = AffineNulls(Ptext, n, alpha, beta, NullFreqVector)
% Inputs: Ptext = a string of Lower Case text (alphabet: a, b, ..., z)
%         n = an integer > 26
%         alpha, beta, integers mod n, with gcd(alpha,26) = 1.
% Output: CText = a vector of integers corresponding to the ciphertext 
% resulting from encrypting Ptext using the affine map y = alpha*x +  beta,
% where x is the mod 26 integer corresponding to a plaintext character under the
% basic correspondence
% 0 <-> a,  1 <-> b, ..., 25 <-> z
% The nulls are the integers y = alpha*x +  beta (mod n) where 25 < x < n,
% and get inserted randomly within the ciphertext.  If NullFreqVector is
% specified, the insertions are done randomly using this vector as the
% distribution, otherwise they get randomly inserted at at step with
% probability (n - 26)/n
nNulls = n - 26; %number of nulls
if nargin < 5, NullFreqVec = (1/n)*ones(1,nNulls); end
pNull = sum(NullFreqVec);
if pNull >= 1, error('Probability of inserting a null must be less than 1'), end
%It will be helpful to form the cumulative disribution vector for
%NullFreqVec
NullFreqVecCum(1) = NullFreqVec(1);
for i = 1:length(NullFreqVec)-1
    NullFreqVecCum(i+1) = NullFreqVecCum(i) + NullFreqVec(i+1);
end

Vec = LCText2Int(Ptext);
VecOut = mod(alpha*Vec + beta, n); %ciphertext integers for plaintext characters
Nulls = mod(alpha*[26:(26+nNulls-1)], n);
PTextIndex = 1;
CTextIndex = 1;
while PTextIndex <= length(Vec)
    randnumber = rand;
    if randnumber >= pNull %insert next plaintext character and update indices
        CText(CTextIndex) = VecOut(PTextIndex);
        PTextIndex = PTextIndex+1; CTextIndex = CTextIndex+1;
    else%generate and insert a null into CText vector and update indices
        %The null we use will be determined by where randnumber lies in the
        %cumulative distribution of NullFreqVector
        Ind = find(NullFreqVecCum > randnumber);
        nullInd = 25 + Ind(1);
        null = mod(alpha*nullInd + beta, n);
        %now insert this null in CText and update index
        CText(CTextIndex) = null;
        CTextIndex = CTextIndex+1;
    end
end
%print CText in vector format with commas
fprintf('\r[')
for j = 1:length(CText)-1
    fprintf('%d, ', CText(j))
end
fprintf('%d]\r\r', CText(end))
