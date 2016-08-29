// Division by zero and the assert function.

#include <iostream>
#include <cassert>  

using namespace std;
 
int main() 
{
    int dividend, divisor, quotient;                //Line 1

    cout << "Line 2: Enter the dividend: ";         //Line 2
    cin >> dividend;                                //Line 3
    cout << endl;                                   //Line 4

    cout << "Line 5: Enter the divisor: ";          //Line 5
    cin >> divisor;                                 //Line 6
    cout << endl;                                   //Line 7

    assert(divisor != 0);                           //Line 8
    quotient = dividend / divisor;                  //Line 9

    cout << "Line 10: Quotient = " << quotient 
         << endl;                                   //Line 10

    return 0;                                       //Line 11
}
