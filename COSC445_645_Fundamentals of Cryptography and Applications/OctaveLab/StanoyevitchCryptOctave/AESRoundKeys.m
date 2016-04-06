function keyMat =  AESRoundKeys(KeyHexStr)
%
% Input:  KeyHexStr = a hex string of 16 bytes, representing the Full
% AES system key
% Output: RoundKeys = a hex string of 176 bytes, the adjacent groups of 11
% representing the 11 round keys.


rcon = ['01', '02', '04', '08', '10', '20', '40', '80', '1b', '36'];
x = 1;

sizeOfKeyHexStr = numel(KeyHexStr)/8;

for i = 1:sizeOfKeyHexStr,
    for j = 1:sizeOfKeyHexStr,
        sixteenFirst = KeyHexStr(x);
        sixteenZero = KeyHexStr(x+1);
        
        if ((int64(sixteenFirst) >= 64) && (int64(sixteenFirst) <= 70))
            int64(sixteenFirst);
            sixteenFirst = char(int64(sixteenFirst)+32);
        end
        
        if ((int64(sixteenZero) >= 64) && (int64(sixteenZero) <= 70))
            int64(sixteenZero); 
            sixteenZero = char(int64(sixteenZero)+32);
        end
            
        
        if (sixteenFirst == 'a') || (sixteenFirst == 'b') || (sixteenFirst == 'c')  || (sixteenFirst == 'd') || (sixteenFirst == 'e') || (sixteenFirst == 'f')
            sixteenFirst = int64(sixteenFirst-87)*16;
        
        else
                sixteenFirst = int64(sixteenFirst-48)*16;
        end
        if (sixteenZero == 'a') || (sixteenZero == 'b') || (sixteenZero == 'c')  || (sixteenZero == 'd') || (sixteenZero == 'e') || (sixteenZero == 'f')
            sixteenZero = int64(sixteenZero-87);
        else
            sixteenZero = int64(sixteenZero-48);
        end
        keyMat(j,i) = sixteenFirst + sixteenZero;
        x = x+2;
    end
end

for i = 1:4,
    for j = 5:44,
        keyMat(i,j) = 0;
    end
end

x = 1;
column = 5;
row = 1;
counter = 4;

for i = 5: 44,
    if (mod(counter,4) == 0)
        rc = strcat(rcon(x),rcon(x+1));
        pos = ByteXOR(dec2hex(keyMat(row,column-4)), (ByteXOR(rc,AESSBox(dec2hex(keyMat(2,column-1))))));
        if (length(pos) == 1)
            pos = strcat('0',pos);
        end
        keyMat(row,column) = hex2dec(pos);
        row = row+1;
        
        pos = ByteXOR(dec2hex(keyMat(row,column-4)), AESSBox(dec2hex(keyMat(3, column-1))));
        if (length(pos) == 1)
            pos = strcat('0',pos);
        end
        keyMat(row,column) = hex2dec(pos);
        row = row+1;
        
        pos = ByteXOR(dec2hex(keyMat(row,column-4)), AESSBox(dec2hex(keyMat(4, column-1))));
        if (length(pos) == 1)
            pos = strcat('0',pos);
        end
        keyMat(row,column) = hex2dec(pos);
        row = row+1;
        
        pos = ByteXOR(dec2hex(keyMat(row,column-4)), AESSBox(dec2hex(keyMat(1, column-1))));
        if (length(pos) == 1)
            pos = strcat('0',pos);
        end
        keyMat(row,column) =  hex2dec(pos);
        
        column = column+1;
        counter = counter+1;
        x = x + 2;
    else
        row = 1;
        for j = 1:4,
            pos = ByteXOR(dec2hex(keyMat(row,column-4)), dec2hex(keyMat(row, column-1)));
            if (length(pos) == 1)
                pos = strcat('0',pos);
            end
            keyMat(row,column) = hex2dec(pos);
            row = row + 1; 
        end
        column = column+1;
        counter = counter+1;
    end
    row = 1;
end;

QString = '';

for i = 1:44,
    for j = 1:4,
        QString = strcat(QString, dec2hex(keyMat(j,i)));
    end
end
pos = ByteXOR('0','A');

if (length(pos) == 1)
  pos = strcat('0',pos);
end


