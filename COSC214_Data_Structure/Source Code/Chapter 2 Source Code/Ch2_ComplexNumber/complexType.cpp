
//Implementation file complexType.cpp
 
#include <iostream>
#include "complexType.h"
  
using namespace std;

ostream& operator<<(ostream& osObject, 
                    const complexType& complex)

{
    osObject << "(";                    //Step a
    osObject << complex.realPart;       //Step b
    osObject << ", ";                   //Step c
    osObject << complex.imaginaryPart;  //Step d
    osObject << ")";                    //Step e

    return osObject;    //return the ostream object
}

istream& operator>>(istream& isObject, complexType& complex)
{
    char ch;

    isObject >> ch;                     //Step a
    isObject >> complex.realPart;       //Step b
    isObject >> ch;                     //Step c
    isObject >> complex.imaginaryPart;  //Step d
    isObject >> ch;                     //Step e

    return isObject;    //return the istream object
}

bool complexType::operator==
                    (const complexType& otherComplex) const
{
    return (realPart == otherComplex.realPart && 
            imaginaryPart == otherComplex.imaginaryPart);
}


    //Constructor 
complexType::complexType(double real, double imag)
{
    realPart = real;
    imaginaryPart = imag;
}

    //Function to set the complex number after the object 
    //has been declared.
void complexType::setComplex(const double& real, 
                             const double& imag)
{
    realPart = real;
    imaginaryPart = imag;
}

void complexType::getComplex(double& real, double& imag) const
{
    real = realPart;
    imag = imaginaryPart;
}

	//overload the operator +
complexType complexType::operator+
 			   (const complexType& otherComplex) const
{
    complexType temp;

    temp.realPart = realPart + otherComplex.realPart;
    temp.imaginaryPart = imaginaryPart 
                         + otherComplex.imaginaryPart;

	return temp;
}

    //overload the operator *
complexType complexType::operator*
 				(const complexType& otherComplex) const
{
    complexType temp;

    temp.realPart = (realPart * otherComplex.realPart) -
                 (imaginaryPart * otherComplex.imaginaryPart);
    temp.imaginaryPart = (realPart * otherComplex.imaginaryPart)
                   + (imaginaryPart * otherComplex.realPart);
    return temp;
}

