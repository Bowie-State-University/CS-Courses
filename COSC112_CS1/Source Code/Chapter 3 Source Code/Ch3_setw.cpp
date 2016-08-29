//Example: This example illustrates how the function
//setw works  
 
#include <iostream>                                    //Line 1
#include <iomanip>                                     //Line 2
 
using namespace std;                                   //Line 3

int main()                                             //Line 4
{                                                      //Line 5
    int miles = 245;                                   //Line 6
    int speed = 55;                                    //Line 7
    double hours = 35.45;                              //Line 8
    double error = 3.7564;                             //Line 9

    cout << fixed << showpoint;                        //Line 10
    cout << "123456789012345678901234567890" << endl;  //Line 11

    cout << setw(5) << miles << endl;                  //Line 12

    cout << setprecision(2);                           //Line 13

    cout << setw(5) << miles << setw(5) << speed
         << setw(6) << hours
         << setw(7) << error << endl << endl;          //Line 14

    cout << setw(5) << speed << setw(5) << miles
         << setw(4) << hours
         << setw(7) << error << endl << endl;          //Line 15

    cout << setw(2) << miles << setw(6) << hours
         << setw(7) << error << endl << endl;          //Line 16

    cout << setw(2) << miles
         << setw(7) << "error"
         << error << endl;                             //Line 17

    return 0;                                          //Line 18
}                                                      //Line 19



