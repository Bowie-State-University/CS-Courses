//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL functions count, count_if, 
// max_element, min_element, and random_shuffle work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <cctype>                                       //Line 2
#include <algorithm>                                    //Line 3
#include <iterator>                                     //Line 4
#include <vector>                                       //Line 5

using namespace std;                                    //Line 6

int main()                                              //Line 7
{                                                       //Line 8
    char cList[10] = {'Z', 'a', 'Z', 'B', 'Z', 
                      'c', 'D', 'e', 'F', 'Z'};         //Line 9

    vector<char> charList(cList, cList + 10);           //Line 10

    ostream_iterator<char> screen(cout, " ");           //Line 11

    cout << "Line 12: charList: ";                      //Line 12
    copy(charList.begin(), charList.end(), screen);     //Line 13
    cout << endl;                                       //Line 14
 
    int noOfZs = count(charList.begin(), charList.end(), 
                       'Z');                     //count; Line 15

    cout << "Line 16: Number of Z\'s in charList:"
         << noOfZs << endl;                             //Line 16

    int noOfUpper = count_if (charList.begin(), charList.end(),
                    isupper);                 //count_if; Line 17

    cout << "Line 18: Number of uppercase letters in "
         << "charList: " << noOfUpper << endl;          //Line 18

    int list[10] = {12, 34, 56, 21, 34, 
                    78, 34, 55, 12, 25};                //Line 19

    ostream_iterator<int> screenOut(cout, " ");         //Line 20

    cout << "Line 21: list: ";                          //Line 21
    copy(list, list + 10, screenOut);                   //Line 22
    cout << endl;                                       //Line 23

    int *maxLoc = max_element(list, 
                              list + 10);  //max_element; Line 24

    cout << "Line 25: Largest element in list: " 
         << *maxLoc << endl;                            //Line 25

     int *minLoc = min_element(list, 
                               list + 10); //min_element; Line 26

    cout << "Line 27: Smallest element in list: "
         << *minLoc << endl;                            //Line 27

    random_shuffle(list, list + 10);    //random_shuffle; Line 28

    cout << "Line 29: list after random shuffle: ";     //Line 29
    copy(list, list + 10, screenOut);                   //Line 30
    cout << endl;                                       //Line 31

    return 0;                                           //Line 32
}                                                       //Line 33

