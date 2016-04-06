function RoundKeys = DESRoundKeys(Key)
% RoundKeys = DESRoundKeys(Key)
% Input:  Key = a 64 bit binary vector Key, that serves as an admissible
% DES key.
% Output: RoundKeys = a 16 by 48 matrix, whose ith row will be the 
% corresponding ith round key for DES.
%If the key is not admissible (i.e., if the parity check bits do not satisfy
%the required properties) the program will produce an error message.  

%First we check if the parity check bits are correct.
for i = 8:8:64
    if mod(Key(i)+sum(Key(i-7:i-1)),2)==0
        error('Key fails parity bit requirement of DES, use another key and try again.'), return
    end
end
%Next we form the initial permuation of the not parity check bits of the key.    
IKeyPerm = [57	49	41	33	25	17	9	1	58	50	42	34	26	18	10	2	59	51	43	35	27	19	11	3	60	52	44	36	63	55	47	39	31	23	15	7	62	54	46	38	30	22	14	6	61	53	45	37	29	21	13	5	28	20	12	4];
Key1 = Key(IKeyPerm);
%Here is the final key selection permutation
FinKeyPerm = [14	17	11	24	1	5	3	28	15	6	21	10	23	19	12	4	26	8	16	7	27	20	13	2	41	52	31	37	47	55	30	40	51	45	33	48	44	49	39	56	34	53	46	42	50	36	29	32];

%We form the vector of left shifts needed for the 16 rounds
LeftShifts = 2*ones(1,16); LeftShifts([1 2 9 16])= 1;

%Now split Key1 into left and right halves
C = Key1(1:28); D = Key1(29:end);

for round = 1:16
    %do the left shifts on C and D
    ell = LeftShifts(round);
    Cnew(1:28-ell)=C(ell+1:28); Cnew(28-ell+1:28)=C(1:ell);
    Dnew(1:28-ell)=D(ell+1:28); Dnew(28-ell+1:28)=D(1:ell);
    C=Cnew; D = Dnew;
    %perform selection permutation on juxtaposition of C and D
    JuxtCD = [C D];
    %The ith key is now the final permuation of JuxtCD
    RoundKeys(round,:) = JuxtCD(FinKeyPerm);
end
