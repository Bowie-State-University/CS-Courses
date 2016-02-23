

//***********************************************************
// Author: D.S. Malik
//
// This program illustrates how a use the function copy and 
// an ostream iterator in a program.
//***********************************************************

#include <algorithm>                                    //Line 1
#include <vector>                                       //Line 2
#include <iterator>                                     //Line 3
#include <iostream>                                     //Line 4

using namespace std;                                    //Line 5

int main()                                              //Line 6
{                                                       //Line 7
    int intArray[] = {5, 6, 8, 3, 40, 36, 98, 29, 75};  //Line 8

    vector<int> vecList(9);                             //Line 9

    ostream_iterator<int> screen(cout, " ");            //Line 10

    cout << "Line 11: intArray: ";                      //Line 11
    copy(intArray, intArray + 9, screen);               //Line 12
    cout << endl;                                       //Line 13
 
    copy(intArray, intArray + 9, vecList.begin());      //Line 14

    cout << "Line 15: vecList: ";                       //Line 15
    copy(vecList.begin(), vecList.end(), screen);       //Line 16
    cout << endl;                                       //Line 17

    copy(intArray + 1, intArray + 9, intArray);         //Line 18
    cout << "Line 19: After shifting the elements one "
         << "position to the left, intArray: " << endl; //Line 19
    copy(intArray, intArray + 9, screen);               //Line 20
    cout << endl;                                       //Line 21

    copy(vecList.rbegin() + 2, vecList.rend(), 
                               vecList.rbegin());       //Line 22
    cout << "Line 23: After shifting the elements down "
         << "by two positions, vecList:" << endl;       //Line 23
    copy(vecList.begin(), vecList.end(), screen);       //Line 24
    cout << endl;                                       //Line 25

    return 0;                                           //Line 26
}                                                       //Line 27

