function outHex = AESInvSBox(inHex)  
% outHex = AESInvSBox(inHex)
% Input:  inHex = a string of two hex characters.
% Output:  outHex = the corresponding two hex character representing the
% output of the inverse of the AES S-box

%First we create a 16 by 16 matrix of Talble 11.1 entries converted from hex
%to integers:
SBox = [82 9 106 213 48 54 165 56 191 64 163 158 129 243 215 251; 
124 227 57 130 155 47 255 135 52 142 67 68 196 222 233 203; 
84 123 148 50 166 194 35 61 238 76 149 11 66 250 195 78; 
8 46 161 102 40 217 36 178 118 91 162 73 109 139 209 37; 
114 248 246 100 134 104 152 22 212 164 92 204 93 101 182 146; 
108 112 72 80 253 237 185 218 94 21 70 87 167 141 157 132; 
144 216 171 0 140 188 211 10 247 228 88 5 184 179 69 6; 
208 44 30 143 202 63 15 2 193 175 189 3 1 19 138 107; 
58 145 17 65 79 103 220 234 151 242 207 206 240 180 230 115; 
150 172 116 34 231 173 53 133 226 249 55 232 28 117 223 110; 
71 241 26 113 29 41 197 137 111 183 98 14 170 24 190 27; 
252 86 62 75 198 210 121 32 154 219 192 254 120 205 90 244; 
31 221 168 51 136 7 199 49 177 18 16 89 39 128 236 95; 
96 81 127 169 25 181 74 13 45 229 122 159 147 201 156 239; 
160 224 59 77 174 42 245 176 200 235 187 60 131 83 153 97; 
23 43 4 126 186 119 214 38 225 105 20 99 85 33 12 125]; 

if(numel(inHex) == 1)
    inHex = strcat('0', inHex);
end

inBin = dec2bin(hex2dec(inHex));  %binary string rep of input
%pad w/ zeros on left as needed so string has length 8
k = 8 - numel(inBin);
for i = 1:k, inBin = ['0',inBin]; end
%IMPORTANT NOTE:  When a the string characters get converted to numbers,
%'0' -> 48, and '1' -> 49

row = (inBin(1)-48)*8+(inBin(2)-48)*4+(inBin(3)-48)*2+(inBin(4)-48)+1;
col = (inBin(5)-48)*8+(inBin(6)-48)*4+(inBin(7)-48)*2+(inBin(8)-48)+1;

outHex = dec2hex(SBox(row,col));

if(numel(outHex) == 1)
    outHex = strcat('0', outHex);
end;
