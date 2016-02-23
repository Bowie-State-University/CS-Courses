//Friend Function Illustration

#include <iostream>
#include "classIllusFriend.h"
 
using namespace std;

int main()                                          //Line 11
{                                                   //Line 12
    classIllusFriend aObject;                       //Line 13

    aObject.setx(32);                               //Line 14

    cout << "Line 15: aObject.x: ";                 //Line 15
    aObject.print();                                //Line 16
    cout << endl;                                   //Line 17

    cout << "*~*~*~* Testing friendFunc *~*~*~*" 
         << endl << endl;                           //Line 18

    friendFunc(aObject);                            //Line 19

    return 0;                                       //Line 20
}                                                   //Line 21



