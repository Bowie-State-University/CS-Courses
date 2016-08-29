// How to use predefined functions. 
#include <iostream>                                      //Line 1
#include <cmath>                                         //Line 2
#include <cctype>                                        //Line 3
#include <iomanip>                                       //Line 4

using namespace std;                                     //Line 5
  
int main()                                               //Line 6
{                                                        //Line 7
    int num;                                             //Line 8
    double firstNum, secondNum;                          //Line 9
    char ch = 'T';                                       //Line 10

    cout << fixed << showpoint << setprecision (2)
         << endl;                                        //Line 11
	
    cout << "Line 12: Is " << ch 
         << " a lowercase letter? "
         << islower(ch) << endl;                         //Line 12
    cout << "Line 13: Uppercase a is "
         << static_cast<char>(toupper('a')) << endl;     //Line 13

    cout << "Line 14: 4.5 to the power 6.0 = " 
         << pow(4.5, 6.0) << endl;                       //Line 14

    cout << "Line 15: Enter two decimal numbers: ";      //Line 15
    cin >> firstNum >> secondNum;                        //Line 16
    cout << endl;                                        //Line 17

    cout << "Line 18: " << firstNum 
         << " to the power of " << secondNum 
         << " = " << pow(firstNum, secondNum) << endl;   //Line 18

    cout << "Line 19: 5.0 to the power of 4 = "
         << pow(5.0, 4) << endl;                         //Line 19

    firstNum = firstNum + pow(3.5, 7.2);                 //Line 20
    cout << "Line 21: firstNum = " << firstNum << endl;  //Line 21

    num = -32;                                           //Line 22
    cout << "Line 23: Absolute value of " << num
         << " = " << abs(num) << endl;                   //Line 23

    cout << "Line 24: Square root of 28.00 = "
         << sqrt(28.00) << endl;                         //Line 24

     return 0;                                           //Line 25
}                                                        //Line 26

