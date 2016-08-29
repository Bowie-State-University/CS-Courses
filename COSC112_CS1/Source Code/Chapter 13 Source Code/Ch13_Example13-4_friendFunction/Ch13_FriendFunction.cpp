//Friend Function Illustration
   
#include <iostream>                                //Line 1
#include <iomanip>                                 //Line 2
#include "rectangleType.h"                         //Line 3

using namespace std;                               //Line 4

int main()                                         //Line 5
{                                                  //Line 6
    rectangleType myYard(25, 18);                  //Line 7

    cout << fixed << showpoint << setprecision(2); //Line 8

    cout << "myYard area: " << myYard.area() 
         << endl;                                  //Line 9

    cout << "Passing object myYard to the friend "
         << "function rectangleFriend." << endl;   //Line 10

    rectangleFriend(myYard);                       //Line 11

    return 0;                                      //Line 12
}                                                  //Line 13
