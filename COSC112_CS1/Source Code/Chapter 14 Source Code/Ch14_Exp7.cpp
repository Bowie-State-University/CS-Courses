// Handle division by zero, division by a negative integer,
// and input failure exceptions.
 
#include <iostream>
#include <string>
   
using namespace std;

int main() 
{
    int dividend, divisor = 1, quotient;            //Line 1

    string inpStr 
       = "The input stream is in the fail state.";  //Line 2

    try                                             //Line 3
    {
        cout << "Line 4: Enter the dividend: ";     //Line 4
        cin >> dividend;                            //Line 5
        cout << endl;                               //Line 6

        cout << "Line 7: Enter the divisor: ";      //Line 7
        cin >> divisor;                             //Line 8
        cout << endl;                               //Line 9

        if (divisor == 0)                           //Line 10
            throw divisor;                          //Line 11
        else if (divisor < 0)                       //Line 12
            throw string("Negative divisor.");      //Line 13
        else if (!cin)                              //Line 14
            throw inpStr;                           //Line 15

        quotient = dividend / divisor;              //Line 16

        cout << "Line 17: Quotient = " << quotient		
             << endl;                               //Line 17
    }
    catch (int x)                                   //Line 18
    {
        cout << "Line 19: Division by " << x
             << endl;                               //Line 19
    }
    catch (string s)                                //Line 20
    {
        cout << "Line 21: " << s << endl;           //Line 21
    }

    return 0;                                       //Line 22
}
