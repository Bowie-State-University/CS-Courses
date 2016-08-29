  
//Definition of the class rectangleType
//The increment, decrement, arithmetic, and relational
//operator functions are members of the class.

#include <iostream> 

using namespace std; 

class rectangleType
{
      //Overload the stream insertion and extraction operators
    friend ostream& operator<<(ostream&, const rectangleType &);
    friend istream& operator>>(istream&, rectangleType &);

public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;

      //Overload the arithmetic operators
    rectangleType operator+(const rectangleType &) const;
    rectangleType operator-(const rectangleType &) const;
    rectangleType operator*(const rectangleType&) const;
    rectangleType operator/(const rectangleType&) const;

      //Overload the increment and decrement operators
    rectangleType operator++();          //pre-increment
    rectangleType operator++(int);       //post-increment
    rectangleType operator--();          //pre-decrement
    rectangleType operator--(int);       //post-decrement

      //Overload the relational operators
    bool operator==(const rectangleType&) const;
    bool operator!=(const rectangleType&) const;
    bool operator<=(const rectangleType&) const;
    bool operator<(const rectangleType&) const;
    bool operator>=(const rectangleType&) const;
    bool operator>(const rectangleType&) const;

      //Constructors
    rectangleType();
    rectangleType(double l, double w);

private:
    double length;
    double width;
};
