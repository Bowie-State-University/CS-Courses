#ifndef H_weightedGraph
#define H_weightedGraph

//***************************************************************
// Author: D.S. Malik
//
// class topologicalOrderType
// This class specifies the operations to find a topological
// ordering of a graph.
//****************************************************************

#include <iostream>
#include <iomanip>
#include "graphType.h"

using namespace std;

class topologicalOrderType: public graphType
{
public:
    void bfTopOrder();
      //Function to perform breadth first topological ordering of
      //a graph.
      //Postcondition: The vertices are output in a breadth first 
      //topological order.

    topologicalOrderType(int size = 0); 
      //Constructor
      //Postcondition: gSize = 0; maxSize = size;
      //    graph is an array of pointers to linked lists.
};

void topologicalOrderType::bfTopOrder()
{
    linkedQueueType<int> queue;

    int *topologicalOrder; //pointer to the array to store
                           //breadth first topological ordering
    topologicalOrder = new int[gSize];

    int topIndex = 0;

    linkedListIterator<int> graphIt; //iterator to traverse a
                                     //linked list

    int *predCount;    //pointer to the array to store the
                       //predecessor count of a vertex.
    predCount = new int[gSize];

    for (int ind = 0; ind < gSize; ind++)
        predCount[ind] = 0;

        //Determine the predecessor count of all the vertices.
    for (int ind = 0; ind < gSize; ind++)
    {
        for (graphIt = graph[ind].begin(); 
             graphIt != graph[ind].end(); ++graphIt)
        {
            int w = *graphIt;
            predCount[w]++;
        }
    }

        //Initialize queue: If the predecessor count of
        //vertex is 0, put this node into the queue.
    for (int ind = 0; ind < gSize; ind++)
        if (predCount[ind] == 0)
           queue.addQueue(ind);

    while (!queue.isEmptyQueue())
    {
        int u = queue.front();
        queue.deleteQueue();
        topologicalOrder[topIndex++] = u;

           //Reduce the predecessor count of all the successors
           //of u by 1. If the predecessor count of a vertex 
           //becomes 0, put this vertex into the queue.
        for (graphIt = graph[u].begin(); 
             graphIt != graph[u].end(); ++graphIt)
        {
            int w = *graphIt;
            predCount[w]--; 
            if (predCount[w] == 0)
               queue.addQueue(w);
        }
    }//end while

       //output the vertices in breadth first topological order
    for (int ind = 0; ind < gSize; ind++)
        cout << topologicalOrder[ind] << " ";

    cout << endl;

    delete [] topologicalOrder;
    delete [] predCount;
}//bfTopOrder

    //Constructor
topologicalOrderType::topologicalOrderType(int size)
                     :graphType(size)
{
}

#endif