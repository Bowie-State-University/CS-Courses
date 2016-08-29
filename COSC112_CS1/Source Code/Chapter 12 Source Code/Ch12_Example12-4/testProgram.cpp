//Test Program for classExample
    
#include <iostream>
#include "classExample.h"
  
using namespace std;
 
int main()
{
	classExample *cExpPtr;		//Line 1	
	classExample cExpObject;	//Line 2

	cExpPtr = &cExpObject;		//Line 3

	cExpPtr->setX(5);			//Line 4
	cExpPtr->print();			//Line 5

	return 0;
}