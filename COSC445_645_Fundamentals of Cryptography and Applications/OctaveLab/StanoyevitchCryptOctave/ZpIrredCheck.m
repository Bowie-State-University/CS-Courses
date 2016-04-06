function Answer = ZpIrredCheck(fx,p)
%Answer = ZpIrredCheck(fx,p)
%Program will determine whether the polynomial represented by the first
%inputted vector fx, is irreducible in  Z_p[X].   The second input is the (prime) 
%modulus p.  The output variable, Answer, will either be a vector 
%representing a notrivial factor, or a message that the polynomial is 
%irreducible.  Algorithm 10.2 should be used.  
degf = length(fx)-1;
for facDeg = 1:floor(degf/2)
facDeg = 1;
for i = 0:p^facDeg-1
    gx = int2baseb(p^facDeg + i, p);
    [qx rx] = ZpDivAlg(fx,gx,p);
    if rx == 0 %factor found
        Answer = gx; return
    end
end
end
Answer = 'irreducible';
   
    
