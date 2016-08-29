#ifndef H_rectangleType
#define H_rectangleType
  
class rectangleType
{ 
    friend rectangleType operator+(const rectangleType& , 
                                   const rectangleType&);
        //Overload the operator +
    friend rectangleType operator*(const rectangleType& , 
                                   const rectangleType&);
        //Overload the operator *

    friend bool operator==(const rectangleType& , 
                           const rectangleType&);
        //Overload the operator ==
    friend bool operator!=(const rectangleType& , 
                           const rectangleType&);
        //Overload the operator !=
public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;

    rectangleType();
    rectangleType(double l, double w);

private:
    double length;
    double width;
};


#endif
