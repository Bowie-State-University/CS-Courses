
#include <iostream>

#include "derivedClass.h"

using namespace std;

void derivedClass::print() 
{
    cout << "In derivedClass ***: ";
    baseClass::print();
    cout << "In derivedClass a = " << a << endl;
}
 
derivedClass::derivedClass(int u, int v)
               : baseClass(u)
{
    a = v;
}