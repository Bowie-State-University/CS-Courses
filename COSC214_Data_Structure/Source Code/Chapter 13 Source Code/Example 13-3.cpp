
//***************************************************************
// Author: D.S. Malik
//
// This program illustrates how the operations on a set/multiset
// container work.
//***************************************************************

#include <iostream>                                    //Line 1
#include <set>                                         //Line 2
#include <string>                                      //Line 3
#include <iterator>                                    //Line 4
#include <algorithm>                                   //Line 5

using namespace std;                                   //Line 6

int main()                                             //Line 7
{                                                      //Line 8
    set<int> intSet;                                   //Line 9
    set<int, greater<int> > intSetA;                   //Line 10

    set<int, greater<int> >::iterator intGtIt;         //Line 11

    ostream_iterator<int> screen(cout, " ");           //Line 12

    intSet.insert(16);                                 //Line 13
    intSet.insert(8);                                  //Line 14
    intSet.insert(20);                                 //Line 15
    intSet.insert(3);                                  //Line 16

    cout << "Line 17: intSet: ";                       //Line 17
    copy(intSet.begin(), intSet.end(), screen);        //Line 18
    cout << endl;                                      //Line 19

    intSetA.insert(36);                                //Line 20
    intSetA.insert(30);                                //Line 21
    intSetA.insert(39);                                //Line 22
    intSetA.insert(59);                                //Line 23
    intSetA.insert(156);                               //Line 24

    cout << "Line 25: intSetA: ";                      //Line 25
    copy(intSetA.begin(), intSetA.end(), screen);      //Line 26
    cout << endl;                                      //Line 27

    intSetA.erase(59);                                 //Line 28

    cout << "Line 29: After removing 59, intSetA: ";   //Line 29
    copy(intSetA.begin(), intSetA.end(), screen);      //Line 30
    cout << endl;                                      //Line 31

    intGtIt = intSetA.begin();                         //Line 32
    ++intGtIt;                                         //Line 33

    intSetA.erase(intGtIt);                            //Line 34

    cout << "Line 35: After removing the second "
         << "element, intSetA: ";                      //Line 35
    copy(intSetA.begin(), intSetA.end(), screen);      //Line 36
    cout << endl;                                      //Line 37

    multiset<string, greater<string> > namesMultiSet;  //Line 38
    multiset<string, greater<string> >::iterator iter; //Line 39

    ostream_iterator<string> pScreen(cout, " ");       //Line 40

    namesMultiSet.insert("Donny");                     //Line 41
    namesMultiSet.insert("Zippy");                     //Line 42
    namesMultiSet.insert("Ronny");                     //Line 43
    namesMultiSet.insert("Hungry");                    //Line 44
    namesMultiSet.insert("Ronny");                     //Line 45

    cout << "Line 46: namesMultiSet: ";                //Line 46
    copy(namesMultiSet.begin(), namesMultiSet.end(), 
         pScreen);                                     //Line 47
    cout << endl;                                      //Line 48

    return 0;                                          //Line 49
}                                                      //Line 50


