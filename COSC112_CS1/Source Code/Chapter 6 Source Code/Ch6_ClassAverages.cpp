  
//**********************************************************
// Author: D.S. Malik
//
// Program: Comparison of Class Averages
// This program computes and compares the class averages of
// two groups of students.
//**********************************************************
 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std; 

    //function prototypes
void calculateAverage(ifstream& inp, double& courseAvg);
void printResult(ofstream& outp, string courseId,
                 int groupNo, double avg);

int main() 
{
        //Step 1
    string courseId1;       //course ID for group 1 
    string courseId2;       //course ID for group 2 
    int numberOfCourses;
    double avg1;          //average for a course in group 1  
    double avg2;          //average for a course in group 2  
    double avgGroup1;     //average group 1
    double avgGroup2;     //average group 2
    ifstream group1;      //input stream variable for group 1
    ifstream group2;      //input stream variable for group 2
    ofstream outfile;     //output stream variable 
   
    group1.open("group1.txt");                   //Step 2
    group2.open("group2.txt");                   //Step 2

    if (!group1 || !group2)                      //Step 3
    {
        cout << "Unable to open files." << endl;
        cout << "Program terminates." << endl;
        return 1;
    }

    outfile.open("student.out");                 //Step 4
    outfile << fixed << showpoint;               //Step 5
    outfile << setprecision(2);                  //Step 5

    avgGroup1 = 0.0;                             //Step 6
    avgGroup2 = 0.0;                             //Step 7

    numberOfCourses = 0;                         //Step 8

    outfile << "Course No   Group No    " 
            << "Course Average" << endl;         //Step 9 


    group1 >> courseId1;                         //Step 10
    group2 >> courseId2;                         //Step 11
    while  (group1 && group2)                    //Step 12
    {
        if (courseId1 != courseId2)              //Step 12a
        {
            cout << "Data error: Course IDs " 
                 << "do not match." << endl;
            cout << "Program terminates." << endl;
            return 1;
        }
        else                                     //Step 12b
        {
            calculateAverage(group1, avg1);      //Step 12b.i
            calculateAverage(group2, avg2);      //Step 12b.ii
            printResult(outfile, courseId1,
                        1, avg1);                //Step 12b.iii
            printResult(outfile, courseId2, 
                        2, avg2);                //Step 12b.iv
            avgGroup1 = avgGroup1 + avg1;        //Step 12b.v
            avgGroup2 = avgGroup2 + avg2;        //Step 12b.vi
            outfile << endl;
            numberOfCourses++;                   //Step 12b.vii
        }

        group1 >> courseId1;                     //Step 12c
        group2 >> courseId2;                     //Step 12d
    } // end while 

    if (group1 && !group2)                       //Step 13a
        cout << "Ran out of data for group 2 " 
             << "before group 1." << endl;
    else if (!group1 && group2)                  //Step 13b
        cout << "Ran out of data for group 1 " 
             << "before group 2." << endl;
    else                                         //Step 13c
    {     
        outfile << "Avg for group 1: " 
                << avgGroup1 / numberOfCourses
                << endl;
        outfile << "Avg for group 2: " 
                << avgGroup2 / numberOfCourses
                << endl;
    }

    group1.close();                              //Step 14
    group2.close();                              //Step 14
    outfile.close();                             //Step 14

    return 0;
}

void calculateAverage(ifstream& inp, double& courseAvg)
{
    double totalScore = 0.0;
    int numberOfStudents = 0;
    int score;
  
    inp >> score;
    while (score != -999)
    {
        totalScore = totalScore + score;
        numberOfStudents++;
        inp >> score;
    }//end while

    courseAvg = totalScore / numberOfStudents;
}//end calculate Average

void printResult(ofstream& outp, string courseID, int groupNo,
                 double avg)
{
    if (groupNo == 1)
       outp << "  " << courseID << "   ";
    else
       outp << "        ";

    outp << setw(8) << groupNo << setw(17) << avg << endl;
}//end printResult


