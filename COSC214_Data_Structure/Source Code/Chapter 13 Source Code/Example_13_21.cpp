//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL numeric algorithms accumulate
// and adjacent_difference works.
//*************************************************************

#include <iostream>                                     //Line 1
#include <algorithm>                                    //Line 2
#include <numeric>                                      //Line 3
#include <iterator>                                     //Line 4
#include <vector>                                       //Line 5
#include <functional>                                   //Line 6

using namespace std;                                    //Line 7

void print(vector<int> vList);                          //Line 8

int main()                                              //Line 9
{                                                       //Line 10
    int list[8] = {1, 2, 3, 4, 5, 6, 7, 8};             //Line 11

    vector<int> vecList(list, list + 8);                //Line 12
    vector<int> newVList(8);                            //Line 13

    cout << "Line 14: vecList: ";                       //Line 14
    print(vecList);                                     //Line 15

    int sum = accumulate(vecList.begin(), 
                         vecList.end(), 0); //accumulate; Line 16

    cout << "Line 17: Sum of the elements of vecList = "
         << sum << endl;                                //Line 17

    int product = accumulate(vecList.begin(), vecList.end(), 
                             1, multiplies<int>());     //Line 18

    cout << "Line 19: Product of the elements of "
         << "vecList = " << product << endl;            //Line 19

    adjacent_difference(vecList.begin(), vecList.end(),
                newVList.begin()); //adjacent_difference; Line 20

    cout << "Line 21: newVList: ";                      //Line 21
    print(newVList);                                    //Line 22

    adjacent_difference(vecList.begin(), vecList.end(), 
                  newVList.begin(), multiplies<int>()); //Line 23
 
    cout << "Line 24: newVList: ";                      //Line 24
    print(newVList);                                    //Line 25

    return 0;                                           //Line 26
}                                                       //Line 27

void print(vector<int> vList)                           //Line 28
{                                                       //Line 29
     ostream_iterator<int> screenOut(cout, " ");        //Line 30

     copy(vList.begin(), vList.end(), screenOut);       //Line 31
     cout << endl;                                      //Line 32
}                                                       //Line 33
