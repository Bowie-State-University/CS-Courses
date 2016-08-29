 
#include <iostream>
#include "rectangleType.h"
 
using namespace std;
 
int main()
{
    rectangleType rectangle1(23, 45);               //Line 1
    rectangleType rectangle2(12, 10);               //Line 2
    rectangleType rectangle3;                       //Line 3
    rectangleType rectangle4;                       //Line 4

    cout << "Line 5: rectangle1: ";                 //Line 5
    rectangle1.print();                             //Line 6
    cout << endl;                                   //Line 7

    cout << "Line 8: rectangle2: ";                 //Line 8
    rectangle2.print();                             //Line 9
    cout << endl;                                   //Line 10

    rectangle3 = rectangle1 + rectangle2;           //Line 11 
    
    cout << "Line 12: rectangle3: ";                //Line 12
    rectangle3.print();                             //Line 13
    cout << endl;                                   //Line 14

    rectangle4 = rectangle1 * rectangle2;           //Line 15
    
    cout << "Line 16: rectangle4: ";                //Line 16
    rectangle4.print();                             //Line 17
    cout << endl;                                   //Line 18
   
    if (rectangle1 == rectangle2)                   //Line 19
        cout << "Line 20: rectangle1 and "
             << "rectangle2 are equal." << endl;    //Line 20
    else                                            //Line 21
        cout << "Line 22: rectangle1 and " 
             << "rectangle2 are not equal."
             << endl;                               //Line 22

    if (rectangle1 != rectangle3)                   //Line 23
        cout << "Line 24: rectangle1 and "
             << "rectangle3 are not equal."
             << endl;                               //Line 24
    else                                            //Line 25
        cout << "Line 25: rectangle1 and "
             << "rectangle3 are equal." << endl;    //Line 26

    return 0;
}
