#ifndef H_courseType
#define H_courseType

#include <fstream>
#include <string>
using namespace std;

class courseType
{
public:
    void setCourseInfo(string cName, string cNo, 
                       char grade, int credits);
      //Function to set the course information
      //The course information is set according to the
      //incoming parameters.
      //Postcondition: courseName = cName; courseNo = cNo; 
      //     courseGrade = grade; courseCredits = credits; 
 
    void print(ostream& outp, bool isGrade);
      //Function to print the course information
      //If the bool parameter isGrade is true, the grade is 
      //shown, otherwise three stars are printed.

    int getCredits();
      //Function to return the credit hours
      //The value of the private data member courseCredits 
      //is returned.

    void getCourseNumber(string& cNo);
      //Function to return the course number
      //Postcondition:  cNo = courseNo;

    char getGrade();
      //Function to return the grade for the course
      //The value of the private data member courseGrade
      //is returned.

    bool operator==(const courseType&) const;
    bool operator!=(const courseType&) const;
    bool operator<=(const courseType&) const;
    bool operator<(const courseType&) const;
    bool operator>=(const courseType&) const;
    bool operator>(const courseType&) const;

    courseType(string cName = "", string cNo = "", 
               char grade = '*', int credits = 0);
      //Constructor 
      //The object is initialized according to the parameters.
      //Postcondition: courseName = cName; courseNo = cNo; 
      //     courseGrade = grade; courseCredits = credits;

private:
    string courseName;  //variable to store the course name
    string courseNo;    //variable to store the course number
    char courseGrade;   //variable to store the grade
    int courseCredits;  //variable to store the course credits
};

#endif
