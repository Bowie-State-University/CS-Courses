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

personType::personType(string first, string last) 

{ 
	firstName = first;
	lastName = last;
}

bool personType::operator==(const personType& right) const
{ 
	return(firstName == right.firstName &&
		   lastName == right.lastName);
}

bool personType::operator!=(const personType& right) const
{
	return(firstName != right.firstName ||
		   lastName != right.lastName);
}

bool personType::operator<=(const personType& right) const
{
	return(*this < right || *this == right);
}

bool personType::operator<(const personType& right) const
{
	return((lastName < right.lastName) ||
		   (lastName == right.lastName &&
		    firstName < right.firstName));
}

bool personType::operator>=(const personType& right) const
{
	return(*this > right || *this == right);
}

bool personType::operator>(const personType& right) const
{
	return((lastName > right.lastName) ||
		   (lastName == right.lastName &&
		    firstName > right.firstName));
}
