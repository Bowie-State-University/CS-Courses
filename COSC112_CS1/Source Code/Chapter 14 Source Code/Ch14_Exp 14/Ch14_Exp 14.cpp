//The user program that uses the class circleType
  
#include <iostream> 
#include <iomanip>
#include "circleType.h"
#include "negativeNumber.h"

using namespace std;

int main()                                                 //Line 1
{                                                          //Line 2
    circleType circle;                                     //Line 3

    double radius;                                         //Line 4

    cout << fixed << showpoint << setprecision(2);         //Line 5

    try                                                    //Line 6
    {                                                      //Line 7
        cout << "Line 8: Enter the radius of a circle: ";  //Line 8
        cin >> radius;                                     //Line 9
        cout << endl;                                      //Line 10

        circle.setRadius(radius);                          //Line 11

        cout << "Line 12: circle - "
             << "radius: " << circle.getRadius()
             << ", area: " << circle.area()
             << ", circumference: " 
             << circle.circumference() << endl;            //Line 12
    }                                                      //Line 13
    catch (negativeNumber obj)                             //Line 14
    {                                                      //Line 15
        cout << "Line 16: " << obj.what() << endl;         //Line 16
    }                                                      //Line 17

    return 0;                                              //Line 18
}//end main                                                //Line 19
