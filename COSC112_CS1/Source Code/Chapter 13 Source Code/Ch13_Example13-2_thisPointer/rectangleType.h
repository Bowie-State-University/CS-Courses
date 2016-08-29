#ifndef rectangleType_H
#define rectangleType_H

class rectangleType
{
public:
    void setDimension(double l, double w);
      //Function to set the length and width of the rectangle.
      //Postcondition: length = l; width = w;

    double getLength() const;
      //Function to return the length of the rectangle.
      //Postcondition: The value of length is returned. 

    double getWidth() const;
      //Function to return the width of the rectangle.
      //Postcondition: The value of width is returned. 

    double area() const;
      //Function to return the area of the rectangle.
      //Postcondition: The area of the rectangle is 
      //               calculated and returned.

    double perimeter() const;
      //Function to return the perimeter of the rectangle.
      //Postcondition: The perimeter of the rectangle is 
      //               calculated and returned.

    void print() const;
      //Function to output the length and width of 
      //the rectangle.

    rectangleType();
      //Default constructor
      //Postcondition: length = 0; width = 0;

    rectangleType(double l, double w);
      //Constructor with parameters
      //Postcondition: length = l; width = w;

    rectangleType doubleDimensions();
      //Postcondition: length = 2 * length;
      //               width = 2 * width;

private:
    double length;
    double width;
};

#endif