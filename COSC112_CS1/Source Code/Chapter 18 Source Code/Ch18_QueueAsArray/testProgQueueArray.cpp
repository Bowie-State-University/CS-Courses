//Test Program Queue as Array 
 
#include <iostream>
#include "queueAsArray.h"
 
using namespace std;
   
int main()
{
    queueType<int> queue;
    int x, y;

    queue.initializeQueue();
    x = 4;
    y = 5;
    queue.addQueue(x);
    queue.addQueue(y);
    x = queue.front();
    queue.deleteQueue();
    queue.addQueue(x + 5);
    queue.addQueue(16);
    queue.addQueue(x);
    queue.addQueue(y - 3);

    cout << "Queue Elements: ";

    while (!queue.isEmptyQueue())
    {
        cout << " " << queue.front();
        queue.deleteQueue();	
    }

    cout << endl;

    return 0;
}

