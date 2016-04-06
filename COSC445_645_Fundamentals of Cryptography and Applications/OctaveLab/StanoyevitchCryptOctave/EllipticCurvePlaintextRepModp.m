function PtextRep = EllipticCurvePlaintextRepModp(m, a, b, p, K)
if (m + 1)*K >= p
    fprintf('Error:  With inputted values of K and m, will need to use a larger prime p.\r')
    return
end


for i = 0:K-1
    x = m*K + i;
    r = mod(x^3 + a*x + b, p);
    y = FastExp(r,(p+1)/4,p);
    if mod(y^2,p) == r %(x,y) is on elliptic curve
        PtextRep = [x y]; return
    end
end
fprintf('Unable to represent the plaintext, suggestion:\r')
fprintf('Try using a larger prime p, or a smaller plaintext block.\r')
