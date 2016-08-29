//Implemantation file classExampleImp.cpp
  
#include <iostream> 
#include "classExample.h"
 
using namespace std;

void classExample::setX(int a)
{
	x = a;
}

void classExample::print() const
{
	cout << "x = " << x << endl;
}

