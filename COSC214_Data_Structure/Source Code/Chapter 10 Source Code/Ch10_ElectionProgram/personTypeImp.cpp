#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::setName(string first, string last)
{
	cout << "See Programming Exercise 13" << endl;
}

string personType::getFirstName() const
{
    cout << "See Programming Exercise 13" << endl;
    return "";
}

string personType::getLastName() const
{
    cout << "See Programming Exercise 13" << endl;
    return "";
}

     //constructor 
personType::personType(string first, string last) 
{ 
	cout << "See Programming Exercise 13" << endl;
}

const personType& personType::operator=(const personType& right)
{
	cout << "See Programming Exercise 13" << endl;

	return *this;
}

    //overload the operator ==
bool personType::operator==(const personType& right) const
{
   return (firstName == right.firstName 
          && lastName == right.lastName); }

bool personType::operator!=(const personType& right) const
{
	cout << "See Programming Exercise 13" << endl;
	return false;
}

bool personType::operator<=(const personType& right) const
{
	cout << "See Programming Exercise 13" << endl;
	return false;
}

bool personType::operator<(const personType& right) const
{
	cout << "See Programming Exercise 13" << endl;
	return false;
}

bool personType::operator>=(const personType& right) const
{
	cout << "See Programming Exercise 13" << endl;
	return false;
}

bool personType::operator>(const personType& right) const
{
	cout << "See Programming Exercise 13" << endl;
	return false;
}

istream& operator>>(istream& is, personType& pName)
{
	is>>pName.firstName>>pName.lastName;
	
 	return is;
}

ostream& operator<<(ostream& os, const personType&  pName)
{
	 cout << "See Programming Exercise 13" << endl;
	 
 	return os;
}
