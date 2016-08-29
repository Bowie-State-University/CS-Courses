   
#include <iostream>
#include <queue>

using namespace std; 

int main()    
{
    queue<int> intQueue;                          //Line 1

    intQueue.push(26);                            //Line 2
    intQueue.push(18);                            //Line 3
    intQueue.push(50);                            //Line 4
    intQueue.push(33);                            //Line 5

    cout << "Line 6: The front element of "
         << "intQueue: " << intQueue.front()
         << endl;                                 //Line 6

    cout << "Line 7: The last element of "
         << "intQueue: " << intQueue.back()
         << endl;                                 //Line 7

    intQueue.pop();                               //Line 8

    cout << "Line 9: After the pop operation, "
         << "the front element of intQueue: "
         << intQueue.front() << endl;             //Line 9

    cout << "Line 10: intQueue elements: ";       //Line 10

    while (!intQueue.empty())                     //Line 11
    {
        cout << intQueue.front() << " ";          //Line 12
        intQueue.pop();                           //Line 13
    }

    cout << endl;                                 //Line 14

    return 0;
}
