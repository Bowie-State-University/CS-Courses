//Chapter 13: this pointer illustration
   
#include <iostream>                                 //Line 1
#include <iomanip>                                  //Line 2
#include "rectangleType.h"                          //Line 3

using namespace std;                                //Line 4

int main()                                          //Line 5
{                                                   //Line 6
    rectangleType oldYard(20.00, 10.00);            //Line 7
    rectangleType newYard;                          //Line 8

    cout << fixed << showpoint << setprecision(2);  //Line 9

    cout << "Line 10: Area of oldYard = "
         << oldYard.area() << endl;                 //Line 10

    newYard = oldYard.doubleDimensions();           //Line 11

    cout << "Line 12: Area of newYard = "
        << newYard.area() << endl;                  //Line 12

    return 0;                                       //Line 13
}                                                   //Line 14
