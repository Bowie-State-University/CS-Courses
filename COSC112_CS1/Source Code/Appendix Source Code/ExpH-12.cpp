  
//STL Functions remove and replace
 
#include <iostream>
#include <cctype>
#include <algorithm>
#include <iterator>
#include <vector> 

using namespace std;
 
int main()
{
    char cList[10] = {'A', 'a', 'A', 'B', 'A', 
                      'c', 'D', 'e', 'F', 'A'};       //Line 1

    vector<char> charList1(cList, cList + 10);        //Line 2
    vector<char> charList2(cList, cList + 10);        //Line 3

    vector<char>::iterator lastElem;                  //Line 4

    ostream_iterator<char> screen(cout, " ");         //Line 5

    cout << "Line 6: Character list 1: ";             //Line 6
    copy(charList1.begin(), charList1.end(), screen); //Line 7
    cout << endl;                                     //Line 8
  
        //remove 
    lastElem = remove(charList1.begin(), 
                      charList1.end(), 'A');          //Line 9

    cout << "Line 10: Character list 1 after " 
         << "removing A: ";                           //Line 10
    copy(charList1.begin(), lastElem, screen);        //Line 11
    cout << endl;                                     //Line 12

    cout << "Line 13: Character list 2: ";            //Line 13
    copy(charList2.begin(), charList2.end(), screen); //Line 14
    cout << endl;                                     //Line 15

        //replace 
    replace(charList2.begin(), charList2.end(), 
                               'A', 'Z');             //Line 16

    cout << "Line 17: Character list 2 after "
         << "replacing A with Z: " << endl;           //Line 17
    copy(charList2.begin(), charList2.end(), screen); //Line 18
    cout << endl;                                     //Line 19

    return 0; 
}
