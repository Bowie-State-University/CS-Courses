#ifndef H_derivedClassVirtual
#define H_derivedClassVirtual
 
#include "baseClass.h"

class derivedClass: public baseClass
{
public:
    void print();
    derivedClass(int u = 0, int v = 0);

private:
    int a;
};
 
#endif