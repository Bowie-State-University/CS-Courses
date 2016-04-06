function Answer = ZpPolyAdd(px,qx,p)
% Answer = ZpPolyAdd(px,qx,p)
%Program for adding two polynomials
%mod p (i.e., in Z_p[x])
%px, and qx (input polynomials) are stored
%as vectors in the following format:
%X^4 +3X^2 + 1 ---> [1 3 0 1]

%first add extra 0's to tail of shorter vector
%if necessary.
if length(px)<length(qx)
    difference=length(qx)-length(px);
    px = [zeros(1,difference) px];
elseif length(px)>length(qx)
    difference=length(px)-length(qx);
    qx = [zeros(1,difference) qx];
end
Answer=mod(px+qx,p);

%We clear out any redundant zeros:
Ind = find(Answer ~= 0);

if length(Ind) == 0; %so Answer is the zero vector
    Answer = 0;
else
    ind = Ind(1);
    Answer(1:ind-1) = [];
end
