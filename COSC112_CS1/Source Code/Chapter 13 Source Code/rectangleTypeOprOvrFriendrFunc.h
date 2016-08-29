  
//Definition of the class rectangleType
//The increment, decrement, arithmetic, and relational
//operator functions are nonmembers of the class.

#include <iostream> 

using namespace std;
 
class rectangleType
{
      //Overload the stream insertion and extraction operators
    friend ostream& operator<<(ostream&, const rectangleType&);
    friend istream& operator>>(istream&, rectangleType&);

      //Overload the arithmetic operators
    friend rectangleType operator+(const rectangleType&, 
                                   const rectangleType&);
    friend rectangleType operator-(const rectangleType&, 
                                   const rectangleType&);
    friend rectangleType operator*(const rectangleType&, 
                                   const rectangleType&);
    friend rectangleType operator/(const rectangleType&, 
                                   const rectangleType&);

      //Overload the increment and decrement operators
    friend rectangleType operator++(rectangleType&);      
      //pre-increment
    friend rectangleType operator++(rectangleType&, int);      
      //post-increment
    friend rectangleType operator--(rectangleType&);      
      //pre-decrement
    friend rectangleType operator--(rectangleType&, int);      
      //post-decrement

      //Overload the relational operators
    friend bool operator==(const rectangleType&, 
                           const rectangleType&);
    friend bool operator!=(const rectangleType&, 
                           const rectangleType&);
    friend bool operator<=(const rectangleType&, 
                           const rectangleType&);
    friend bool operator<(const rectangleType&, 
                          const rectangleType&);
    friend bool operator>=(const rectangleType&, 
                           const rectangleType&);
    friend bool operator>(const rectangleType&, 
                          const rectangleType&);

public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;

      //Constructors
    rectangleType();
    rectangleType(double l, double w);

private:
    double length;
    double width;
};

