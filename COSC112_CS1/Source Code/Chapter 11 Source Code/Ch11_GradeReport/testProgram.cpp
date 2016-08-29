//************************************************************
// Author: D.S. Malik
// 
// This program reads students' data from a file and outputs
// the grades. If student has not paid the tuition, the
// grades are not shown, and an appropriate message is
// output. The output is stored in a file.
//************************************************************
 
#include <iostream>
#include <fstream>
#include <string> 
#include "studentType.h" 

using namespace std;

const int MAX_NO_OF_STUDENTS = 10;

void getStudentData(ifstream& infile, 
                    studentType studentList[],
                    int numberOfStudents);

void printGradeReports(ofstream& outfile, 
                       studentType studentList[],
                       int numberOfStudents, 
                       double tuitionRate);

int main()
{
    studentType studentList[MAX_NO_OF_STUDENTS];

    int noOfStudents;
    double tuitionRate;

    ifstream infile;
    ofstream outfile;

    infile.open("stData.txt");

    if (!infile)
    {
        cout << "The input file does not exist. "
             << "Program terminates." << endl;	
        return 1;
    }

    outfile.open("sDataOut.txt");

    infile >> noOfStudents; //get the number of students
    infile >> tuitionRate;  //get the tuition rate

    getStudentData(infile, studentList, noOfStudents);
    printGradeReports(outfile, studentList, 
                      noOfStudents, tuitionRate);

    return 0;
}

void getStudentData(ifstream& infile, 
                    studentType studentList[],
                    int numberOfStudents)
{
        //local variables
    string fName;    //variable to store the first name
    string lName;    //variable to store the last name
    int ID;          //variable to store the student ID
    int noOfCourses; //variable to store the number of courses
    char isPaid;     //variable to store Y/N, that is, 
                     //is tuition paid
    bool isTuitionPaid; //variable to store true/false
 
    string cName;  //variable to store the course name
    string cNo;    //variable to store the course number
    int credits;   //variable to store the course credit hours

    int count;      //loop control variable
    int i;          //loop control variable

    courseType courses[6]; //array of objects to store the 
                           //course information
    char cGrades[6];       //array to hold the course grades

    for (count = 0; count < numberOfStudents; count++) 
    {
        infile >> fName >> lName >> ID >> isPaid;  //Step 1

        if (isPaid == 'Y')                         //Step 2
            isTuitionPaid = true;
        else 
            isTuitionPaid = false;

        infile >> noOfCourses;                     //Step 3

        for (i = 0; i < noOfCourses; i++)          //Step 4
        {
            infile >> cName >> cNo >> credits
                   >> cGrades[i];                  //Step 4.a
            courses[i].setCourseInfo(cName, cNo, 
                                     credits);     //Step 4.b
        }

        studentList[count].setInfo(fName, lName, ID, 
                                noOfCourses, 
                                isTuitionPaid, 
                                courses, cGrades); //Step 5
    }//end for
} //end getStudentData

void printGradeReports(ofstream& outfile, 
                       studentType studentList[],
                       int numberOfStudents, 
                       double tuitionRate)
{
    int count;

    for (count = 0; count < numberOfStudents; count++)
        studentList[count].print(outfile, tuitionRate);
} //end printGradeReports
