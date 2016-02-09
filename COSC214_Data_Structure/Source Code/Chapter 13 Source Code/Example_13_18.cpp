//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL functions for_each and 
// transform work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <cctype>                                       //Line 2
#include <algorithm>                                    //Line 3
#include <iterator>                                     //Line 4
#include <vector>                                       //Line 5

using namespace std;                                    //Line 6

void doubleNum(int& num);                               //Line 7

int main()                                              //Line 8
{                                                       //Line 9
    char cList[5] = {'a', 'b', 'c', 'd', 'e'};          //Line 10

    vector<char> charList(cList, cList + 5);            //Line 11

    ostream_iterator<char> screen(cout, " ");           //Line 12

    cout << "Line 13: charList: ";                      //Line 13
    copy(charList.begin(), charList.end(), screen);     //Line 14
    cout << endl;                                       //Line 15

    transform(charList.begin(), charList.end(), 
              charList.begin(), toupper);               //Line 16

    cout << "Line 17: charList after changing all lowercase" 
         << " letters to \n        uppercase: ";        //Line 17
    copy(charList.begin(), charList.end(), screen);     //Line 18
    cout << endl;                                       //Line 19

    int list[7] = {2, 8, 5, 1, 7, 11, 3};               //Line 20

    ostream_iterator<int> screenOut(cout, " ");         //Line 21

    cout << "Line 22: list: ";                          //Line 22
    copy(list, list + 7, screenOut);                    //Line 23
    cout << endl;                                       //Line 24

    cout << "Line 25: The effect of the for_each "
         << "function: ";                               //Line 25
    for_each(list, list + 7, doubleNum);                //Line 26
    cout << endl;                                       //Line 27

    cout << "Line 28: list after a call to the for_each "
         << "function: ";                               //Line 28
    copy(list, list + 7, screenOut);                    //Line 29
    cout << endl;                                       //Line 30
    
    return 0;                                           //Line 31
}                                                       //Line 32

void doubleNum(int& num)                                //Line 33
{                                                       //Line 34
     num = 2 * num;                                     //Line 35
     cout << num << " ";                                //Line 36
}                                                       //Line 37
