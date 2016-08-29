// User-defined exception class.
 
#include <iostream>
#include <string> 
   
using namespace std;

class negativeNumber 
{ 
public: 
    negativeNumber()
    {
        message = "Number cannot be negative";
    }

    negativeNumber(string str)
    {
        message = str + " cannot be negative";
    } 

    string what()
    {
        return message;
    }

private:
    string message;
};
