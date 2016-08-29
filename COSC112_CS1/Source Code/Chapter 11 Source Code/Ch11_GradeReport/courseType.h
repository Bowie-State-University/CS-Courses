//************************************************************
// Author: D.S. Malik
//   
// class courseType
// This class specifies the members to implement a course's
// information.
//************************************************************
 
#ifndef H_courseType
#define H_courseType

#include <fstream>
#include <string>

using namespace std;

class courseType
{
public:
    void setCourseInfo(string cName, string cNo, int credits);
      //Function to set the course information.
      //The course information is set according to the 
      //parameters.
      //Postcondition: courseName = cName; courseNo = cNo; 
      //               courseCredits = credits; 

    void print(ostream& outF);
      //Function to print the course information.
      //This function sends the course information to the
      //output device specified by the parameter outF. If the 
      //actual parameter to this function is the object cout, 
      //then the output is shown on the standard output device. 
      //If the actual parameter is an ofstream variable, say 
      //outFile, then the output goes to the file specified by 
      //outFile.

    int getCredits();
      //Function to return the credit hours.
      //Postcondition: The value of courseCredits is returned.

    string getCourseNumber();
      //Function to return the course number.
      //Postcondition: The value of courseNo is returned.

    string getCourseName();
      //Function to return the course name.
      //Postcondition: The value of courseName is returned.

   courseType(string cName = "", string cNo = "",
              int credits = 0);
      //Constructor 
      //The object is initialized according to the parameters.
      //Postcondition: courseName = cName; courseNo = cNo; 
      //               courseCredits = credits;

private:
    string courseName;  //variable to store the course name
    string courseNo;    //variable to store the course number
    int courseCredits;  //variable to store the credit hours
};

#endif
