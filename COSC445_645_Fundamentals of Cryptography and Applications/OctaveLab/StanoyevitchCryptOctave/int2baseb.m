function vec = int2baseb(n,b,k)
%  vec = int2baseb(n,b)
%This function converts a nonnegative integer n, to a vector of 0s and 1s
%that represents its base b expansion.  The optional third input variable
%k is a nonnegative integer representing the length of the output vector if
%one wishes to specify this, with a string of 0s appended to fill in extra 
%space.  An error message will result if k is not sufficiently large.
vec=[];
if n==0, vec = [0];
else
    for j=floor(log2(n)/log2(b)):-1:0
        if b^j<=n, c = floor(n/b^j); n=n-c*b^j; vec=[vec c];
        else vec=[vec 0];
        end
    end
end
if nargin>2
    if length(vec)>k, error('vector length parameter is too small')
        else, vec=[zeros(1,k-length(vec)),vec];
    end
end
