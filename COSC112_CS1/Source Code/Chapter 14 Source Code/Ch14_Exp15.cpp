// Handling exception, in the main function, thrown by another
// function. The function throws the same exception object.
  
#include <iostream>
#include "divisionByZero.h"
 
using namespace std; 

void doDivision() throw (divisionByZero);

int main()
{
    try                                                   //Line 1
    {
        doDivision();                                     //Line 2
    }
    catch (divisionByZero divByZeroObj)                   //Line 3
    {
        cout << "Line 4: In main: " 
             << divByZeroObj.what() << endl;              //Line 4
    }

    return 0;                                              //Line 5
}

void doDivision() throw (divisionByZero)
{
    int dividend, divisor, quotient;                      //Line 6

    try                                                   //Line 7
    {
        cout << "Line 8: Enter the dividend: ";           //Line 8
        cin >> dividend;                                  //Line 9
        cout << endl;                                     //Line 10

        cout << "Line 11: Enter the divisor: ";           //Line 11
        cin >> divisor;                                   //Line 12
        cout << endl;                                     //Line 13

        if (divisor == 0)                                 //Line 14
            throw divisionByZero("Found division by 0!"); //Line 15

        quotient = dividend / divisor;                    //Line 16
        cout << "Line 17: Quotient = " << quotient
             << endl;                                     //Line 17
    }
    catch (divisionByZero)                                //Line 18
    {
        throw;                                            //Line 19
    }
}

