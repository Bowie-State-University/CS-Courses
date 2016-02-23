
//***********************************************************
// Author: D.S. Malik
//
// This program illustrates how a use a deque container in a
// program.
//***********************************************************

#include <iostream>                                    //Line 1
#include <deque>                                       //Line 2
#include <algorithm>                                   //Line 3
#include <iterator>                                    //Line 4

using namespace std;                                   //Line 5

int main()                                             //Line 6
{                                                      //Line 7
    deque<int>  intDeq;                                //Line 8
    ostream_iterator<int> screen(cout, " ");           //Line 9

    intDeq.push_back(13);                              //Line 10
    intDeq.push_back(75);                              //Line 11
    intDeq.push_back(28);                              //Line 12
    intDeq.push_back(35);                              //Line 13

    cout << "Line 14: intDeq: ";                       //Line 14
    copy(intDeq.begin(), intDeq.end(), screen);        //Line 15
    cout << endl;                                      //Line 16
    
    intDeq.push_front(0);                              //Line 17
    intDeq.push_back(100);                             //Line 18

    cout << "Line 19: After adding two more "
         << "elements, one at the front " << endl
         << "         and one at the back, intDeq: ";  //Line 19
    copy(intDeq.begin(), intDeq.end(), screen);        //Line 20
    cout << endl;                                      //Line 21

    intDeq.pop_front();                                //Line 22
    intDeq.pop_front();                                //Line 23

    cout << "Line 24: After removing the first "
         << "two elements, intDeq: ";                  //Line 24
    copy(intDeq.begin(), intDeq.end(), screen);        //Line 25
    cout << endl;                                      //Line 26

    intDeq.pop_back();                                 //Line 27
    intDeq.pop_back();                                 //Line 28

    cout << "Line 29: After removing the last "
         << "two elements, intDeq = ";                 //Line 29
    copy(intDeq.begin(), intDeq.end(), screen);        //Line 30
    cout << endl;                                      //Line 31

    deque<int>::iterator  deqIt;                       //Line 32

    deqIt = intDeq.begin();                            //Line 33
    ++deqIt;   //deqIt points to the second element    //Line 34
    intDeq.insert(deqIt, 444);                         //Line 35
    cout << "Line 36: After inserting 444, intDeq:  "; //Line 36
    copy(intDeq.begin(), intDeq.end(), screen);        //Line 37
    cout << endl;                                      //Line 38

    return 0;                                          //Line 39
}                                                      //Line 40

