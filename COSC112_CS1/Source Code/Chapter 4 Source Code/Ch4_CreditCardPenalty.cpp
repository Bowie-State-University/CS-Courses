 
//Program to compute and output the penalty on an unpaid
//credit card balance. The program assumes that the interest
//rate on the unpaid balance is 1.5% per month 

#include <iostream>                                        //Line 1
#include <iomanip>                                         //Line 2

using namespace std;                                       //Line 3

const double INTEREST_RATE = 0.015;                        //Line 4
 
int main ()                                                //Line 5
{                                                          //Line 6
    double creditCardBalance;                              //Line 7
    double payment;                                        //Line 8
    double balance;                                        //Line 9
    double penalty = 0.0;                                  //Line 10

    cout << fixed << showpoint << setprecision(2);         //Line 11

    cout << "Line 12: Enter credit card balance: ";        //Line 12
    cin >> creditCardBalance;                              //Line 13
    cout << endl;                                          //Line 14

    cout << "Line 15: Enter the payment: ";                //Line 15
    cin >> payment;                                        //Line 16
    cout << endl;                                          //Line 17

    balance = creditCardBalance - payment;                 //Line 18

    if (balance > 0)                                       //Line 19
        penalty = balance * INTEREST_RATE;                 //Line 20

    cout << "Line 21: The balance is: $" << balance
         << endl;                                          //Line 21
    cout << "Line 22: The penalty to be added to your " 
         << "next month bill is: $" << penalty << endl;    //Line 22

    return 0;                                              //Line 23
}                                                          //Line 24
