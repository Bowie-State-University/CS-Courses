//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL functions fill and fill_n 
// work.
//*************************************************************

#include <iostream>                                       //Line 1
#include <algorithm>                                      //Line 2
#include <iterator>                                       //Line 3
#include <vector>                                         //Line 4

using namespace std;                                      //Line 5

int main()                                                //Line 6
{                                                         //Line 7
    vector<int> vecList(8);                               //Line 8
    ostream_iterator<int> screen(cout, " ");              //Line 9

    fill(vecList.begin(), vecList.end(), 2);              //Line 10

    cout << "Line 11: After filling vecList with 2's: ";  //Line 11
    copy(vecList.begin(), vecList.end(), screen);         //Line 12
    cout << endl;                                         //Line 13

    fill_n(vecList.begin(), 3, 5);                        //Line 14

    cout << "Line 15: After filling the first three "
         << "elements with 5's: " << endl << "         "; //Line 15
    copy(vecList.begin(), vecList.end(), screen);         //Line 16
    cout << endl;                                         //Line 17

    return 0;                                             //Line 18
}                                                         //Line 19
