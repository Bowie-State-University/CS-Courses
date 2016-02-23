
//****************************************************************
// Author: D.S. Malik
//
// This program shows how to use the modified class rectangleType.
//****************************************************************

#include <iostream>                                   //Line 1

#include "rectangleType.h"                            //Line 2
 
using namespace std;                                  //Line 3

int main()                                            //Line 4
{                                                     //Line 5
    rectangleType myRectangle(23, 45);                //Line 6
    rectangleType yourRectangle;                      //Line 7

    cout << "Line 8: myRectangle: " << myRectangle 
         << endl;                                     //Line 8

    cout << "Line 9: Enter the length and width "
         <<"of a rectangle: ";                        //Line 9
    cin >> yourRectangle;                             //Line 10
    cout << endl;                                     //Line 11

    cout << "Line 12: yourRectangle: "
         << yourRectangle << endl;                    //Line 12

    cout << "Line 13: myRectangle + yourRectangle: " 
         << myRectangle + yourRectangle << endl;      //Line 13
    cout << "Line 14: myRectangle * yourRectangle: " 
         << myRectangle * yourRectangle << endl;      //Line 14

    return 0;                                         //Line 15
}                                                     //Line 16
