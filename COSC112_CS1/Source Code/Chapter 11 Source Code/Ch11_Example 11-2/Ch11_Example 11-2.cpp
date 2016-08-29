   
#include <iostream>                                         //Line 1
#include <iomanip>                                          //Line 2
#include "rectangleType.h"                                  //Line 3
#include "boxType.h"                                        //Line 4

using namespace std;                                        //Line 5
 
int main()                                                  //Line 6
{                                                           //Line 7
    rectangleType yard;                                     //Line 8
    double fenceCostPerFoot;                                //Line 9
    double fertilizerCostPerSquareFoot;                     //Line 10
    double length, width;                                   //Line 11
    double billingAmount;                                   //Line 12

    cout << fixed << showpoint << setprecision(2);          //Line 13

    cout << "Line 14: Enter the length and width of the "
         << "yard (in feet): ";                             //Line 14
    cin >> length >> width;                                 //Line 15
    cout << endl;                                           //Line 16

    yard.setDimension(length, width);                       //Line 17

    cout << "Line 18: Enter the cost of fence "
         << "(per foot): $";                                //Line 18
    cin >> fenceCostPerFoot;                                //Line 19
    cout << endl;                                           //Line 20

    cout << "Line 21: Enter the cost of fertilizer "
         << "(per square foot): $";                         //Line 21
    cin >> fertilizerCostPerSquareFoot;                     //Line 22
    cout << endl;                                           //Line 23

    billingAmount = yard.perimeter() * fenceCostPerFoot
              + yard.area() * fertilizerCostPerSquareFoot;  //Line 24

    cout << "Line 25: Amount due: $" << billingAmount
         << endl;                                           //Line 25

    boxType package;                                        //Line 26
    double height;                                          //Line 27
    double wrappingCostPerSquareFeet;                       //Line 28                     

    cout << "Line 29: Enter the length, width, and height "
         << "of the package (in feet): ";                   //Line 29
    cin >> length >> width >> height;                       //Line 30
    cout << endl;                                           //Line 31

    package.setDimension(length, width, height);            //Line 32

    cout << "Line 33: Enter the cost (25 to 50 cents) of "
         << "wrapping per square foot: ";                   //Line 33
    cin >> wrappingCostPerSquareFeet;                       //Line 34
    cout << endl;                                           //Line 35

    billingAmount = wrappingCostPerSquareFeet 
                    * package.area() / 100;                 //Line 36
    
    if (billingAmount < 1.00)                               //Line 37
        billingAmount = 1.00;                               //Line 38

    cout << "Line 39: Amount due: $" << billingAmount 
         << endl;                                           //Line 39
 
    return 0;                                               //Line 40
}                                                           //Line 41
