 
#include <iostream>

#include "derivedClass.h"

using namespace std;

void callPrint(baseClass& p);

int main()                                  //Line 1
{                                           //Line 2
    baseClass one(5);                       //Line 3
    derivedClass two(3, 15);                //Line 4

    one.print();                            //Line 5
    two.print();                            //Line 6

    cout << "*** Calling the function "
         << "callPrint  ***" << endl;       //Line 7

    callPrint(one);                         //Line 8
    callPrint(two);                         //Line 9

    return 0;                               //Line 10
}                                           //Line 11


void callPrint(baseClass& p)
{	
    p.print();
}
