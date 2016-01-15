
//*******************************************************
// Author: D.S. Malik
//
// Chapter 1: Programming Exercise 1
// Roman Number Implementation file
//*******************************************************
 
#include <iostream>
#include <string>
#include "roman.h"

using namespace std;

void romanType::printDecimal() const
{
    cout << decimalNum;
}

void romanType::printRoman() const
{
    cout << romanNum;
}

void romanType::setRoman(string rString)
{
    romanNum = rString;
    romanToDecimal();
}

void romanType::romanToDecimal()
{
//add your code
}

romanType::romanType()
{
    romanNum = 'I';
    decimalNum = 1;
}

romanType::romanType(string rString)
{
    romanNum = rString;
    romanToDecimal();
}
