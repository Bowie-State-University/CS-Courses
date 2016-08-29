//Chapter 12: Example 12-3
  
#include <iostream>                                       //Line 1
#include <iomanip>                                        //Line 2
 
using namespace std;                                      //Line 3

const double PI = 3.1416;                                 //Line 4

int main()                                                //Line 5
{                                                         //Line 6
    double radius;                                        //Line 7
    double *radiusPtr;                                    //Line 8

    cout << fixed << showpoint << setprecision(2);        //Line 9

    radius = 2.5;                                         //Line 10
    radiusPtr = &radius;                                  //Line 11

    cout << "Line 12: Radius = " << radius 
         << ", area = " << PI * radius * radius << endl;  //Line 12
         
    cout << "Line 13: Radius = " << *radiusPtr 
         << ", area = " 
         << PI * (*radiusPtr) * (*radiusPtr) << endl;     //Line 13

    cout << "Line 14: Enter the radius: ";                //Line 14
    cin >> *radiusPtr;                                    //Line 15
    cout << endl;                                         //Line 16

    cout << "Line 17: Radius = " << radius << ", area = " 
         << PI * radius * radius << endl;                 //Line 17
    cout << "Line 18: Radius = " << *radiusPtr 
         << ", area = " 
         << PI * (*radiusPtr) * (*radiusPtr) << endl 
         << endl;                                         //Line 18


    cout << "Line 19: Address of radiusPtr: "
         << &radiusPtr << endl;                           //Line 19
    cout << "Line 20: Value stored in radiusPtr: " 
         << radiusPtr << endl;                            //Line 20
    cout << "Line 21: Address of radius: " 
         << &radius << endl;                              //Line 21
    cout << "Line 22: Value stored in radius: " 
         << radius << endl;                               //Line 22

    return 0;                                             //Line 23
}                                                         //Line 24