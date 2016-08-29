//Example: left justification 

#include <iostream>                                     //Line 1
#include <string>                                       //Line 2
#include <iomanip>                                      //Line 3
   
using namespace std;                                    //Line 4

int main()                                              //Line 5
{                                                       //Line 6
    string name = "Jessica";                            //Line 7
    double gpa = 3.75;                                  //Line 8
    int scholarship = 7850;                             //Line 9

    cout << "123456789012345678901234567890" << endl;   //Line 10
    cout << fixed << showpoint << setprecision(2);      //Line 11

    cout << left;                                       //Line 12

    cout << setw(10) << name << setw(7) << gpa
         << setw(8) << scholarship << endl;             //Line 13

    cout << setfill('*');                               //Line 14
    cout << setw(10) << name << setw(7) << gpa
         << setw(8) << scholarship << endl;             //Line 15

    cout << setw(10) << name << setfill('#') 
         << setw(7) << gpa
         << setw(8) << scholarship << endl;             //Line 16

    cout << setw(10) << setfill('@') << name
         << setw(7) << setfill('#') << gpa
         << setw(8) << setfill('^') << scholarship
         << endl;                                       //Line 17

    cout << right;                                      //Line 18
    cout << setfill(' ');                               //Line 19
    cout << setw(10) << name << setw(7) << gpa
         << setw(8) << scholarship << endl;             //Line 20

    return 0;                                           //Line 21
}                                                       //Line 22