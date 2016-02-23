
//******************************************************
// Author: D.S. Malik
//
// This program illustrates how virtual functions and
// pointer formal parameters work.
//******************************************************

#include <iostream>                         //Line 1

#include "derivedClass.h"                   //Line 2

using namespace std;                        //Line 3

void callPrint(baseClass *p);               //Line 4

int main()                                  //Line 5
{                                           //Line 6
    baseClass *q;                           //Line 7
    derivedClass *r;                        //Line 8

    q = new baseClass(5);                   //Line 9
    r = new derivedClass(3, 15);            //Line 10

    q->print();                             //Line 11
    r->print();                             //Line 12

    cout << "*** Calling the function "
         << "callPrint  ***" << endl;       //Line 13

    callPrint(q);                           //Line 14
    callPrint(r);                           //Line 15

    return 0;                               //Line 16
}                                           //Line 17

void callPrint(baseClass *p)
{
    p->print();
}

