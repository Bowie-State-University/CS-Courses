#include <iostream>
#include "baseClass.h"
   
using namespace std;

void baseClass::one()
{ 
    cout << "In base class One" << endl;
} 

void  baseClass::two()
{
    cout << "In base Class private two" << endl;
}

void derivedC::three()
{
    baseClass::one();
    cout << "In derived class three" << endl;
    baseClass::two();

    cout << endl;
    cout << endl;
    four();

    x = 10; // public member ofthe base class
    y = 20; // protected member of the base class

    cout << "In derived class after setting x = " << x
         << " y = " << y << endl;
}

void derivedC::four()
{
    one(); // public member ofthe base class
    cout << "In derived class four" << endl;
    two(); // protected member of the base class
}
