 
#include <iostream>
#include "protectMembClass.h"
  
using namespace std;
 
void bClass::setData(double u)
{
    bX = u; 
}
void bClass::setData(char ch, double u)
{
    bCh = ch;
    bX = u;
}

void bClass::print() const
{
    cout << "Base class: bCh = " << bCh << ", bX = " << bX 
         << endl;
}

bClass::bClass(char ch, double u)
{
    bCh = ch;
    bX = u;
}

