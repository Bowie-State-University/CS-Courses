//The user program that uses the class integerManipulation
 
#include <iostream> 
#include "integerManipulation.h"

using namespace std;

int main()                                          //Line 1
{                                                   //Line 2
    integerManipulation number;                     //Line 3

    long long num;                                  //Line 4

    cout << "Enter an integer: ";                   //Line 5
    cin >> num;                                     //Line 6
    cout << endl;                                   //Line 7
    
    number.setNum(num);                             //Line 8

    number.classifyDigits();                        //Line 9

    cout << number.getNum() << "------" << endl
         << "The number of even digits: " 
         << number.getEvensCount() << endl
         << "The number of zeros: " 
         << number.getZerosCount() << endl
         << "The number of odd digits: "
         << number.getOddsCount() << endl;          //Line 10

    return 0;                                       //Line 11
}//end main                                         //Line 12
