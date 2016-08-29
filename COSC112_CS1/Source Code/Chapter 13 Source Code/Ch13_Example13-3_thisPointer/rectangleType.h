#ifndef rectangleType_H
#define rectangleType_H
 
class rectangleType
{
public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;

    rectangleType& setLength(double l);
      //Function to set the length.
      //Postcondition: length = l
      //     After setting the length, a reference to the object,
      //     that is, the address of the object, is returned.
    rectangleType& setWidth(double w);
      //Function to set the width.
      //Postcondition: width = w
      //     After setting the width, a reference to the object,
      //     that is, the address of the object, is returned.

    rectangleType(double l = 0.0, double w = 0.0);

private:
    double length;
    double width;
};

#endif