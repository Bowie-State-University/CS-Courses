//*******************************************************
// Author: D.S. Malik 
//
// Program -- Checking Account Balance. 
// This program calculates a customer's checking account 
// balance at the end of the month.  
//*******************************************************

#include <iostream> 
#include <fstream>
#include <iomanip>
 
using namespace std;

const double MINIMUM_BALANCE = 1000.00;
const double SERVICE_CHARGE = 25.00;

int main()
{
        //Declare and initialize variables          //Step 1
    int acctNumber;
    double beginningBalance;
    double accountBalance;

    double amountDeposited = 0.0;
    int numberOfDeposits = 0;
  
    double amountWithdrawn = 0.0;
    int numberOfWithdrawals = 0;
  
    double interestPaid = 0.0;
  
    char transactionCode;
    double transactionAmount;

    bool isServiceCharged = false;

    ifstream infile;
    ofstream outfile;

    infile.open("Ch5_money.txt");                   //Step 2

    if (!infile)                                    //Step 3
    {
        cout << "Cannot open the input file." << endl;
        cout << "Program terminates!!!" << endl;
        return 1;
    }

    outfile.open("Ch5_money.out");                  //Step 4

    outfile << fixed << showpoint;                  //Step 5
    outfile << setprecision(2);                     //Step 5

    cout << "Processing data" << endl;

    infile >> acctNumber >> beginningBalance;       //Step 6
  
    accountBalance = beginningBalance;              //Step 7

    infile >> transactionCode >> transactionAmount; //Step 8

    while (infile)                                  //Step 9
    {
        switch (transactionCode)
        {
        case 'D':                                   //Step 9.a
        case 'd': 
            accountBalance = accountBalance 
                             + transactionAmount;
            amountDeposited = amountDeposited 
                             + transactionAmount;
            numberOfDeposits++;
            break;
        case 'I':                                   //Step 9.b
        case 'i': 
            accountBalance = accountBalance 
                            + transactionAmount;
            interestPaid = interestPaid 
                           + transactionAmount;
            break;
        case 'W':                                   //Step 9.c
        case 'w': 
            accountBalance = accountBalance 
                             - transactionAmount;
            amountWithdrawn = amountWithdrawn 
                             + transactionAmount;
            numberOfWithdrawals++;

            if ((accountBalance < MINIMUM_BALANCE) 
                           && (!isServiceCharged))
            {
                accountBalance = accountBalance 
                                 - SERVICE_CHARGE;
                isServiceCharged = true;
            }
            break;

        default: 
            cout << "Invalid transaction code" << endl;
        } //end switch

        infile >>  transactionCode >> transactionAmount;
    }//end while

        //Output Results                            //Step 10
    outfile << "Account Number: " << acctNumber << endl;
    outfile << "Beginning Balance: $" << beginningBalance 
            << endl;
    outfile << "Ending Balance: $" << accountBalance
            << endl << endl;
    outfile << "Interest Paid: $" << interestPaid << endl 
            << endl;
    outfile << "Amount Deposited: $" << amountDeposited 
            << endl;
    outfile << "Number of Deposits: " << numberOfDeposits
            << endl << endl;
    outfile << "Amount Withdrawn: $" << amountWithdrawn 
            << endl;
    outfile << "Number of Withdrawals: " 
            << numberOfWithdrawals << endl << endl;

    if (isServiceCharged)
        outfile << "Service Charge: $" << SERVICE_CHARGE
                << endl;

    return 0;
}
