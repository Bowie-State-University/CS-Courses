function vec = int2bin(n,k)
%  vec = int2bin(n,k)
%This function converts a nonnegative integer n, to a vector of 0s and 1s
%that represents its binary expansion.  The optional second input variable
%k is a nonnegative integer representing the length of the output vector if
%one wishes to specify this, with a string of 0s appended to fill in extra 
%space.  An error message will result if k is not sufficiently large.
vec=[];
if n==0, vec = [0];
else
    for j=floor(log2(n)):-1:0
        if 2^j<=n, n=n-2^j; vec=[vec 1];
        else vec=[vec 0];
        end
    end
end
if nargin>1
    if length(vec)>k, error('vector length parameter is too small')
        else, vec=[zeros(1,k-length(vec)),vec];
    end
end
