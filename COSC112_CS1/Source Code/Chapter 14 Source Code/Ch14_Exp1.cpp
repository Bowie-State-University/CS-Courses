// Division by zero.
   
#include <iostream>

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

    quotient = dividend / divisor;                  //Line 8
    cout << "Line 9: Quotient = " << quotient
         << endl;                                   //Line 9

    return 0;                                       //Line 10
}
