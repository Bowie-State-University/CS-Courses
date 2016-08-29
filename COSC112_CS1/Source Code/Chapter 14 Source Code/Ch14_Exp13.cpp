// Handling exception thrown by a function.
  
#include <iostream>
#include "divisionByZero.h"
 
using namespace std;
 
void doDivision();

int main()
{
    doDivision();                                   //Line 1

    return 0;                                       //Line 2
}

void doDivision() 
{
    int dividend, divisor, quotient;                //Line 3

    try
    {
        cout << "Line 4: Enter the dividend: ";     //Line 4
        cin >> dividend;                            //Line 5
        cout << endl;                               //Line 6

        cout << "Line 7: Enter the divisor: ";      //Line 7
        cin >> divisor;                             //Line 8
        cout << endl;                               //Line 9

        if (divisor == 0)                           //Line 10
            throw divisionByZero();                 //Line 11

        quotient = dividend / divisor;              //Line 12
        cout << "Line 13: Quotient = " << quotient
             << endl;                               //Line 13
    }
    catch (divisionByZero divByZeroObj)             //Line 14
    {
        cout << "Line 15: In the function "
             << "doDivision: " 
             << divByZeroObj.what() << endl;        //Line 15
    }
}

