//Test Program
//Before moving the nth element queue and tempQueue are the same.
//The only diffence is that, queue.queueFront = 4, queue.queueRear = 2. 
//queue wraps around.
//tempQueue.queueFront = 0 and tempQueue.queueRear = 8. 
   
#include <iostream>
#include "queueAsArray.h"
 
using namespace std;

int main()
{
    queueType<int> queue(10), tempQueue(10);

    queue.addQueue(23);
    queue.addQueue(45);
    queue.addQueue(38);
    queue.addQueue(22);
    queue.deleteQueue();   //delete an element
    queue.deleteQueue();   //delete an element
    queue.deleteQueue();   //delete an element
    queue.deleteQueue();   //delete an element
    queue.addQueue(18);
    queue.addQueue(42);
    queue.addQueue(10);
    queue.addQueue(27);
    queue.addQueue(5);
    queue.addQueue(23);
    queue.addQueue(45);
    queue.addQueue(38);
    queue.addQueue(22);

    tempQueue.addQueue(18);
    tempQueue.addQueue(42);
    tempQueue.addQueue(10);
    tempQueue.addQueue(27);
    tempQueue.addQueue(5);
    tempQueue.addQueue(23);
    tempQueue.addQueue(45);
    tempQueue.addQueue(38);
    tempQueue.addQueue(22);

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

    cout << "tempQueue: ";
    while (!tempQueue.isEmptyQueue())
    {
        cout << tempQueue.front() <<  " ";
        tempQueue.deleteQueue();
    }

    cout << endl;

    return 0;
}



