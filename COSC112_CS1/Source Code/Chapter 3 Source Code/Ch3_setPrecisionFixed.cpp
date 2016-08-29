//Example: setprecision, fixed, showpoint  
 
#include <iostream>                                   //Line 1
#include <iomanip>                                    //Line 2
   
using namespace std;                                  //Line 3

const double PI = 3.14159265;                         //Line 4

int main()                                            //Line 5
{                                                     //Line 6
    double radius = 12.67;                            //Line 7
    double height = 12.00;                            //Line 8

    cout << fixed << showpoint;                       //Line 9

    cout << setprecision(2)
         << "Line 10: setprecision(2)" << endl;       //Line 10
    cout << "Line 11: radius = " << radius << endl;   //Line 11
    cout << "Line 12: height = " << height << endl;   //Line 12
    cout << "Line 13: volume = "
         << PI * radius * radius * height << endl;    //Line 13
    cout << "Line 14: PI = " << PI << endl << endl;   //Line 14

    cout << setprecision(3)
         << "Line 15: setprecision(3)" << endl;       //Line 15
    cout << "Line 16: radius = " << radius << endl;   //Line 16
    cout << "Line 17: height = " << height << endl;   //Line 17
    cout << "Line 18: volume = "
         << PI * radius * radius * height << endl;    //Line 18
    cout << "Line 19: PI = " << PI << endl << endl;   //Line 19

    cout << setprecision(4)
         << "Line 20: setprecision(4)" << endl;       //Line 20
    cout << "Line 21: radius = " << radius << endl;   //Line 21
    cout << "Line 22: height = " << height << endl;   //Line 22
    cout << "Line 23: volume = "
         << PI * radius * radius * height << endl;    //Line 23
    cout << "Line 24: PI = " << PI << endl << endl;   //Line 24

    cout << "Line 25: "
         << setprecision(3) << radius << ", "
         << setprecision(2) << height << ", "
         << setprecision(5) << PI << endl;            //Line 25

    return 0;                                         //Line 26
}                                                     //Line 27



