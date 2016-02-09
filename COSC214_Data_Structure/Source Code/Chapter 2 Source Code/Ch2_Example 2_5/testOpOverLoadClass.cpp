//This program shows how to use the class rectangleType.
 
#include <iostream>                                 //Line 1
#include "rectangleType.h"                          //Line 2

using namespace std;                                //Line 3
 
int main()                                          //Line 4
{                                                   //Line 5
    rectangleType rectangle1(23, 45);               //Line 6
    rectangleType rectangle2(12, 10);               //Line 7
    rectangleType rectangle3;                       //Line 8
    rectangleType rectangle4;                       //Line 9

    cout << "Line 10: rectangle1: ";                //Line 10
    rectangle1.print();                             //Line 11
    cout << endl;                                   //Line 12

    cout << "Line 13: rectangle2: ";                //Line 13
    rectangle2.print();                             //Line 14
    cout << endl;                                   //Line 15

    rectangle3 = rectangle1 + rectangle2;           //Line 16 
    
    cout << "Line 17: rectangle3: ";                //Line 17
    rectangle3.print();                             //Line 18
    cout << endl;                                   //Line 19

    rectangle4 = rectangle1 * rectangle2;           //Line 20
    
    cout << "Line 21: rectangle4: ";                //Line 21
    rectangle4.print();                             //Line 22
    cout << endl;                                   //Line 23
   
    if (rectangle1 == rectangle2)                   //Line 24
        cout << "Line 25: rectangle1 and "
             << "rectangle2 are equal." << endl;    //Line 25
    else                                            //Line 26
        cout << "Line 27: rectangle1 and " 
             << "rectangle2 are not equal."
             << endl;                               //Line 27

    if (rectangle1 != rectangle3)                   //Line 28
        cout << "Line 29: rectangle1 and "
             << "rectangle3 are not equal."
             << endl;                               //Line 29
    else                                            //Line 30
        cout << "Line 31: rectangle1 and "
             << "rectangle3 are equal." << endl;    //Line 31

    return 0;                                       //Line 32
}                                                   //Line 33
