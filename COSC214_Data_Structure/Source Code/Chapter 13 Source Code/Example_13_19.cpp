//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL function includes works.
// This function assumes that the elements in the given ranges
// are ordered according to some sorting criterion.
//*************************************************************

#include <iostream>                                     //Line 1
#include <algorithm>                                    //Line 2

using namespace std;                                    //Line 3

int main()                                              //Line 4
{                                                       //Line 5
    char setA[5] = {'A', 'B', 'C', 'D', 'E'};           //Line 6
    char setB[10] = {'A', 'B', 'C', 'D', 'E', 
                     'F', 'I', 'J', 'K', 'L'};          //Line 7
    char setC[5] = {'A', 'E', 'I', 'O', 'U'};           //Line 8

    ostream_iterator<char> screen(cout, " ");           //Line 9

    cout << "Line 10: setA: ";                          //Line 10
    copy(setA, setA + 5, screen);                       //Line 11
    cout << endl;                                       //Line 12

    cout << "Line 13: setB: ";                          //Line 13
    copy(setB, setB + 10, screen);                      //Line 14
    cout << endl;                                       //Line 15

    cout << "Line 16: setC: ";                          //Line 16
    copy(setC, setC + 5, screen);                       //Line 17
    cout << endl;                                       //Line 18

    if (includes(setB, setB + 10, setA, setA + 5))      //Line 19
        cout << "Line 20: setA is a subset of setB"
             << endl;                                   //Line 20
    else                                                //Line 21
        cout << "Line 22: setA is not a subset of setB"
             << endl;                                   //Line 22

    if (includes(setB, setB + 10, setC, setC + 5))      //Line 23
        cout << "Line 24: setC is a subset of setB"
             << endl;                                   //Line 24
    else                                                //Line 25
        cout << "Line 26: setC is not a subset of setB"
             << endl;                                   //Line 26

    return 0;                                           //Line 27
}                                                       //Line 28
