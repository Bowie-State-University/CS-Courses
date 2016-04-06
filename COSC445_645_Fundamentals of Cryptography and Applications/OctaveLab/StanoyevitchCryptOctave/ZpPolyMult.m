function Answer = ZpPolyMult(px,qx,p)
% Answer = ZpPolyMult(px,qx,p)
%Program for adding two polynomials
%mod n (i.e., in Z_n[x])
%px, and qx (input polynomials) are stored
%as vectors in the following format:
%X^4 +3X^2 + 1 ---> [1 3 0 1]
n=length(px)-1; m=length(qx)-1;
%We initialize two vectors of zeros Vec, and sumVec.  The first will have
%size n + m + 1 and is created to store the Answer (after the following for
%loop has been executed.  The second vector sumVec is of size n + 1, and is
%a temporary register for the coefficients of the multipls of px that will
%get shifted and added to Vec.  The for loop is structured after formula
%(3) in Chapter 8 of the text.  
%Notice that the coefficient qx(i) goes with the power X^(m+1-i) and so
%when the whole term is multiplied by the polynomial px, each of the
%coefficients of px get multiplied by qx(i) and the resulting length n + 1
%vector sits m + 1 - i components to the left of the right end of sumVec.
Vec=zeros(1,n+m+1); sumVec=zeros(1,n+1);
for i=1:m+1
    sumvec(1:n+1)=qx(i)*px;
    Vec(i:i+n)= mod(Vec(i:i+n)+sumvec,p); sumvec=zeros(1,n+1);
end
Answer = Vec;
if max(Answer) == 0 %zero polynomial sum
    Answer = [0]; %remove redundant components
end
