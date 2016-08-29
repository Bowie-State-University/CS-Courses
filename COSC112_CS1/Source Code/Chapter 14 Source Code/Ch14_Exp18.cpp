// Processing exceptions thrown by a function in the calling
// environment.

#include <iostream>
#include "myException.h"
 
using namespace std; 
  
void functionA() throw (myException); 
void functionB() throw (myException); 
void functionC() throw (myException); 

int main()
{
    try
    {
        functionA();
    }
    catch (myException me)
    {
        cout << me.what() << " Caught in main." << endl;
    }

    return 0;
}

void functionA() throw (myException)
{
    functionB();
}

void functionB()  throw (myException)
{
    functionC();
}

void functionC() throw (myException)
{	
    throw myException("Exception generated in function C.");
}
