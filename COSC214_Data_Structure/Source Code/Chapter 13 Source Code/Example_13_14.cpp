
//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL functions swap, iter_swap, 
// and swap_ranges work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <algorithm>                                    //Line 2
#include <vector>                                       //Line 3
#include <iterator>                                     //Line 4

using namespace std;                                    //Line 5

int main()                                              //Line 6
{                                                       //Line 7
    char cList[10] = {'A', 'B', 'C', 'D', 'F', 
                      'G', 'H', 'I', 'J', 'K'};         //Line 8

    vector<char> charList(cList, cList + 10);           //Line 9
    vector<char>::iterator  charItr;                    //Line 10
 
    ostream_iterator<char> screen(cout, " ");           //Line 11

    cout << "Line 12: Character list: ";                //Line 12
    copy(charList.begin(), charList.end(), screen);     //Line 13
    cout << endl;                                       //Line 14
        //swap
    swap(charList[0], charList[1]);                     //Line 15

    cout << "Line 16: Character list after swapping the "
         << "first and second elements: " << endl;      //Line 16
    copy(charList.begin(), charList.end(), screen);     //Line 17
    cout << endl;                                       //Line 18

         //iter_swap
    iter_swap(charList.begin() + 2, 
              charList.begin() + 3);                    //Line 19

    cout << "Line 20: Character list after swapping the "
         << "third and fourth elements: " << endl;      //Line 20
    copy(charList.begin(), charList.end(), screen);     //Line 21
    cout << endl;                                       //Line 22

    charItr = charList.begin() + 4;                     //Line 23
    iter_swap(charItr, charItr + 1);                    //Line 24

    cout << "Line 25: Character list after swapping the "
         << "fifth and sixth elements: " << endl;       //Line 25
    copy(charList.begin(), charList.end(), screen);     //Line 26
    cout << endl << endl;                               //Line 27

    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};     //Line 28

    vector<int> intList(list, list + 10);               //Line 29

    ostream_iterator<int> screenOut(cout, " ");         //Line 30

    cout << "Line 31: intList: ";                       //Line 31
    copy(intList.begin(), intList.end(), screenOut);    //Line 32
    cout << endl;                                       //Line 33

           //swap_ranges
    swap_ranges(intList.begin(), intList.begin() + 4, 
                intList.begin() + 5);                   //Line 34
 
    cout << "Line 35: intList after swapping the first "
         << "four elements with the \n          four elements "
         << "starting at the sixth element of intList: "
         << endl;                                       //Line 35
    copy(intList.begin(), intList.end(), screenOut);    //Line 36
    cout << endl;                                       //Line 37

    return 0;                                           //Line 38
}                                                       //Line 39
