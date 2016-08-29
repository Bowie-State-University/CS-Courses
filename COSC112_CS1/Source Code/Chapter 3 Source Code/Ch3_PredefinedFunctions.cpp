//How to use predefined functions.
//This program uses the math functions pow and sqrt to determine
//and output the volume of a sphere, the distance between two 
//points, respectively, and the string function length to find 
//the number of characters in a string.
//If the radius of the sphere is r, then the volume of the sphere
//is (4/3)*PI*r^3. If (x1,y1) and (x2,y2) are the coordinates of two 
//points in the XY-plane, then the distance between these points is 
//sqrt((x2-x1)^2 + (y2-y1)^2).

#include <iostream> 
#include <cmath>
#include <string>
    
using namespace std;

const double PI = 3.1416;

int main()  
{
    double sphereRadius;                                   //Line 1
    double sphereVolume;                                   //Line 2
    double point1X, point1Y;                               //Line 3
    double point2X, point2Y;                               //Line 4
    double distance;                                       //Line 5

    string str;                                            //Line 6

    cout << "Line 7: Enter the radius of the sphere: ";    //Line 7
    cin >> sphereRadius;                                   //Line 8 
    cout << endl;                                          //Line 9

    sphereVolume = (4.0 / 3) * PI * pow(sphereRadius, 3);  //Line 10

    cout << "Line 11: The volume of the sphere is: " 
         << sphereVolume << endl << endl;                  //Line 11
   
    cout << "Line 12: Enter the coordinates of two "
         << "points in the X-Y plane: ";                   //Line 12
    cin >> point1X >> point1Y >> point2X >> point2Y;       //Line 13
    cout << endl;                                          //Line 14

    distance = sqrt(pow(point2X - point1X, 2)
                    + pow(point2Y - point1Y, 2));          //Line 15

    cout << "Line 16: The distance between the points "
         << "(" << point1X << ", " << point1Y << ") and "
         << "(" << point2X << ", " << point2Y << ") is: "
         << distance << endl << endl;                      //Line 16

    str = "Programming with C++";                          //Line 17

    cout << "Line 18: The number of characters, " 
         << "including blanks, in \"" << str << "\" is: "
         << str.length() << endl;                          //Line 18

    return 0;                                              //Line 19
}
