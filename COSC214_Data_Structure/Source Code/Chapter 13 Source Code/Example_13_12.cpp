
//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL functions remove, remove_if, 
// remove_copy, and remove_copy_if works.
//*************************************************************

#include <iostream>                                       //Line 1
#include <cctype>                                         //Line 2
#include <algorithm>                                      //Line 3
#include <iterator>                                       //Line 4
#include <vector>                                         //Line 5

using namespace std;                                      //Line 6

bool lessThanEqualTo50(int num);                          //Line 7

int main()                                                //Line 8
{                                                         //Line 9
    char cList[10] = {'A', 'a', 'A', 'B', 'A', 
                      'c', 'D', 'e', 'F', 'A'};           //Line 10

    vector<char> charList(cList, cList + 10);             //Line 11
    vector<char>::iterator lastElem, newLastElem;         //Line 12

    ostream_iterator<char> screen(cout, " ");             //Line 13

    cout << "Line 14: Character list: ";                  //Line 14
    copy(charList.begin(), charList.end(), screen);       //Line 15
    cout  <<  endl;                                       //Line 16

       //remove 
    lastElem = remove(charList.begin(), 
                      charList.end(), 'A');               //Line 17

    cout << "Line 18: Character list after removing A: "; //Line 18
    copy(charList.begin(), lastElem, screen);             //Line 19
    cout << endl;                                         //Line 20

      //remove_if
    newLastElem = remove_if (charList.begin(), 
                           lastElem, isupper);            //Line 21
    cout << "Line 22: Character list after removing "
         << "the uppercase letters: " << endl;            //Line 22
    copy(charList.begin(), newLastElem, screen);          //Line 23
    cout << endl << endl;                                 //Line 24
	
    int list[10] = {12, 34, 56, 21, 34, 78, 34, 55, 12, 
                   25};                                   //Line 25

    vector<int> intList(list, list + 10);                 //Line 26
    vector<int>::iterator  endElement;                    //Line 27

    ostream_iterator<int> screenOut(cout, " ");           //Line 28

    cout << "Line 29: intList: ";                         //Line 29
    copy(intList.begin(), intList.end(), screenOut);      //Line 30
    cout << endl;                                         //Line 31

    vector<int> temp1(10);                                //Line 32

        //remove_copy
    endElement = remove_copy(intList.begin(), intList.end(), 
                             temp1.begin(), 34);          //Line 33
 
    cout << "Line 34: temp1 after copying all the "
         << "elements of intList except 34: " << endl;  //Line 34
    copy(temp1.begin(), endElement, screenOut);           //Line 35
    cout << endl;                                         //Line 36

    vector<int> temp2(10, 0);                             //Line 37

        //remove_copy_if
    remove_copy_if (intList.begin(), intList.end(), 
                 temp2.begin(), lessThanEqualTo50);       //Line 38

    cout << "Line 39: temp2 after copying all the elements of "
         << "intList except \nnumbers less than 50: ";    //Line 39
    copy(temp2.begin(), temp2.end(), screenOut);          //Line 40
    cout << endl;                                         //Line 41

    return 0;                                             //Line 42
}                                                         //Line 43

bool lessThanEqualTo50(int num)                           //Line 44
{                                                         //Line 45
     return (num <= 50);                                  //Line 46
}                                                         //Line 47

