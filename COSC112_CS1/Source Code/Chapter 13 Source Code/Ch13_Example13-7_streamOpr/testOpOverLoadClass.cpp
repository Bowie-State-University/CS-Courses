  
//This program shows how to use the modified class rectangleType.

#include <iostream>

#include "rectangleType.h"
 
using namespace std; 

int main()
{
    rectangleType myRectangle(23, 45);                //Line 1
    rectangleType yourRectangle;                      //Line 2

    cout << "Line 3: myRectangle: " << myRectangle 
         << endl;                                     //Line 3

    cout << "Line 4: Enter the length and width "
         <<"of a rectangle: ";                        //Line 4
    cin >> yourRectangle;                             //Line 5
    cout << endl;                                     //Line 6

    cout << "Line 7: yourRectangle: "
         << yourRectangle << endl;                    //Line 7

    cout << "Line 8: myRectangle + yourRectangle: " 
         << myRectangle + yourRectangle << endl;      //Line 8
    cout << "Line 9: myRectangle * yourRectangle: " 
         << myRectangle * yourRectangle << endl;      //Line 9

    return 0;
}
