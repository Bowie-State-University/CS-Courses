//Test Program: class rectangleType
  
#include <iostream>                                  //Line 1
#include <iomanip>                                   //Line 2
#include "rectangleType.h"                           //Line 3

using namespace std;                                 //Line 4

int main()                                           //Line 5
{                                                    //Line 6
    rectangleType myRectangle;                       //Line 7
    rectangleType yourRectangle;                     //Line 8

    cout << fixed << showpoint << setprecision(2);   //Line 9

    myRectangle.setLength(15.25).setWidth(12.00);    //Line 10

    cout << "Line 11 -- myRectangle: ";              //Line 11
    myRectangle.print();                             //Line 12
    cout << endl;                                    //Line 13

    yourRectangle.setLength(18.50);                  //Line 14

    cout << "Line 15 -- yourRectangle: ";            //Line 15
    yourRectangle.print();                           //Line 16
    cout << endl;                                    //Line 17

    yourRectangle.setWidth(7.50);                    //Line 18

    cout << "Line 19 -- yourRectangle: ";            //Line 19
    yourRectangle.print();                           //Line 20
    cout << endl;                                    //Line 21

    return 0;                                        //Line 22
}                                                    //Line 23
 