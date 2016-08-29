   
//deque Example
#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
  
using namespace std; 
 
int main()
{
    deque<int> intDeq;                            //Line 1
    ostream_iterator<int> screen(cout, " ");      //Line 2
 
    intDeq.push_back(13);                         //Line 3
    intDeq.push_back(75);                         //Line 4
    intDeq.push_back(28);                         //Line 5
    intDeq.push_back(35);                         //Line 6

    cout << "Line 7: intDeq: ";                   //Line 7
    copy(intDeq.begin(), intDeq.end(), screen);   //Line 8
    cout << endl;                                 //Line 9

    intDeq.push_front(0);                         //Line 10
    intDeq.push_back(100);                        //Line 11

    cout << "Line 12: After adding two more "
         << "elements, one at the front " << endl
         << "         and one at the back, " 
         <<"intDeq: ";                            //Line 12
    copy(intDeq.begin(), intDeq.end(), screen);   //Line 13
    cout << endl;                                 //Line 14

    intDeq.pop_front();                           //Line 15
    intDeq.pop_front();                           //Line 16

    cout << "Line 17: After removing the first "
         << "two elements, " << endl
         << "         intDeq: ";                  //Line 17
    copy(intDeq.begin(), intDeq.end(), screen);   //Line 18
    cout << endl;                                 //Line 19

    intDeq.pop_back();                            //Line 20
    intDeq.pop_back();                            //Line 21

    cout << "Line 22: After removing the last "
         << "two elements, " << endl
         << "         intDeq: ";                  //Line 22
    copy(intDeq.begin(), intDeq.end(), screen);   //Line 23
    cout << endl;                                 //Line 24

    return 0;
}
