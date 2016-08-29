//***********************************************************
// Author: D. S. Malik 
//
// Program: Cable Company Billing
// This program calculates and prints a customer’s bill for
// a local cable company. The program processes two types of
// customers: residential and business.
//***********************************************************
 
#include <iostream> 
#include <iomanip>

using namespace std;

      //Named constants – residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

      //Named constants – business customers
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main()
{
        //Variable declaration
    int accountNumber; 
    char customerType;    
    int numOfPremChannels; 
    int numOfBasicServConn; 
    double amountDue; 

    cout << fixed << showpoint;                     //Step 1
    cout << setprecision(2);                        //Step 1

    cout << "This program computes a cable " 
         << "bill." << endl;

    cout << "Enter account number (an integer): ";  //Step 2
    cin >> accountNumber;                           //Step 3
    cout << endl;

    cout << "Enter customer type: " 
         << "R or r (Residential), "
         << "B or b (Business):  ";                 //Step 4
    cin >>  customerType;                           //Step 5
    cout << endl;

    switch (customerType)
    {
    case 'r':                                       //Step 6
    case 'R': 
        cout << "Enter the number"
             << " of premium channels: ";           //Step 6a
        cin >> numOfPremChannels;                   //Step 6b
        cout << endl;

        amountDue = RES_BILL_PROC_FEES              //Step 6c
                   + RES_BASIC_SERV_COST 
                   + numOfPremChannels * 
                     RES_COST_PREM_CHANNEL;
  
        cout << "Account number: " 
             << accountNumber
             << endl;                               //Step 6d
        cout << "Amount due: $" 
             << amountDue
             << endl;                               //Step 6d
        break;

    case 'b':                                       //Step 7
    case 'B': 
        cout << "Enter the number of basic "
             << "service connections: ";            //Step 7a
        cin >> numOfBasicServConn;                  //Step 7b
        cout << endl;

        cout << "Enter the number"
             << " of premium channels: ";           //Step 7c
        cin >> numOfPremChannels;                   //Step 7d
        cout << endl;

        if (numOfBasicServConn<= 10)                //Step 7e
            amountDue = BUS_BILL_PROC_FEES 
                        + BUS_BASIC_SERV_COST 
                        + numOfPremChannels * 
                          BUS_COST_PREM_CHANNEL;
        else
            amountDue = BUS_BILL_PROC_FEES 
                        + BUS_BASIC_SERV_COST 
                        + (numOfBasicServConn - 10) *
                           BUS_BASIC_CONN_COST 
                        + numOfPremChannels *
                          BUS_COST_PREM_CHANNEL;

        cout << "Account number: " 
             << accountNumber << endl;              //Step 7f
        cout << "Amount due: $" << amountDue
             << endl;                               //Step 7f
        break;

    default: 
        cout << "Invalid customer type." << endl;   //Step 8
    }//end switch

    return 0;
}
