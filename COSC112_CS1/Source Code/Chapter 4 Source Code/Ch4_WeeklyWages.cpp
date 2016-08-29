//Program: Weekly wages
 
#include <iostream>                                      //Line 1
#include <iomanip>                                       //Line 2
 
using namespace std;                                     //Line 3
  
int main ()                                              //Line 4
{                                                        //Line 5
    double wages, rate, hours;                           //Line 6

    cout << fixed << showpoint << setprecision(2);       //Line 7
    cout << "Line 8: Enter working hours and rate: ";    //Line 8
    cin >> hours >> rate;                                //Line 9

    if (hours > 40.0)                                    //Line 10
        wages = 40.0 * rate + 
                1.5 * rate * (hours - 40.0);             //Line 11
    else                                                 //Line 12
        wages = hours * rate;                            //Line 13

    cout << endl;                                        //Line 14
    cout << "Line 15: The wages are $" << wages << endl; //Line 15

    return 0;                                            //Line 16
}                                                        //Line 17
