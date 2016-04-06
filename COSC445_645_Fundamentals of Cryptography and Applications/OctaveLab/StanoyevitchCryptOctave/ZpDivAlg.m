function [qx rx] = ZpDivAlg(fx,gx,p)
% Answer = ZpDivAlg(fx,gx,p)
%Program for applying the division algorithm (Algorithm 10.1) to two polynomials
%fx and gx in Z_p[x].
%Inputs are two vectors representing polynomials fx and gx, with gx not
%zero.  We assume that the first component of gx is nonzero (so not
%redundant).
%Output will be two vectors qx, and rx, representing the quotient and
%remainder in the polynomial division of fx by gx.  The following
%polynomial equation will be satisfied in Z_p[x]: fx = (qx)(gx) + rx.
%All polynomials are stored as vectors in the following format:
%X^4 +3X^2 + 1 ---> [1 3 0 1]

if length(fx) - length(gx) < 0;
    qx = 0; rx = fx;
else
  lenQuot = 1+length(fx) - length(gx);
  CurrRem = fx; Quotient = zeros(1, lenQuot);
  gxLeadCoefInv = ModInv(gx(1),p); %inverse (mod p) of leading coefficient of gx

 while length(CurrRem) >= length(gx) %can divide
    if length(CurrRem)>=2
      QuotTempCoef = mod(CurrRem(1)*gxLeadCoefInv, p);
      QuotTempExp = length(CurrRem) - length(gx);
      Quotient(lenQuot  - QuotTempExp) = QuotTempCoef;
      QuotTemp = zeros(1,QuotTempExp+1);
      QuotTemp(1) = QuotTempCoef;
      CurrRem = ZpPolyAdd(CurrRem, -ZpPolyMult(QuotTemp, gx,p),p);
      else%Curr Remainder is a constant (so gx must be as well)
        if CurrRem == 0;
            qx = Quotient; rx = [0]; return
        else
         qx = mod(gx(1)*ModInv(CurrRem,p),p);
         rx = [0];
         return
        end
    end

  end
  qx = Quotient;
  rx = CurrRem;
end

