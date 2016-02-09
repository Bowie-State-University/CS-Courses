//***********************************************************
// Author: D.S. Malik
//
// This program illustrates how to allocate dynamic memory
// using a pointer variable and how to manipulate data into
// that memory location.
//***********************************************************
 
#include <iostream>                              //Line 1

using namespace std;                             //Line 2

int main()                                       //Line 3
{                                                //Line 4
    int *p;                                      //Line 5
    int *q;                                      //Line 6

    p = new int;                                 //Line 7
    *p = 34;                                     //Line 8
    cout << "Line 9: p = " << p 
         << ", *p = " << *p << endl;             //Line 9

    q = p;                                       //Line 10
    cout << "Line 11: q = " << q 
         << ", *q = " << *q << endl;             //Line 11

    *q = 45;                                     //Line 12
    cout << "Line 13: p = " << p 
         << ", *p = " << *p << endl;             //Line 13
    cout << "Line 14: q = " << q 
         << ", *q = " << *q << endl;             //Line 14

    p = new int;                                 //Line 15
    *p = 18;                                     //Line 16
    cout << "Line 17: p = " << p 
         << ", *p = " << *p << endl;             //Line 17
    cout << "Line 18: q = " << q 
         << ", *q = " << *q << endl;             //Line 18

    delete q;                                    //Line 19
    q = NULL;                                    //Line 20
    q = new int;                                 //Line 21
    *q = 62;                                     //Line 22
    cout << "Line 23: p = " << p 
         << ", *p = " << *p << endl;             //Line 23
    cout << "Line 24: q = " << q 
         << ", *q = " << *q << endl;             //Line 24

    return 0;                                    //Line 25
}                                                //Line 26

