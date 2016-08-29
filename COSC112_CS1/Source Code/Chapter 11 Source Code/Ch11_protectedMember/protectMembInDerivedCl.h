   
#ifndef H_protectMembInDerivedCl
#define H_protectMembInDerivedCl 

#include "protectMembClass.h" 

class dClass: public bClass
{
public:
    void setData(char, double, int);
    void print() const;

    dClass(char ch = '*', double u = 0.0, int x = 0);

private:
    int dA;
}; 

#endif