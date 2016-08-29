//******************************************************
// Author: D. S. Malik
// 
// Program: Binary to decimal
// This program uses recursion to find the decimal
// representation of a binary number.
//******************************************************
 
#include <iostream> 
#include <cmath>

using namespace std;

void binToDec(int binaryNumber, int& decimal, int& weight);

int main()
{
    int decimalNumber;
    int bitWeight;
    int binaryNum;

    decimalNumber = 0;
    bitWeight = 0;

    cout << "Enter number in binary: ";
    cin >> binaryNum;
    cout << endl;

    binToDec(binaryNum, decimalNumber, bitWeight);
    cout << "Binary " << binaryNum << " = " << decimalNumber
         << " decimal" << endl;

    return 0;
}

void binToDec(int binaryNumber, int& decimal, int& weight)
{
    int bit;

    if (binaryNumber > 0)
    {
        bit = binaryNumber % 10; 
        decimal = decimal 
                  + bit * static_cast<int>(pow(2.0, weight));
        binaryNumber = binaryNumber / 10;  
        weight++;
        binToDec(binaryNumber, decimal, weight);
    }
}
