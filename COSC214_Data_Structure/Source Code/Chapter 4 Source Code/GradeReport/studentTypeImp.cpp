#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

#include "person.h"
#include "courseType.h"
#include "studentType.h"

using namespace std;

void studentType::setInfo(string fName, string lName, int ID, 
                          bool isTPaid, 
                          vector<courseType> courses)
{
    setName(fName, lName);
	
    sId = ID;
    isTuitionPaid = isTPaid;
    numberOfCourses = courses.size();

    coursesEnrolled = courses;

    sort(coursesEnrolled.begin(), coursesEnrolled.end());
}

studentType::studentType()
{
    numberOfCourses = 0;
    sId = 0;					
    isTuitionPaid = false;
}

void studentType::print(ostream& outp, double tuitionRate)
{
    outp << "Student Name: " << personType::getFirstName()
         << " " << personType::getLastName() << endl;   //Step 1

    outp <<"Student ID: " << sId << endl;               //Step 2

    outp << "Number of courses enrolled: "
         << numberOfCourses << endl << endl;            //Step 3

    outp << left;
    outp << "Course No" << setw(15) << "  Course Name"
         << setw(8) << "Credits"
         << setw(6) << "Grade" << endl;                 //Step 4

    outp.unsetf(ios::left);

    for (int i = 0; i < numberOfCourses; i++)
        coursesEnrolled[i].print(outp, isTuitionPaid);  //Step 5
    outp << endl;

    outp << "Total number of credit hours: "
         << getHoursEnrolled() << endl;                 //Step 6

    outp << fixed << showpoint << setprecision(2);      //Step 7

    if (isTuitionPaid)                                  //Step 8
        outp << "Midsemester GPA: " << getGpa() << endl;
    else
    {
        outp << "*** Grades are being held for not paying "
             << "the tuition. ***" << endl;
        outp << "Amount Due: $" << billingAmount(tuitionRate)
             << endl;
    }

    outp << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
         << "-*-*-*-*-" << endl << endl;
}

int studentType::getHoursEnrolled()
{
    int totalCredits = 0;

    for (int i = 0; i < numberOfCourses; i++)
        totalCredits += coursesEnrolled[i].getCredits();
    return totalCredits;
}

double studentType::billingAmount(double tuitionRate)
{
	return tuitionRate * getHoursEnrolled();
}

double studentType::getGpa()
{
    double sum = 0.0;

    for (int i = 0; i < numberOfCourses; i++)
    {
        switch (coursesEnrolled[i].getGrade())
        {
        case 'A': 
            sum += coursesEnrolled[i].getCredits() * 4;
            break;

        case 'B': 
            sum += coursesEnrolled[i].getCredits() * 3;
            break;

        case 'C': 
            sum += coursesEnrolled[i].getCredits() * 2;
            break;

        case 'D': 
            sum += coursesEnrolled[i].getCredits() * 1;
            break;

        case 'F': 
            break;

        default: 
            cout << "Invalid Course Grade" << endl;
        }
    }

    if (getHoursEnrolled() != 0)
        return sum / getHoursEnrolled();
    else
        return 0;
}
