//extPersonTypeImp.cpp

#include <iostream>
#include <string>
#include "extPersonType.h"
  
void extPersonType::printAddress() const
{
    personType::print();
    cout << endl;

    address.print();
}

void extPersonType::printInfo() const
{
    personType::print();
    cout << endl;

    cout << "Date of Birth: ";
    dob.printDate();
    cout << endl;

    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Person Type: " << personStatus << endl;
    address.print();
    cout << endl;
}

void extPersonType::setInfo(string fName, string lName,
                            int month, int day, int year,
                            string street, string c, string s, 
                            string z, string phone, string pStatus)
{
    personType::setName(fName,lName);
    dob.setDate(month, day, year);
    address.setAddress(street,c , s, z);
    phoneNumber = phone;
    personStatus = pStatus;
}

void extPersonType::setInfo(string fName, string lName,
                            dateType d, addressType ad, 
                            string phone, string pStatus)
{
    personType::setName(fName,lName);
    dob = d;
    address = ad;
    phoneNumber = phone;
    personStatus = pStatus;
}

bool extPersonType::isLastName(string lName) const
{
    return(getLastName() == lName);
}

void extPersonType::getAddress(string& sAddress, string& c, 
                                string& s, string& z)
{
    address.getAddress(sAddress, c, s, z);
}

string extPersonType::getPhoneNumber() const
{
    return phoneNumber;
}
	
string extPersonType::getStatus() const
{
    return personStatus;
}

bool extPersonType::isStatus(string status)
{
    return (status == personStatus);
}

bool extPersonType::isDOB(int month, int day, int year)
{
    return (dob.getMonth() == month && dob.getDay() == day 
            && dob.getYear() == year);
}

void extPersonType::getDOB(int& month, int& day, int& year)
{
    month = dob.getMonth();
    day = dob.getDay(); 
    year = dob.getYear();
}

bool extPersonType::isMonth(int month)  const
{
	return(dob.getMonth() == month);
}

extPersonType::extPersonType(string fName, string lName,
                            int month, int day, int year,
                            string street, string c, string s, 
                            string z, string phone, string pStatus)
{
    personType::setName(fName,lName);
    dob.setDate(month, day, year);
    address.setAddress(street,c,s,z);
    phoneNumber = phone;
    personStatus = pStatus;
}

bool extPersonType::operator==(const extPersonType& right) const
{ 
    return (getFirstName() == right.getFirstName() 
            && getLastName() == right.getLastName());
}

bool extPersonType::operator!=(const extPersonType& right) const
{
    return (!(*this == right));
}

bool extPersonType::operator<=(const extPersonType& right) const
{
	return(*this < right || *this == right);
}

bool extPersonType::operator<(const extPersonType& right) const
{
    return ((getLastName() < right.getLastName()) ||
            (getLastName() == right.getLastName() 
              && getFirstName() < right.getFirstName()));
}

bool extPersonType::operator>=(const extPersonType& right) const
{
    return (*this > right || *this == right);
}

bool extPersonType::operator>(const extPersonType& right) const
{
    return ((getLastName() > right.getLastName()) ||
            (getLastName() == right.getLastName() 
              && getFirstName() > right.getFirstName()));
}
