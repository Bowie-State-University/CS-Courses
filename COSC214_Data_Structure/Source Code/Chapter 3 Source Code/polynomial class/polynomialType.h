
#ifndef H_polynomial
#define	H_polynomial

//***********************************************************
// Author: D.S. Malik
//
// This class specifies the members to implement the basic
// polynomial operations.
//***********************************************************

#include <iostream>
#include "arrayListType.h"

using namespace std;

class polynomialType: public arrayListType<double>
{
    friend ostream& operator<<(ostream&, const polynomialType&);
      //Overloads the stream insertion operator
    friend istream& operator>>(istream&, polynomialType&);
      //Overloads the stream extraction operator
public:
    polynomialType operator+(const polynomialType&);
      //Overloads the operator +
    polynomialType operator-(const polynomialType&);
      //Overloads the operator -
    polynomialType operator*(const polynomialType&);
      //Overloads the operator *

    double operator() (double x);
      //Overloads the operator () to evaluate the polynomial at
      //a given point
      //Postcondition: The value of the polynomial at x is
      //    calculated and returned

    polynomialType(int size = 100);
      //constructor

    int min(int x, int y) const;
      //Function to return the smaller of x and y
    int max(int x, int y) const;
      //Function to return the larger of x and y
};
 

#endif

