//*************************************************************
// Author: D.S. Malik
//
// This program shows how STL inserters work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <algorithm>                                    //Line 2
#include <iterator>                                     //Line 3
#include <vector>                                       //Line 4
#include <list>                                         //Line 5

using namespace std;                                    //Line 6

int main()                                              //Line 7
{                                                       //Line 8
    int temp[8] = {1, 2, 3, 4, 5, 6, 7, 8};             //Line 9

    vector<int> vecList1;                               //Line 10
    vector<int> vecList2;                               //Line 11

    ostream_iterator<int> screenOut(cout, " ");         //Line 12

    copy(temp, temp + 8, back_inserter(vecList1));      //Line 13

    cout << "Line 14: vecList1: ";                      //Line 14
    copy(vecList1.begin(), vecList1.end(), screenOut);  //Line 15
    cout << endl;                                       //Line 16

    copy(vecList1.begin(), vecList1.end(), 
         inserter(vecList2, vecList2.begin()));         //Line 17

    cout << "Line 18: vecList2: ";                      //Line 18
    copy(vecList2.begin(), vecList2.end(), screenOut);  //Line 19
    cout << endl;                                       //Line 20

    list<int> tempList;                                 //Line 21

    copy(vecList2.begin(), vecList2.end(),
         front_inserter(tempList));                     //Line 22

    cout << "Line 23: tempList: ";                      //Line 23
    copy(tempList.begin(), tempList.end(), screenOut);  //Line 24
    cout << endl;                                       //Line 25

    return 0;                                           //Line 26
}                                                       //Line 27
