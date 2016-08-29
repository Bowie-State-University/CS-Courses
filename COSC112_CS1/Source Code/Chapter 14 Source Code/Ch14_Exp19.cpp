// Processing exceptions, thrown by a function, in the 
// immediate calling environment.
  
#include <iostream>
#include "myException.h"
 
using namespace std;
 
void functionA(); 
void functionB(); 
void functionC() throw (myException); 

int main()
{
    try
    {
        functionA();
    }
    catch (myException e)
    {
        cout << e.what() << " Caught in main." << endl;
    }

    return 0;
}

void functionA() 
{
    functionB();
}

void functionB()
{	
    try
    {
        functionC();
    }
    catch (myException me)
    {
        cout << me.what() << " Caught in functionB." << endl;
    }
}

void functionC() throw (myException)
{	
    throw myException("Exception generated in function C.");
}