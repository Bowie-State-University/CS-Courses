  
#include <iostream>                               //Line 1 
 
using namespace std;                              //Line 2

int main()                                        //Line 3
{                                                 //Line 4
    int fahrenheit;                               //Line 5
    int celsius;                                  //Line 6

    cout << "Enter temperature in Fahrenheit: ";  //Line 7
    cin >> fahrenheit;                            //Line 8
    cout << endl;                                 //Line 9

    cout << "5 / 9 = " << 5 / 9 
         << ";  fahrenheit - 32 = "
         << fahrenheit - 32 << endl;              //Line 9a

    celsius = 5 / 9 * (fahrenheit - 32);          //Line 10

    cout << fahrenheit << " degree F = " 
         << celsius << " degree C. " << endl;     //Line 11

    return 0;                                     //Line 12
}                                                 //Line 13





