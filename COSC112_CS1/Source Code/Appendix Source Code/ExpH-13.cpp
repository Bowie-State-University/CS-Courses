  
//STL Functions search, sort, and binary_search

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std; 
   
int main()
{
    int intList[15] = {12, 34, 56, 34, 34, 
                       78, 38, 43, 12, 25,
                       34, 56, 62, 5, 49};            //Line 1

    vector<int> vecList(intList, intList + 15);       //Line 2
    int list[2] = {34, 56};                           //Line 3

    vector<int>::iterator location;                   //Line 4

    ostream_iterator<int> screenOut(cout, " ");       //Line 5

    cout << "Line 6: vecList: ";                      //Line 6
    copy(vecList.begin(), vecList.end(), screenOut);  //Line 7
    cout << endl;                                     //Line 8

    cout << "Line 9: list: ";                         //Line 9
    copy(list, list + 2, screenOut);                  //Line 10
    cout << endl;                                     //Line 11

        //search
    location = search(vecList.begin(), vecList.end(),
                      list, list + 2);                //Line 12

    if (location != vecList.end())                    //Line 13
        cout << "Line 14: list found in vecList. "
             << "The first occurrence of \n       "
             << "  list in vecList is at position: "
             << (location - vecList.begin())
             << endl;                                 //Line 14
    else                                              //Line 15
        cout << "Line 16: list is not in vecList."
             << endl;                                 //Line 16

        //sort
    sort(vecList.begin(), vecList.end());             //Line 17

    cout << "Line 18: vecList after sorting:\n"
         << "         ";                              //Line 18
    copy(vecList.begin(), vecList.end(), screenOut);  //Line 19
    cout << endl;                                     //Line 20

        //binary_search
    bool found;                                       //Line 21

    found = binary_search(vecList.begin(), 
                       vecList.end(), 78);            //Line 22

    if (found)                                        //Line 23
        cout << "Line 24: 43 found in vecList "
             << endl;                                 //Line 24
    else                                              //Line 25
        cout << "Line 26: 43 not in vecList" << endl; //Line 26

    return 0;
}
