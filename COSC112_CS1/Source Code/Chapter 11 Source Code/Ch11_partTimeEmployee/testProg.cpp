#include <iostream>
#include <string>
#include "partTimeEmployee.h"
 
using namespace std; 
   
int main()
{
    partTimeEmployee newEmp("John", "Smith", 15.34, 67);

    newEmp.print();

    return 0;
}