
//*************************************************************
// Author: D.S. Malik
// This program shows how STL relational function objects work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <string>                                       //Line 2
#include <algorithm>                                    //Line 3
#include <iterator>                                     //Line 4
#include <vector>                                       //Line 5
#include <functional>                                   //Line 6

using namespace std;                                    //Line 7

int main()                                              //Line 8
{                                                       //Line 9
    equal_to<int> compare;                              //Line 10
    bool isEqual = compare(6, 6);                       //Line 11

    cout << "Line 12: isEqual = " << isEqual << endl;   //Line 12

    greater<string> greaterStr;                         //Line 13

    string str1 = "Hello";                              //Line 14
    string str2 = "There";                              //Line 15

    if (greaterStr(str1, str2))                         //Line 16
       cout << "Line 17: \"" << str1 << "\" is greater "
            << "than \"" << str2 << "\"" << endl;       //Line 17
    else                                                //Line 18
        cout << "Line 19: \"" << str1 << "\" is not "
             << "greater than \"" << str2 << "\""
             << endl;                                   //Line 19

    int temp[8] = {2, 3, 4, 5, 1, 7, 8, 9};             //Line 20

    vector<int> vecList(temp, temp + 8);                //Line 21
    vector<int>::iterator intItr1, intItr2;             //Line 22
    ostream_iterator<int> screen(cout, " ");            //Line 23

    cout << "Line 24: vecList: ";                       //Line 24
    copy(vecList.begin(), vecList.end(), screen);       //Line 25
    cout << endl;                                       //Line 26

    intItr1 = adjacent_find(vecList.begin(), 
                     vecList.end(), greater<int>());    //Line 27
    intItr2 = intItr1 + 1;                              //Line 28

    cout << "Line 29: In vecList, the first set of "
         << "out of order elements are: " << *intItr1
         << " " << *intItr2 << endl;                    //Line 29
    cout << "Line 30: In vecList, the first out of "
         << "order element is at position: "
         << vecList.end() - intItr2 << endl;            //Line 30

    return 0;                                           //Line 31
}                                                       //Line 32
