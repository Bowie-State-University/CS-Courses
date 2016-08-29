//personTypeImp.cpp

#include <iostream> 
#include <string> 
#include "personType.h"
  
using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

	//constructor
personType::personType(string first, string last) 
{ 
    firstName = first;
    lastName = last;
}

