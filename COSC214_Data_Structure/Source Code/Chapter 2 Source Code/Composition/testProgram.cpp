#include <iostream>
#include "personalInfo.h"

using namespace std;
 
int main()
{
	personalInfoType newStudent("William", "Jordan", 8,24,1963,555238911);
	
	newStudent.printPersonalInfo();

	cout << endl;

	return 0;
}
                     