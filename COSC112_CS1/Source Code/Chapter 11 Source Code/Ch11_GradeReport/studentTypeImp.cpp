//**********************************************************
// Author: D.S. Malik
// 
// Implementation file studentTypeImp.cpp
// This file contains the definitions of the functions to 
// implement the operations of the class studentType.
//**********************************************************
 
#include <iostream>
#include <iomanip>  
#include <fstream>
#include <string>
#include "personType.h"
#include "courseType.h"
#include "studentType.h"

using namespace std;

void studentType::setInfo(string fName, string lName, int ID, 
                          int nOfCourses, bool isTPaid, 
                          courseType courses[], char cGrades[])
{
    int i;

    setName(fName, lName);           //set the name 
	
    sId = ID;                        //set the student ID
    isTuitionPaid = isTPaid;         //set isTuitionPaid
    numberOfCourses = nOfCourses;    //set the number of courses

       //set the course information
    for (i = 0; i < numberOfCourses; i++) 	
    {
        coursesEnrolled[i] = courses[i]; 
        coursesGrade[i] = cGrades[i];
    }

    sortCourses();   //sort the array coursesEnrolled
} //end setInfo

studentType::studentType()
{
    numberOfCourses = 0;
    sId = 0;					
    isTuitionPaid = false;

    for (int i = 0; i < 6; i++)
        coursesGrade[i] = '*';
} //end default constructor

void studentType::print(ostream& outF, double tuitionRate)
{
    int i;

    outF << "Student Name: " << getFirstName() 
         << " " << getLastName() << endl;           //Step 1

    outF << "Student ID: " << sId << endl;          //Step 2

    outF << "Number of courses enrolled: "
         << numberOfCourses << endl;                //Step 3
    outF << endl;

    outF << left;
    outF << "Course No" << setw(15) << "  Course Name"
         << setw(8) << "Credits"
         << setw(6) << "Grade" << endl;             //Step 4

    outF << right;

    for (i = 0; i < numberOfCourses; i++)           //Step 5
    {
        coursesEnrolled[i].print(outF);             //Step 5a
		
        if (isTuitionPaid)                          //Step 5b
            outF <<setw(4) << coursesGrade[i] << endl;
        else
            outF << setw(4) << "***" << endl;
    }
    outF << endl;

    outF << "Total number of credit hours: "
         << getHoursEnrolled() << endl;             //Step 6

    outF << fixed << showpoint << setprecision(2);  //Step 7

    if (isTuitionPaid)                              //Step 8
        outF << "Mid-Semester GPA: " << getGpa()
             << endl;
    else
    {
        outF << "*** Grades are being held for not paying "
             << "the tuition. ***" << endl;
        outF << "Amount Due: $" << billingAmount(tuitionRate)
             << endl;
    }

    outF << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
         << "-*-*-*-*-" << endl << endl;
} //end print

int studentType::getHoursEnrolled()
{
    int totalCredits = 0;
    int i;

    for (i = 0; i < numberOfCourses; i++)
        totalCredits += coursesEnrolled[i].getCredits();

    return totalCredits;
} //end getHoursEnrolled

double studentType::billingAmount(double tuitionRate)
{
    return tuitionRate * getHoursEnrolled();
} //end billingAmount

double studentType::getGpa()
{
    int i;
    double sum = 0.0;

    for (i = 0; i < numberOfCourses; i++)
    {
        switch (coursesGrade[i])
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
            cout << "Invalid Course Grade." << endl;
        }
    }

    return sum / getHoursEnrolled();
} //end getGpa

void studentType::sortCourses()
{
    int i, j;
    int minIndex;
    courseType temp;    //variable to swap the data
    char tempGrade;     //variable to swap the grades
    string course1;
    string course2;

    for (i = 0; i < numberOfCourses - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < numberOfCourses; j++)
        {
                //get the course numbers
            course1 = 
                 coursesEnrolled[minIndex].getCourseNumber();
            course2 = coursesEnrolled[j].getCourseNumber();

            if (course1 > course2)
                minIndex = j;
        }//end for

        temp = coursesEnrolled[minIndex];
        coursesEnrolled[minIndex] = coursesEnrolled[i];
        coursesEnrolled[i] = temp;

        tempGrade = coursesGrade[minIndex];
        coursesGrade[minIndex] = coursesGrade[i];
        coursesGrade[i] = tempGrade;
    } //end for
} //end sortCourses
