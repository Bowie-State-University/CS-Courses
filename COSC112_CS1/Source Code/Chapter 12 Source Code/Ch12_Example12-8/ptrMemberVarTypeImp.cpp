   
#include <iostream>
#include <cassert>
 
#include "ptrMemberVarType.h"

using namespace std;

void ptrMemberVarType::print() const
{
    for (int i = 0; i < length; i++)
        cout << p[i] << " ";
}

void ptrMemberVarType::insertAt(int index, int num)
{
      //if index is out of bounds, terminate the program
    assert(index >= 0 && index < maxSize);

    if (index < length)
        p[index] = num;
    else
    {
        p[length] = num;
        length++;
    }
}

ptrMemberVarType::ptrMemberVarType(int size)
{
    if (size <= 0)
    {
        cout << "The array size must be positive." << endl;
        cout << "Creating an array of the size 10." << endl;

        maxSize = 10;
    }
    else
        maxSize = size;

    length = 0;

    p = new int[maxSize];
}

ptrMemberVarType::~ptrMemberVarType()
{
      delete [] p;
}

    //copy constructor
ptrMemberVarType::ptrMemberVarType 
                  (const ptrMemberVarType& otherObject)
{
    maxSize = otherObject.maxSize;
    length = otherObject.length;

    p = new int[maxSize];
 
    for (int i = 0; i < length; i++)
         p[i] = otherObject.p[i];
}
