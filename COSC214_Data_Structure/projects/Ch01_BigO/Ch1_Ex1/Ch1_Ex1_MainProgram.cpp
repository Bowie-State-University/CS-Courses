
//*******************************************************
// Author: D.S. Malik
//
// Chapter 1: Programming Exercise 1
//*******************************************************
 
#include <iostream>
#include <string>
#include "roman.h"

using namespace std;

int main()
{
    romanType roman;

    string romanString;
     
    cout << "Enter a roman number: ";
    cin >> romanString;
    cout << endl;

    roman.setRoman(romanString);

    cout << "The equivalent of the Roman numeral "
         << romanString << " is ";
    roman.printDecimal();
    cout << endl;

    return 0;
}