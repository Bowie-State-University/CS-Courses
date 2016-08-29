  
//List Container Example

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
 
using namespace std;
  
int main()
{
    list<int> intList1, intList2, intList3;           //Line 1

    ostream_iterator<int> screen(cout, " ");          //Line 2

    intList1.push_back(23);                           //Line 3
    intList1.push_back(58);                           //Line 4
    intList1.push_back(58);                           //Line 5
    intList1.push_back(58);                           //Line 6
    intList1.push_back(36);                           //Line 7
    intList1.push_back(15);                           //Line 8
    intList1.push_back(93);                           //Line 9
    intList1.push_back(98);                           //Line 10
    intList1.push_back(58);                           //Line 11

    cout << "Line 12: intList1: ";                    //Line 12
    copy(intList1.begin(), intList1.end(), screen);   //Line 13
    cout << endl;                                     //Line 14

    intList2 = intList1;                              //Line 15

    cout << "Line 16: intList2: ";                    //Line 16
    copy(intList2.begin(), intList2.end(), screen);   //Line 17
    cout << endl;                                     //Line 18

    intList1.unique();                                //Line 19

    cout << "Line 20: After removing the consecutive "
         << "duplicates," << endl
         << "         intList1: ";                    //Line 20
    copy(intList1.begin(), intList1.end(), screen);   //Line 21
    cout << endl;                                     //Line 22

    intList2.sort();                                  //Line 23

    cout << "Line 24: After sorting, intList2: ";     //Line 24
    copy(intList2.begin(),intList2.end(),screen);     //Line 25
    cout << endl;                                     //Line 26

    intList3.push_back(13);                           //Line 27
    intList3.push_back(25);                           //Line 28
    intList3.push_back(23);                           //Line 29
    intList3.push_back(198);                          //Line 30
    intList3.push_back(136);                          //Line 31
 
    cout << "Line 32: intList3: ";                    //Line 32
    copy(intList3.begin(), intList3.end(), screen);   //Line 33
    cout << endl;                                     //Line 34

    intList3.sort();                                  //Line 35

    cout << "Line 36: After sorting, intList3: ";     //Line 36
    copy(intList3.begin(), intList3.end(), screen);   //Line 37
    cout << endl;                                     //Line 38

    intList2.merge(intList3);                         //Line 39

    cout << "Line 40: After merging intList2 and "
         << "intList3, intList2: " << endl
         << "         ";                              //Line 40 
    copy(intList2.begin(), intList2.end(), screen);   //Line 41
    cout << endl;                                     //Line 42
 
    return 0;
}
