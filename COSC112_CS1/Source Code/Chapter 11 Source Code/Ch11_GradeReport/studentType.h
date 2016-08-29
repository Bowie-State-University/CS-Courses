//************************************************************
// Author: D.S. Malik
//  
// class studentType
// This class specifies the members to implement a student's 
// information.
//************************************************************
  
#ifndef H_studentType
#define H_studentType

#include <fstream>
#include <string>
#include "personType.h"
#include "courseType.h"

using namespace std;

class studentType: public personType
{
public:
    void setInfo(string fname, string lName, int ID,
                 int nOfCourses, bool isTPaid, 
                 courseType courses[], char courseGrades[]);
      //Function to set the student's information.
      //Postcondition: The member variables are set 
      //               according to the parameters.

   void print(ostream& outF, double tuitionRate);
     //Function to print the student's grade report.
     //If the member variable isTuitionPaid is true, the grades
     //are shown, otherwise three stars are printed. If the 
     //actual parameter corresponding to outF is the object 
     //cout, then the output is shown on the sandard output 
     //device. If the actual parameter corresponding to outF 
     //is an ofstream object, say outFile, then the output 
     //goes to the file specified by outFIle.

    studentType();
      //Default constructor
      //The member variables are initialized.

    int getHoursEnrolled();
      //Function to return the credit hours a student is 
      //enrolled in.
      //Postcondition: The number of credit hours are
      //               and returned.

    double getGpa();
      //Function to return the grade point average.
      //Postcondition: The gpa is calculated and returned.

    double billingAmount(double tuitionRate);
      //Function to return the tuition fees.
      //Postcondition: The billing amount is calculated 
      //and returned.

private:
    void sortCourses();  
      //Function to sort the courses.
      //Postcondition: The array coursesEnrolled is sorted.
      //               For each course, its grade is stored in
      //               the array coursesGrade. Therefore, when
      //               the array coursesEnrolled is sorted, the
      //               corresponding entries in the array
      //               coursesGrade are adjusted.

    int sId;             //variable to store the student ID
    int numberOfCourses; //variable to store the number 
                         //of courses
    bool isTuitionPaid;  //variable to indicate whether the 
                         //tuition is paid
    courseType coursesEnrolled[6]; //array to store the courses
    char coursesGrade[6];   //array to store the course grades
};


#endif



