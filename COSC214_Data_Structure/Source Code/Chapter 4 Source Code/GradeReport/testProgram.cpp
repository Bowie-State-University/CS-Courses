
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

#include "studentType.h"

using namespace std;

void getStudentData(ifstream& infile, 
                    vector<studentType> &studentList);

void printGradeReports(ofstream& outfile, 
                       vector<studentType> studentList, 
                       double tuitionRate);

int main()
{
    vector<studentType> studentList;

    double tuitionRate;

    ifstream infile;
    ofstream outfile;

    infile.open("stData.txt");

    if (!infile)
    {
        cout << "Input file does not exist. "
             << "Program terminates."<<endl;	
        return 1;
    }

    outfile.open("stDataOut.txt");

    infile >> tuitionRate;    //get the tuition rate

    getStudentData(infile, studentList);
    printGradeReports(outfile, studentList, tuitionRate);

    return 0;
}

void getStudentData(ifstream& infile, 
                    vector<studentType> &studentList)
{
         //Local variable
    string fName;     //variable to store the first name
    string lName;     //variable to store the last name
    int ID;           //variable to store the student ID
    int noOfCourses;  //variable to store the number of courses
    char isPaid;      //variable to store Y/N, that is, 
                      //is tuition paid
    bool isTuitionPaid; //variable to store true/false
 
    string cName;  //variable to store the course name
    string cNo;    //variable to store the course number
    int credits;   //variable to store the course credit hours
    char grade;    //variable to store the course grade

    vector<courseType> courses; //vector of objects to store course  
                                //information
    courseType cTemp;
    studentType sTemp;

    infile >> fName;                                    //Step 1

    while (infile) 
    {
        infile >> lName >> ID >> isPaid;                //Step 1

        if (isPaid == 'Y')                              //Step 2
            isTuitionPaid = true;
        else 
            isTuitionPaid = false;

        infile >> noOfCourses;                          //Step 3

        courses.clear();

        for (int i = 0; i < noOfCourses; i++)           //Step 4
        {
            infile >> cName >> cNo >> credits >> grade; //Step 4.a
            cTemp.setCourseInfo(cName, cNo, 
                                grade, credits);        //Step 4.b
            courses.push_back(cTemp);                   //Step 4.c
        }

        sTemp.setInfo(fName, lName, ID, isTuitionPaid,
                      courses);                         //Step 5
        studentList.push_back(sTemp);                   //Step 6

        infile >> fName;                                //Step 1
    }//end while
}

void printGradeReports(ofstream& outfile, 
                       vector<studentType> studentList, 
                       double tuitionRate)
{
    for (int count = 0; count < studentList.size(); count++)
        studentList[count].print(outfile, tuitionRate);
}
