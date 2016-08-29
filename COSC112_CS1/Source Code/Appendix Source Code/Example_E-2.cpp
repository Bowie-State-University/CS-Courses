//Creating and reading a binary file consisting of 
//bank customers' data
 
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

int main()
{
    customerType cust;                                //Line 1
    ifstream inFile;                                  //Line 2
    ofstream outFile;                                 //Line 3

    inFile.open("customerData.txt");                  //Line 4

    if (!inFile)                                      //Line 5
    {
        cout << "The input file does not exist. "
             << "The program terminates!!!!" << endl; //Line 6
        return 1;                                     //Line 7
    }

    outFile.open("customer.dat", ios::binary);        //Line 8

    inFile >> cust.ID >> cust.firstName >> cust.lastName
           >> cust.balance;                           //Line 9

    while (inFile)                                    //Line 10
    {
         outFile.write(reinterpret_cast<const char *> (&cust),
                       sizeof(cust));                 //Line 11
         inFile >> cust.ID >> cust.firstName >> cust.lastName
                >> cust.balance;                      //Line 12
    }

    inFile.close();                                   //Line 13
    inFile.clear();                                   //Line 14
    outFile.close();                                  //Line 15

    inFile.open("customer.dat", ios::binary);         //Line 16

    if (!inFile)                                      //Line 17
    {
        cout << "The input file does not exist. "
             << "The program terminates!!!!" << endl; //Line 18
        return 1;                                     //Line 19
    }

    cout << left << setw(8) << "ID"
         << setw(16) << "First Name"
         << setw(16) << "Last Name"
         << setw(10) << " Balance" << endl;           //Line 20
    cout << fixed << showpoint << setprecision(2);    //Line 21

        //read and output the data from the binary
        //file customer.dat
    inFile.read(reinterpret_cast<char *> (&cust),
                sizeof(cust));                        //Line 22
    while (inFile)                                    //Line 23
    {
         cout << left << setw(8) << cust.ID 
              << setw(16) << cust.firstName 
              << setw(16) << cust.lastName  
              << right << setw(10) << cust.balance
              << endl;                                //Line 24
        inFile.read(reinterpret_cast<char *> (&cust),
                    sizeof(cust));                    //Line 25
    }

    inFile.close();     //close the file              //Line 26

    return 0;                                         //Line 27
}
