//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL functions reverse, 
// reverse_copy, rotate, and rotate_copy work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <algorithm>                                    //Line 2
#include <iterator>                                     //Line 3
#include <list>                                         //Line 4

using namespace std;                                    //Line 5

int main()                                              //Line 6
{                                                       //Line 7
    int temp[10] = {1, 3, 5, 7, 9, 0, 2, 4, 6, 8};      //Line 8

    list<int> intList(temp, temp + 10);                 //Line 9
    list<int> resultList;                               //List 10
    list<int>::iterator listItr;                        //Line 11

    ostream_iterator<int> screen(cout, " ");            //Line 12

    cout << "Line 13: intList: ";                       //Line 13
    copy(intList.begin(), intList.end(), screen);       //Line 14
    cout << endl;                                       //Line 15

    reverse(intList.begin(), intList.end());    //reverse Line 16

    cout << "Line 17: intList after reversal: ";        //Line 17
    copy(intList.begin(), intList.end(), screen);       //Line 18
    cout << endl;                                       //Line 19

    reverse_copy(intList.begin(), intList.end(), 
               back_inserter(resultList)); //reverse_copy Line 20

    cout << "Line 21: resultList: ";                    //Line 21
    copy(resultList.begin(), resultList.end(), screen); //Line 22
    cout << endl;                                       //Line 23

    listItr = intList.begin();                          //Line 24
    listItr++;                                          //Line 25
    listItr++;                                          //Line 26

    cout << "Line 27: intList before rotating: ";       //Line 27
    copy(intList.begin(), intList.end(), screen);       //Line 28
    cout << endl;                                       //Line 29

    rotate(intList.begin(), listItr, intList.end());    //Line 30

    cout << "Line 31: intList after rotating: ";        //Line 31
    copy(intList.begin(), intList.end(), screen);       //Line 32
    cout << endl;                                       //Line 33
 
    resultList.clear();                                 //Line 34
        
    rotate_copy(intList.begin(), listItr, intList.end(), 
                back_inserter(resultList)); //rotate_copy Line 35

    cout << "Line 36: intList after rotating and "
         << "copying: ";                                //Line 36
    copy(intList.begin(), intList.end(), screen);       //Line 37
    cout << endl;                                       //Line 38

    cout << "Line 39: resultList after rotating and "
         << "copying: ";                                //Line 39
    copy(resultList.begin(), resultList.end(), screen); //Line 40
    cout << endl;                                       //Line 41

    resultList.clear();                                 //Line 42
 
    rotate_copy(intList.begin(), 
                find(intList.begin(), 
                intList.end(), 6), intList.end(), 
                back_inserter(resultList));             //Line 43

    cout << "Line 44: resultList after rotating and "
         << "copying: ";                                //Line 44
    copy(resultList.begin(), resultList.end(),
         screen);                                       //Line 45
    cout << endl;                                       //Line 46

    return 0;                                           //Line 47
}                                                       //Line 48
