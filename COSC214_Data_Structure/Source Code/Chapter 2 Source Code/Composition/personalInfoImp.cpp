#include <iostream>
#include <string>
#include "personalInfo.h"

using namespace std;

void personalInfoType::setPersonalInfo(string first, string last,
                          int month, int day, int year, int ID)
{
    name.setName(first, last);
    bDay.setDate(month, day, year);
    personID = ID;
}

void personalInfoType::printPersonalInfo() const
{
    name.print();
    cout << "'s date of birth is ";
    bDay.printDate();
    cout << endl;
    cout << "and personal ID is " << personID;
}

personalInfoType::personalInfoType(string first, string last,
                        int month, int day, int year, int ID)
         : name(first, last), bDay(month, day, year)
{
    personID = ID;
}
