
//****************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use a list container in a 
// program.
//****************************************************************

#include <iostream>                                     //Line 1
#include <list>                                         //Line 2
#include <iterator>                                     //Line 3
#include <algorithm>                                    //Line 4
 
using namespace std;                                    //Line 5

int main()                                              //Line 6
{                                                       //Line 7
    list<int> intList1, intList2;                       //Line 8

    ostream_iterator<int> screen(cout, " ");            //Line 9

    intList1.push_back(23);                             //Line 10
    intList1.push_back(58);                             //Line 11
    intList1.push_back(58);                             //Line 12
    intList1.push_back(36);                             //Line 13
    intList1.push_back(15);                             //Line 14
    intList1.push_back(98);                             //Line 15
    intList1.push_back(58);                             //Line 16

    cout << "Line 17: intList1: ";                      //Line 17
    copy(intList1.begin(), intList1.end(), screen);     //Line 18
    cout << endl;                                       //Line 19

    intList2 = intList1;                                //Line 20

    cout << "Line 21: intList2: ";                      //Line 21
    copy(intList2.begin(), intList2.end(), screen);     //Line 22
    cout << endl;                                       //Line 23

    intList1.unique();                                  //Line 24

    cout << "Line 25: After removing the consecutive "
         << "duplicates," << endl 
         << "         intList1: ";                      //Line 25
    copy(intList1.begin(), intList1.end(), screen);     //Line 26
    cout << endl;                                       //Line 27

    intList2.sort();                                    //Line 28

    cout << "Line 29: After sorting, intList2: ";       //Line 29
    copy(intList2.begin(), intList2.end(), screen);     //Line 30
    cout << endl;                                       //Line 31

    return 0;                                           //Line 32
}                                                       //Line 33
