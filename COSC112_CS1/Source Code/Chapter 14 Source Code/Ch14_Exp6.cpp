// Handling division by zero exception.

#include <iostream>
  
using namespace std;
 
int main() 
{
    int dividend, divisor, quotient;                //Line 1

    try                                             //Line 2
    {
        cout << "Line 3: Enter the dividend: ";     //Line 3
        cin >> dividend;                            //Line 4
        cout << endl;                               //Line 5

        cout << "Line 6: Enter the divisor: ";      //Line 6
        cin >> divisor;                             //Line 7
        cout << endl;                               //Line 8

        if (divisor == 0)                           //Line 9
            throw divisor;                          //Line 10

        quotient = dividend / divisor;              //Line 11

        cout << "Line 12: Quotient = " << quotient
             << endl;                               //Line 12
    }
    catch (int x)                                   //Line 13
    {
        cout << "Line 14: Division by " << x
             << endl;                               //Line 14
    }

    return 0;                                       //Line 15
}
