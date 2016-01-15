//*******************************************************
// Author: D.S. Malik
//
// Chapter 1: Programming Exercise 1
// Roman Num Header file
//*******************************************************  
 
#include <string>
using namespace std;

class romanType
{
public:
    void setRoman(string);
    void romanToDecimal();
    void printDecimal() const;
    void printRoman() const;
    romanType();
    romanType(string);

private:
    string romanNum;
    int decimalNum;
};