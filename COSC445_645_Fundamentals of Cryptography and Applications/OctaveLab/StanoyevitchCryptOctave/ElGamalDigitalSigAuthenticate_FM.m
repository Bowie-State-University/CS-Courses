function Q = ElGamalDigitalSigAuthenticate_FM(P,r,s,A,p,g)
%  Q = ElGamalDigitalSigAuthenticate_FM(P,r,s,A,p,g)

left = mod(FastExp(A,r,p)*FastExp(r,s,p),p);
right = FastExp(g,P,p);
if left == right
    Q = P; %authentic digital signature
else
    printf('\rDigital signature does not authenticate.\n\r')
end

