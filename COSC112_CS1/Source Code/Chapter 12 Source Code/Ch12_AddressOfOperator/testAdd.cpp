// Implementation file testAdd.cpp
   
#include <iostream>
#include "testAdd.h"
 
using namespace std;

void testAddress::setX(int inX)
{
    x = inX;
}

void testAddress::printX() const
{
    cout << x;
}

int& testAddress::addressOfX()
{ 
    return x;
} 
