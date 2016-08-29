#include <iostream>
  
#include "classAssignmentOverload.h"
 
using namespace std;

void cAssignmentOprOverload::print() const
{
    if (length == 0)
        cout << "The list is empty." << endl;
    else
    {
        for (int i = 0; i < length; i++)
            cout << list[i] << " ";
        cout << endl;
    }
}

void cAssignmentOprOverload::insertEnd(int item)
{
    if (length == maxSize)
        cout << "List is full" << endl;
    else
        list[length++] = item;
}

void cAssignmentOprOverload::destroyList()
{
    delete [] list;
    list = NULL;
    length = 0;
    maxSize = 0;
}

cAssignmentOprOverload::cAssignmentOprOverload(int size)
{
    maxSize = size;
    length = 0;

    if (maxSize == 0)
        list = NULL;
    else
        list = new int[maxSize];
}

const cAssignmentOprOverload& cAssignmentOprOverload::operator=
                    (const cAssignmentOprOverload& otherList)
{
    if (this != &otherList)  //avoid self-assignment; Line 1
    {
        delete [] list;                             //Line 2
        maxSize = otherList.maxSize;                //Line 3
        length = otherList.length;                  //Line 4

        list = new int[maxSize];                    //Line 5

        for (int i = 0; i < length; i++)            //Line 6
            list[i] = otherList.list[i];            //Line 7
    }

    return *this;                                   //Line 8
}


