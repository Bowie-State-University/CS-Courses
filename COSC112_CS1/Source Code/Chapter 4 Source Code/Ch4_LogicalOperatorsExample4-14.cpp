
//Chapter 4: Example 4-14 
//Program to determine if additional charges are applicable on
//a suitcase accompanying a passenger on an economy flight.

#include <iostream>                                        //Line 1
#include <iomanip>                                         //Line 2

using namespace std;                                       //Line 3
  
int main()                                                 //Line 4
{                                                          //Line 5
    double suitcaseDimension;                              //Line 6
    double suitcaseWeight;                                 //Line 7
    double additionalCharges = 0.0;                        //Line 8
    
    cout << fixed << showpoint << setprecision(2);         //Line 9
    cout << "Line 10: Enter suitcase dimensions "          //Line 10
         << "(length + width + depth) in inches: ";        //Line 11
    cin >> suitcaseDimension;                              //Line 12
    cout << endl;                                          //Line 13

    cout << "Line 14: Enter suitcase weight in pounds: ";  //Line 14
    cin >> suitcaseWeight;                                 //Line 15
    cout << endl;                                          //Line 16

    if (suitcaseDimension > 108 || suitcaseWeight > 50)    //Line 17
        additionalCharges = 50.00;                         //Line 18

    cout <<"Line 19: Additional suitcase charges: $"       //Line 19 
         << additionalCharges << endl;                     //Line 20
    
    return 0;                                              //Line 21
}                                                          //Line 22