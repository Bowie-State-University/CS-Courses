//***********************************************************
// Author: D.S. Malik
//
// This program illustrates how a pointer variable works.
//***********************************************************
 
#include <iostream>                              //Line 1

using namespace std;                             //Line 2

int main()                                       //Line 3
{                                                //Line 4
    int *p;                                      //Line 5
    int num1 = 5;                                //Line 6
    int num2 = 8;                                //Line 7

    p = &num1; //store the address of num1 into p; Line 8

    cout << "Line 9: &num1 = " << &num1 
         << ", p = " << p << endl;               //Line 9
    cout << "Line 10: num1 = " << num1 
         << ", *p = " << *p << endl;             //Line 10

    *p = 10;                                     //Line 11
    cout << "Line 12: num1 = " << num1 
         << ", *p = " << *p << endl << endl;     //Line 12

    p = &num2; //store the address of num2 into p; Line 13

    cout << "Line 14: &num2 = " << &num2 
         << ", p = " << p << endl;               //Line 14
    cout << "Line 15: num2 = " << num2 
         << ", *p = " << *p << endl;             //Line 15

    *p = 2 * (*p);                               //Line 16
    cout << "Line 17: num2 = " << num2 
         << ", *p = " << *p << endl;             //Line 17

    return 0;                                    //Line 18
}                                                //Line 19
