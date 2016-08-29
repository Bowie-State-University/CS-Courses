//***************************************************************
// Authors: D.S. Malik 
// 
// This program shows where the include statements, using 
// statement, named constants, variable declarations, assignment
// statements, and input and output statements typically appear.
//***************************************************************
  
#include <iostream>                                  //Line 1
 
using namespace std;                                 //Line 2

const int NUMBER = 12;                               //Line 3

int main()                                           //Line 4
{                                                    //Line 5
    int firstNum;                                    //Line 6
    int secondNum;                                   //Line 7

    firstNum = 18;                                   //Line 8
    cout << "Line 9: firstNum = " << firstNum 
         << endl;                                    //Line 9

    cout << "Line 10: Enter an integer: ";           //Line 10
    cin >> secondNum;                                //Line 11
    cout << endl;                                    //Line 12

    cout << "Line 13: secondNum = " << secondNum 
         << endl;                                    //Line 13

    firstNum = firstNum + NUMBER + 2 * secondNum;    //Line 14

    cout << "Line 15: The new value of " 
         << "firstNum = " << firstNum << endl;       //Line 15

    return 0;                                        //Line 16
}                                                    //Line 17
