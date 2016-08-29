// User-defined exception class.
 
#include <iostream>
#include <string> 
   
using namespace std;

class divisionByZero                          //Line 1
{                                             //Line 2
public:                                       //Line 3
    divisionByZero()                          //Line 4
    {
        message = "Division by zero";         //Line 5
    }                                         //Line 6

    divisionByZero(string str)                //Line 7
    {                                         //Line 8
        message = str;                        //Line 9
    }                                         //Line 10

    string what()                             //Line 11
    {                                         //Line 12
        return message;                       //Line 13
    }                                         //Line 14

private:                                      //Line 15
    string message;                           //Line 16
};                                            //Line 17
