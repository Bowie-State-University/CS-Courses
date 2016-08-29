  
#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>
  
using namespace std; 

int main()
{
    int intArray[] = {5, 6, 8, 3, 40, 
                      36, 98, 29, 75};               //Line 1

    vector<int> vecList(9);                          //Line 2

    ostream_iterator<int> screen(cout, " ");         //Line 3

    cout << "Line 4: intArray: ";                    //Line 4
    copy(intArray, intArray + 9, screen);            //Line 5
    cout << endl;                                    //Line 6
 
    copy(intArray, intArray + 9, vecList.begin());   //Line 7

    cout << "Line 8: vecList: ";                     //Line 8
    copy(vecList.begin(), vecList.end(), screen);    //Line 9
    cout << endl;                                    //Line 10

    copy(intArray+1, intArray + 9, intArray);        //Line 11
    cout << "Line 12: After shifting the elements "
         << "one position to the left, " << endl
         << "         intArray: ";                   //Line 12
    copy(intArray, intArray + 9, screen);            //Line 13
    cout << endl;                                    //Line 14

    copy(vecList.rbegin() + 2, vecList.rend(), 
                               vecList.rbegin());    //Line 15
    cout << "Line 16: After shifting the elements "
         << "down by two positions, "<< endl
         << "         vecList: ";                    //Line 16
    copy(vecList.begin(), vecList.end(), screen);    //Line 17
    cout << endl;                                    //Line 18

    return 0;
}
