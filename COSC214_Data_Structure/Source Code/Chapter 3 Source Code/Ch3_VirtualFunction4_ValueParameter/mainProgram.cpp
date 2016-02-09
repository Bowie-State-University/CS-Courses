
//*******************************************************
// Author: D.S. Malik
//
// This program illustrates how virtual functions and a
// pointer variable of base class as a formal parameter
// work.
//*******************************************************

#include <iostream>                         //Line 1

#include "derivedClass.h"                   //Line 2

using namespace std;                        //Line 3

void callPrint(baseClass p);                //Line 4

int main()                                  //Line 5
{                                           //Line 6
    baseClass one(5);                       //Line 7
    derivedClass two(3, 15);                //Line 8

    one.print();                            //Line 9
    two.print();                            //Line 10

    cout << "*** Calling the function "
         << "callPrint  ***" << endl;       //Line 11

    callPrint(one);                         //Line 12
    callPrint(two);                         //Line 13

    return 0;                               //Line 14
}                                           //Line 15

void callPrint(baseClass p)  //p is a value parameter
{	
    p.print();
}