//**********************************************************
// Author: D.S. Malik
//
// This program shows how to use the class complexType.
//**********************************************************
 
#include <iostream>                                 //Line 1
#include "complexType.h"                            //Line 2

using namespace std;                                //Line 3

int main()                                          //Line 4
{                                                   //Line 5
    complexType num1(23, 34);                       //Line 6
    complexType num2;                               //Line 7
    complexType num3;                               //Line 8

    cout << "Line 9: Num1 = " << num1 << endl;      //Line 9
    cout << "Line 10: Num2 = " << num2 << endl;     //Line 10

    cout << "Line 11: Enter the complex number "
         << "in the form (a, b): ";                 //Line 11
    cin >> num2;                                    //Line 12
    cout << endl;                                   //Line 13

    cout << "Line 14: New value of num2 = "
         << num2 << endl;                           //Line 14

    num3 = num1 + num2;                             //Line 15
	
    cout << "Line 16: Num3 = " << num3 << endl;     //Line 16

    cout << "Line 17: " << num1 << " + " << num2
         << " = " << num1 + num2 << endl;           //Line 17

    cout << "Line 18: " << num1 << " * " << num2
         << " = " << num1 * num2 << endl;           //Line 18

    return 0;                                       //Line 19
}                                                   //Line 20
