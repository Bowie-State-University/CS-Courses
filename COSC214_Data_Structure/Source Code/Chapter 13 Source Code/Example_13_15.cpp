
//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL functions search, search_n, 
// sort, and binary_search work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <algorithm>                                    //Line 2
#include <iterator>                                     //Line 3
#include <vector>                                       //Line 4

using namespace std;                                    //Line 5

int main()                                              //Line 6
{                                                       //Line 7
    int intList[15] = {12, 34, 56, 34, 34, 78, 38, 43, 
                       12, 25, 34, 56, 62, 5, 49};      //Line 8

    vector<int> vecList(intList, intList + 15);         //Line 9
    int list[2] = {34, 56};                             //Line 10

    vector<int>::iterator location;                     //Line 11

    ostream_iterator<int> screenOut(cout, " ");         //Line 12

    cout << "Line 13: vecList: ";                       //Line 13
    copy(vecList.begin(), vecList.end(), screenOut);    //Line 14
    cout << endl;                                       //Line 15

    cout << "Line 16: list: ";                          //Line 16
    copy(list, list + 2, screenOut);                    //Line 17
    cout << endl;                                       //Line 18

         //search
    location = search(vecList.begin(), vecList.end(),
                      list, list + 2);                  //Line 19

    if (location != vecList.end())                      //Line 20
       cout << "Line 21: list found in vecList. The "
            << "first occurrence of \n    list in vecList "
            << "is at position: "
            << (location - vecList.begin()) << endl;    //Line 21
    else                                                //Line 22
        cout << "Line 23: list is not in vecList"
             << endl;                                   //Line 23

         //search_n
    location = search_n(vecList.begin(), vecList.end(),
                        2, 34);                         //Line 24
 
    if (location != vecList.end())                      //Line 25
        cout << "Line 26: Two consecutive occurrences of "
             << "34 found in \n    vecList at position: "
             << (location - vecList.begin()) << endl;   //Line 26
    else                                                //Line 27
        cout << "Line 28: Two consecutive occurrences "
             << "of 34 not in vecList" << endl;         //Line 28

         //sort
    sort(vecList.begin(), vecList.end());               //Line 29

    cout << "Line 30: vecList after sorting:"
         << endl << "    ";                             //Line 30
    copy(vecList.begin(), vecList.end(), screenOut);    //Line 31
    cout << endl;                                       //Line 32

        //binary_search
    bool found;                                         //Line 33

    found = binary_search(vecList.begin(), 
                          vecList.end(), 78);           //Line 34

    if (found)                                          //Line 35
       cout << "Line 36: 43 found in vecList " << endl; //Line 36
    else                                                //Line 37
       cout << "Line 38: 43 is not in vecList" << endl; //Line 38

    return 0;                                           //Line 39
}                                                       //Line 40
