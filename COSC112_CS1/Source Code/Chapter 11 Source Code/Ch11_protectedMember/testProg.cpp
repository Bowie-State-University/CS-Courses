//Accessing protected members of a base class in the derived 
//class. 
  
#include <iostream>
#include "protectMembClass.h"
#include "protectMembInDerivedCl.h"
 
using namespace std;

int main() 
{
    bClass bObject;                                 //Line 1

    dClass dObject;                                 //Line 2

    bObject.print();                                //Line 3
    cout << endl;                                   //Line 4

    cout << "*** Derived class object ***" << endl; //Line 5

    dObject.setData('&', 2.5, 7);                   //Line 6

    dObject.print();                                //Line 7

    return 0;
}