// User-defined myException class.

#include <string>
     
using namespace std; 

class myException
{
public:
    myException()
    {
        message = "Something is wrong!";
    }
	
    myException(string str)
    { 
        message = str; 
    }

    string what()
    {
        return message;
    }

private:
    string message;
};