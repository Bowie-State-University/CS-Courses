#include <iostream>
#include "personalInfo.h"
  
using namespace std; 
  
int main()
{
    personalInfo newStudent("William", "Jordan", 8, 24, 1963, 
                             555238911);
	
    newStudent.printpersonalInfo();

    cout << endl;

    return 0;
}
                     