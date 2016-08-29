//Reading a file randomly 

#include <iostream>
#include <fstream>
#include <iomanip>
  
using namespace std;

struct customerType
{
    char firstName[15];
    char lastName[15];
    int ID;
    double balance;
};

void printCustData(const customerType& customer);

int main()
{
    customerType cust;                                //Line 1
    ifstream inFile;                                  //Line 2

    long custSize = sizeof(cust);                     //Line 3

    inFile.open("customer.dat", ios::binary);         //Line 4

    if (!inFile)                                      //Line 5
    {
        cout << "The input file does not exist. "
             << "The program terminates!!!!" << endl; //Line 6
        return 1;                                     //Line 7
    }

    cout << fixed << showpoint << setprecision(2);    //Line 8

        //randomly read the records and outputs them
    inFile.seekg(6 * custSize, ios::beg);             //Line 9
    inFile.read(reinterpret_cast<char *> (&cust),
                sizeof(cust));                        //Line 10
    cout << "Seventh customer's data: " << endl;      //Line 11
    printCustData(cust);                              //Line 12 

    inFile.seekg(8 * custSize, ios::beg);             //Line 13
    inFile.read(reinterpret_cast<char *> (&cust),
                sizeof(cust));                        //Line 14
    cout << "Ninth customer's data: " << endl;        //Line 15
    printCustData(cust);  

    inFile.seekg(-8 * custSize, ios::end);            //Line 16
    inFile.read(reinterpret_cast<char *> (&cust),
                sizeof(cust));                        //Line 17
    cout << "Eighth (from the end) customer's data: "
         << endl;                                     //Line 18
    printCustData(cust);                              //Line 19

    inFile.close();     //close the file              //Line 20

    return 0;                                         //Line 21
}

void printCustData(const customerType& customer)
{
    cout << "  ID: " << customer.ID <<endl
         << "  First Name: " << customer.firstName <<endl
         << "  Last Name: " << customer.lastName <<endl
         << "  Account Balance: $" << customer.balance
         << endl;
} 
