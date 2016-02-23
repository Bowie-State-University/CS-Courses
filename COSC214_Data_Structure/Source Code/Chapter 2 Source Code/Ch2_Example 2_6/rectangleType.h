#ifndef H_rectangleType
#define H_rectangleType
 
#include <iostream>
  
using namespace std;

class rectangleType
{
      //Overload the stream insertion and extraction operators
    friend ostream& operator << (ostream&, const rectangleType &);
    friend istream& operator >> (istream&, rectangleType &);

public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;

    rectangleType operator+(const rectangleType&) const;
      //Overload the operator +
    rectangleType operator*(const rectangleType&) const;
      //Overload the operator *

    bool operator==(const rectangleType&) const;
      //Overload the operator ==
    bool operator!=(const rectangleType&) const;
      //Overload the operator !=

    rectangleType();
    rectangleType(double l, double w);

private:
    double length;
    double width;
};


#endif
