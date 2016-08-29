//This program illustrates how to use the operators new and delete. 
  
#include <iostream>                                       //Line 1
#include <iomanip>                                        //Line 2
 
using namespace std;                                      //Line 3

const double PI = 3.1416;                                 //Line 4

int main()                                                //Line 5
{                                                         //Line 6
    double *radiusPtr;                                    //Line 7

    cout << fixed << showpoint << setprecision(2);        //Line 8

    radiusPtr = new double;                               //Line 9

    cout << "Line 10: Enter the radius: ";                //Line 10
    cin >> *radiusPtr;                                    //Line 11
    cout << endl;                                         //Line 12

    cout << "Line 13: Radius = " << *radiusPtr
         << ", area = " << PI * (*radiusPtr) * (*radiusPtr) 
         << endl << endl;                                 //Line 13

    cout << "Line 14: Address of radiusPtr: "
         << &radiusPtr << endl;                           //Line 14
    cout << "Line 15: Value stored in radiusPtr: " 
         << radiusPtr << endl;                            //Line 15
    cout << "Line 16: Value stored in the memory "
         << "location to which \n         radiusPtr " 
         << "is pointing: " << *radiusPtr << endl;        //Line 16

    delete radiusPtr;                                     //Line 17

    cout << "Line 18: After using the delete operator, "
         << "the value stored in the location\n         "
         << "to which radiusPtr is pointing: "
         << *radiusPtr << endl;                           //Line 18

    double *lengthPtr = new double;                       //Line 19

    radiusPtr = new double;                               //Line 20

    *radiusPtr = 5.38;                                    //Line 21

    cout << "Line 22: Address of radiusPtr: "
         << &radiusPtr << endl;                           //Line 22
    cout << "Line 23: Value stored in radiusPtr: " 
         << radiusPtr << endl;                            //Line 23
    cout << "Line 24: Value stored in the memory "
         << "location to which radiusPtr is pointing: " 
         << *radiusPtr << endl;                           //Line 24
    cout << "Line 25: Value stored in lengthPtr: " 
         << lengthPtr << endl;                            //Line 25

    return 0;                                             //Line 26
}                                                         //Line 27