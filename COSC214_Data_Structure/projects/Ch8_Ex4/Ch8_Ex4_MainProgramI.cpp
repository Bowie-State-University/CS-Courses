//Test Program
 
#include <iostream>
#include "queueAsArray.h"
  
using namespace std;
 
int main()
{
    queueType<int> queue(10);

    queue.addQueue(23);
    queue.addQueue(45);
    queue.addQueue(38);
    queue.addQueue(22);
    queue.deleteQueue();   //delete the first element
    queue.addQueue(18);
    queue.addQueue(42);
    queue.addQueue(10);
    queue.addQueue(27);
    queue.addQueue(5);

    cout << "Enter the position of the element "
         << "to be moved to the front." << endl;

    int pos;
    cin >> pos;
    cout << endl;

    queue.moveNthFront(pos);

    cout << "queue: ";

    while (!queue.isEmptyQueue())
    {
        cout << queue.front() <<  " ";
        queue.deleteQueue();
    }

    cout << endl;

    return 0;
}

