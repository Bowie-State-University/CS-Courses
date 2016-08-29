//**********************************************************
// Author: D.S. Malik
//  
// Implementation file courseTypeImp.cpp
// This file contains the definitions of the functions to 
// implement the operations of the class courseType.
//**********************************************************
  
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "courseType.h"

using namespace std;

void courseType::setCourseInfo(string cName, string cNo,
                               int credits)
{
    courseName = cName;
    courseNo = cNo;
    courseCredits = credits;
} //end setCourseInfo

void courseType::print(ostream& outF)
{
    outF << left;                               //Step 1
    outF << setw(8) << courseNo << "   ";       //Step 2
    outF << setw(15) << courseName;             //Step 3		
    outF << right;                              //Step 4
    outF << setw(3) << courseCredits << "   ";  //Step 5
} //end print

courseType::courseType(string cName, string cNo, int credits)
{
    courseName = cName;
    courseNo =  cNo;
    courseCredits = credits;
} //end default constructor

int courseType::getCredits()
{
    return courseCredits;
} //end getCredits

string courseType::getCourseNumber()
{
    return courseNo;
} //end getCourseNumber

string courseType::getCourseName()
{
    return courseName;
} //end getCourseName