#include <iostream>
#include "employeeType.h"

using namespace std;
    
void employeeType::setId(long id)
{
    personId = id;
}
  
long employeeType::getId() const
{
    return personId;
}

employeeType::employeeType(string first, string last, long id)
             : personType(first, last) 
{
      personId = id;
} 
