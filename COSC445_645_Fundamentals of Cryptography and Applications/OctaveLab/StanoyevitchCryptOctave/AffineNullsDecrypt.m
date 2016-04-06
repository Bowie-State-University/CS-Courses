function Ptext = AffineNullsDecrypt(Ctext, n, alpha, beta)
% Ptext = AffineNullsDecrypt(Ctext, n, alpha, beta)
% Inputs: n = an integer > 26
%         alpha, beta, integers mod n, with gcd(alpha,26) = 1 serving as
%         the key parameters for the affine map x -> alpha*x + beta (mod n)
%         used for encryption
%         CText = a vector of integers mod n corresponding to the
%         ciphertext including nulls which are images under the affine map
%         of integers greater than 25 (mod n).         
% Output: Ptext = a string of Lower Case text (alphabet: a, b, ..., z) 
% resulting from decrypting Ctext, ignoring nulls, and lastly converting
% integers to letters using the standard correspondence:
% 0 <-> a,  1 <-> b, ..., 25 <-> z

%Need to find the inverse images of ciphertext integers.  We will need the
%inverse affine mapping:  x -> alpha^-1*(x-beta) (mod n)
alphaInv = ModInv(alpha, n);
PtextNullsInt = mod(alphaInv*(Ctext - beta),n); %Ptext + nulls integer reps.
PtextInt = PtextNullsInt(find(PtextNullsInt<26));
Ptext = Int2LCText(PtextInt);