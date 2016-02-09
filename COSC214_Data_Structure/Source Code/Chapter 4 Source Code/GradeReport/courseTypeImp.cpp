#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "courseType.h"

using namespace std;

void courseType::setCourseInfo(string cName, string cNo,
                               char grade, int credits)
{
    courseName = cName;
    courseNo = cNo;
    courseGrade = grade;
    courseCredits = credits;
}

void courseType::print(ostream& outp, bool isGrade)
{
    outp << left;                               //Step 1
    outp << setw(8) << courseNo << "   ";       //Step 2
    outp << setw(15) << courseName;             //Step 3		
    outp.unsetf(ios::left);                     //Step 4
    outp << setw(3) << courseCredits << "   ";  //Step 5

    if(isGrade)                                 //Step 6
        outp << setw(4) << courseGrade << endl;
    else
        outp << setw(4) << "***" << endl;
}

courseType::courseType(string cName, string cNo,
                       char grade, int credits)
{
    setCourseInfo(cName, cNo, grade, credits);
}

int courseType::getCredits()
{
    return courseCredits;
}

char courseType::getGrade()
{
    return courseGrade;
}

void courseType::getCourseNumber(string& cNo)
{
    cNo = courseNo;
}

bool courseType::operator==(const courseType& right) const
{
    return (courseNo == right.courseNo);
}


bool courseType::operator!=(const courseType& right) const
{
    return (courseNo != right.courseNo);
}

bool courseType::operator<=(const courseType& right) const
{
    return (courseNo <= right.courseNo);
}

bool courseType::operator<(const courseType& right) const
{
    return (courseNo < right.courseNo);
}

bool courseType::operator>=(const courseType& right) const
{
    return (courseNo >= right.courseNo);
}

bool courseType::operator>(const courseType& right) const
{
    return (courseNo > right.courseNo);
}
