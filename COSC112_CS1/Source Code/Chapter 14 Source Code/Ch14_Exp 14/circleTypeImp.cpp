//Implementation File for the class circleType
 
#include <iostream>
#include "circleType.h"
#include "negativeNumber.h"
 
using namespace std;

void circleType::setRadius(double r)
{
    if (r < 0)
        throw negativeNumber("Radius");

    radius = r;
}

double circleType::getRadius()
{
    return radius;
}

double circleType::area()
{
    return 3.1416 * radius * radius;
}

double circleType::circumference()
{
    return 2 * 3.1416 * radius;
}

circleType::circleType(double r)
{
    setRadius(r);
}
