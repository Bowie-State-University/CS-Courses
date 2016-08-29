   
#include <iostream>

#include "petType.h"

using namespace std; 

void petType::print() 
{
    cout << "Name: " << name;
}

petType::petType(string n)
{
    name = n;
}
