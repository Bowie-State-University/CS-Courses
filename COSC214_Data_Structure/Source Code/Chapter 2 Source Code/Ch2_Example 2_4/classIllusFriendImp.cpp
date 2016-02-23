
#include <iostream>
#include "classIllusFriend.h"

using namespace std;
 
void classIllusFriend::print()
{
	cout << "In class classIllusFriend: x = " << x << endl;
}

void classIllusFriend::setx(int a)
{
	x = a;
}

void friendFunc(classIllusFriend cIFObject)         //Line 1
{                                                   //Line 2
    classIllusFriend localTwoObject;                //Line 3

    localTwoObject.x = 45;                          //Line 4

    localTwoObject.print();                         //Line 5

    cout << "Line 6: In friendFunc accessing "
         << "private member variable " << "x = " 
         << localTwoObject.x
         << endl;                                   //Line 6

    cIFObject.x = 88;                               //Line 7

    cIFObject.print();                              //Line 8

    cout << "Line 9: In friendFunc accessing "
         << "private member variable " << "x = " 
         << cIFObject.x << endl;                    //Line 9
}                                                   //Line 10

