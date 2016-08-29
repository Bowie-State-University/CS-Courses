// Handle exceptions by fixing the errors. The program continues to
// prompt the user until a valid input is entered.

#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    int number;                                     //Line 1
    bool done = false;                              //Line 2

    string str = 
          "The input stream is in the fail state."; //Line 3 

    do                                              //Line 4
    {                                               //Line 5
        try                                         //Line 6
        {                                           //Line 7
            cout << "Line 8: Enter an integer: ";   //Line 8
            cin >> number;                          //Line 9
            cout << endl;                           //Line 10
     
            if (!cin)                               //Line 11
                throw str;                          //Line 12

            done = true;                            //Line 13
            cout << "Line 14: Number = " << number 
                 << endl;                           //Line 14
        }                                           //Line 15
        catch (string messageStr)                   //Line 16
        {                                           //Line 17
            cout << "Line 18: " << messageStr 
                 << endl;                           //Line 18
            cout << "Line 19: Restoring the "
                 << "input stream." << endl;        //Line 19
            cin.clear();                            //Line 20
            cin.ignore(100, '\n');                  //Line 21
        }                                           //Line 22
    } 
    while (!done);                                  //Line 23

    return 0;                                       //Line 24
}
