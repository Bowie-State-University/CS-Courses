//************************************************************
// Author: D. S. Malik
// 
// Program Make Change: Given any amount of change expressed
// in cents, this program computes the number of half-dollars,
// quarters, dimes, nickels, and pennies to be returned,
// returning as many half-dollars as possible, then quarters,
// dimes, nickels, and pennies in that order.
//************************************************************
  
    //header file
#include <iostream>

using namespace std;

    //named constants
const int HALF_DOLLAR = 50;
const int QUARTER  = 25;
const int DIME = 10;
const int NICKEL = 5;

int main()
{
        //declare variable
    int change;

        //Statements: Step 1 – Step 12
    cout << "Enter change in cents: ";                //Step 1
    cin >> change;                                    //Step 2
    cout << endl;

    cout << "The change you entered is " << change
         << endl;                                     //Step 3

    cout << "The number of half-dollars to be returned "
         << "is " << change / HALF_DOLLAR 
         << endl;                                     //Step 4

    change = change % HALF_DOLLAR;                    //Step 5

    cout << "The number of quarters to be returned is "
         << change / QUARTER << endl;                 //Step 6

    change = change % QUARTER;                        //Step 7

    cout << "The number of dimes to be returned is "
         << change / DIME << endl;                    //Step 8

    change = change % DIME;                           //Step 9

    cout << "The number of nickels to be returned is "
         << change / NICKEL << endl;                  //Step 10

    change = change % NICKEL;                         //Step 11

    cout << "The number of pennies to be returned is "
         << change << endl;                           //Step 12

    return 0;
}
