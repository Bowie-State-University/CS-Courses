   
#ifndef personalInfo_H
#define personalInfo_H

#include <string>
#include "personType.h"
#include "dateType.h"

using namespace std;

class personalInfo
{
public:
    void setpersonalInfo(string first, string last, int month, 
                         int day, int year, int ID);
      //Function to set the personal information.
      //The member variables are set according to the 
      //parameters.
      //Postcondition: firstName = first; lastName = last;
      //               dMonth = month; dDay = day; 
      //               dYear = year; personID = ID;
 
    void printpersonalInfo () const;
      //Function to print the personal information.
      
    personalInfo(string first = "", string last = "", 
                 int month = 1, int day = 1, int year = 1900, 
                 int ID = 0);
      //Constructor 
      //The member variables are set according to the 
      //parameters.
      //Postcondition: firstName = first; lastName = last;
      //               dMonth = month; dDay = day; 
      //               dYear = year; personID = ID;
      //               If no values are specified, the default 
      //               values are used to initialize the member 
      //               variables.

private:
    personType name;
    dateType bDay;
    int personID;
};

#endif