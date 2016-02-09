

//***************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use the STL class queue in a 
// program.
//***************************************************************

#include <iostream>                                    //Line 1
#include <queue>                                       //Line 2

using namespace std;                                   //Line 3

int main()                                             //Line 4
{                                                      //Line 5
    queue<int> intQueue;                               //Line 6

    intQueue.push(26);                                 //Line 7
    intQueue.push(18);                                 //Line 8
    intQueue.push(50);                                 //Line 9
    intQueue.push(33);                                 //Line 10

    cout << "Line 11: The front element of intQueue: " 
         << intQueue.front() << endl;                  //Line 11

    cout << "Line 12: The last element of intQueue: "
         << intQueue.back() << endl;                   //Line 12

    intQueue.pop();                                    //Line 13

    cout << "Line 14: After the pop operation, the "
         << "front element of intQueue: "
         << intQueue.front() << endl;                  //Line 14

    cout << "Line 15: intQueue elements: ";            //Line 15

    while (!intQueue.empty())                          //Line 16
    {                                                  //Line 17
        cout << intQueue.front() << " ";               //Line 18
        intQueue.pop();                                //Line 19
    }                                                  //Line 20

    cout << endl;                                      //Line 21

    return 0;                                          //Line 22
}                                                      //Line 23
