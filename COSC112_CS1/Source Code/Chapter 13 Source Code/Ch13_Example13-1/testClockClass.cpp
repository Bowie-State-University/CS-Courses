 
#include <iostream>
#include "clockType.h"
 
using namespace std; 

int main()                                           //Line 1
{                                                    //Line 2
    clockType myClock(8, 23, 50);                    //Line 3
    clockType yourClock(8, 23, 50);                  //Line 4
    clockType tempClock(9, 16, 25);                  //Line 5

    cout << "Line 6: myClock: ";                     //Line 6
    myClock.printTime();                             //Line 7
    cout << endl;                                    //Line 8

    cout << "Line 9: yourClock: ";                   //Line 9
    yourClock.printTime();                           //Line 10
    cout << endl;                                    //Line 11

    cout << "Line 12: tempClock: ";                  //Line 12
    tempClock.printTime();                           //Line 13
    cout << endl;                                    //Line 14

        //Compare myClock and yourClock
    if (myClock == yourClock)                        //Line 15
        cout << "Line 16: The time of myClock and "
             << "yourClock are equal." << endl;      //Line 16
    else                                             //Line 17
        cout << "Line 18: The time of myClock and "
             << "yourClock are not equal." << endl;  //Line 18

        //Compare myClock and tempClock
    if (myClock == tempClock)                        //Line 19
        cout << "Line 20: The time of myClock and "
             << "tempClock are equal." << endl;      //Line 20
    else                                             //Line 21
        cout << "Line 22: The time of myClock and "
             << "tempClock are not equal." << endl;  //Line 22

    return 0;                                        //Line 23
}//end main                                          //Line 24



