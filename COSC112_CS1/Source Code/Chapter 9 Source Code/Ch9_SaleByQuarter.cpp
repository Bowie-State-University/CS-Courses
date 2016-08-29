//*************************************************************
// Author: D.S. Malik 
// 
// Program: Sales Data Analysis
// This program processes sales data for a company. For each 
// salesperson, it outputs the ID, the total sales by each 
// quarter, and the total sales for the year. It also outputs
// the salesperson’s ID generating the maximum sale for the
// year and the sales amount. The quarter generating the 
// maximum sale and the sales amount is also output.
//*************************************************************

#include <iostream>
#include <fstream> 
#include <iomanip>
#include <string>

using namespace std;

const int NO_OF_SALES_PERSON = 6;

struct salesPersonRec
{
    string ID;      //salesperson's ID
    double saleByQuarter[4];  //array to store the total 
                              //sales for each quarter
    double totalSale;   //salesperson's yearly sales amount
};

void initialize(ifstream& indata, salesPersonRec list[],
                int listSize);
void getData(ifstream& infile, salesPersonRec list[], 
             int listSize);
void saleByQuarter(salesPersonRec list[], int listSize, 
                   double totalByQuarter[]);
void totalSaleByPerson(salesPersonRec list[], int listSize);
void printReport(ofstream& outfile, salesPersonRec list[], 
                 int listSize, double saleByQuarter[]);
void maxSaleByPerson(ofstream& outData, salesPersonRec list[],
                     int listSize);
void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]);

int main()
{
        //Step 1
    ifstream infile;    //input file stream variable
    ofstream outfile;   //output file stream variable

    string inputFile;   //variable to hold the input file name
    string outputFile;  //variable to hold the output file name

    double totalSaleByQuarter[4];   //array to hold the 
                                    //sale by quarter

    salesPersonRec salesPersonList[NO_OF_SALES_PERSON]; //array 
                               //to hold the salesperson's data

    cout << "Enter the salesPerson ID file name: "; //Step 2
    cin >> inputFile;                               //Step 3
    cout << endl;

    infile.open(inputFile.c_str());                 //Step 4

    if (!infile)                                    //Step 5
    {
        cout << "Cannot open the input file."
             << endl;
        return 1;
    }

    initialize(infile, salesPersonList, 
               NO_OF_SALES_PERSON);	                //Step 6

    infile.close();                                 //Step 7
    infile.clear();                                 //Step 7

    cout << "Enter the sales data file name: ";     //Step 8
    cin >> inputFile;                               //Step 9
    cout << endl;

    infile.open(inputFile.c_str());                 //Step 10

    if (!infile)                                    //Step 11
    {
        cout << "Cannot open the input file."
             << endl;
        return 1;
    }

    cout << "Enter the output file name: ";         //Step 12
    cin >> outputFile;                              //Step 13
    cout << endl;

    outfile.open(outputFile.c_str());               //Step 14

    outfile << fixed << showpoint
            << setprecision(2);                     //Step 15

    getData(infile, salesPersonList, 
            NO_OF_SALES_PERSON);                    //Step 16
    saleByQuarter(salesPersonList, 
                  NO_OF_SALES_PERSON,
                  totalSaleByQuarter);              //Step 17
    totalSaleByPerson(salesPersonList, 
                      NO_OF_SALES_PERSON);          //Step 18
	
    printReport(outfile, salesPersonList, 
                NO_OF_SALES_PERSON,
                totalSaleByQuarter);                //Step 19
    maxSaleByPerson(outfile, salesPersonList, 
                    NO_OF_SALES_PERSON);            //Step 20
    maxSaleByQuarter(outfile, totalSaleByQuarter);  //Step 21
		
    infile.close();                                 //Step 22
    outfile.close();                                //Step 22

    return 0;
}

void initialize(ifstream& indata, salesPersonRec list[],
                int listSize)
{
    int index;
    int quarter;

    for (index = 0; index < listSize; index++)
    {
        indata >> list[index].ID; //get salesperson's ID

        for (quarter = 0; quarter < 4; quarter++)
            list[index].saleByQuarter[quarter] = 0.0;

        list[index].totalSale = 0.0;
    }
} //end initialize

void getData(ifstream& infile, salesPersonRec list[], 
            int listSize)
{
    int index;
    int quarter;
    string sID;
    int month;
    double amount;

    infile >> sID;      //get salesperson's ID

    while (infile)
    {
        infile >> month >> amount;  //get the sale month and
                                    //the sale amount

        for (index = 0; index < listSize; index++)
            if (sID == list[index].ID)
                break;

        if (1 <= month && month <= 3) 
            quarter = 0;
        else if (4 <= month && month <= 6)
            quarter = 1;
        else if (7 <= month && month <= 9)
            quarter = 2;
        else
            quarter = 3;

        if (index < listSize)
            list[index].saleByQuarter[quarter] += amount;
        else
            cout << "Invalid salesperson's ID." << endl;

        infile >> sID;
    } //end while
} //end getData

void saleByQuarter(salesPersonRec list[], int listSize,
                   double totalByQuarter[])
{
    int quarter;
    int index;

    for (quarter = 0; quarter < 4; quarter++)
        totalByQuarter[quarter] = 0.0;

    for (quarter = 0; quarter < 4; quarter++)
        for (index = 0; index < listSize; index++)
            totalByQuarter[quarter] += 
                    list[index].saleByQuarter[quarter];
} //end saleByQuarter

void totalSaleByPerson(salesPersonRec list[], int listSize)
{
    int index;
    int quarter;

    for (index = 0; index < listSize; index++)
        for (quarter = 0; quarter < 4; quarter++)
            list[index].totalSale += 
                        list[index].saleByQuarter[quarter];
} //end totalSaleByPerson

void printReport(ofstream& outfile, salesPersonRec list[], 
                 int listSize, double saleByQuarter[])
{
    int index;
    int quarter;

    outfile << "-----------  Annual Sales Report ---------" 
            << "----" << endl;
    outfile << endl;
    outfile << "  ID         QT1        QT2      QT3       "
            << "QT4     Total" << endl;
    outfile << "____________________________________________"
            << "_________________" << endl;

    for (index = 0; index < listSize; index++)
    {
        outfile << list[index].ID << "   ";

        for (quarter = 0; quarter < 4; quarter++)
            outfile << setw(10)
                    << list[index].saleByQuarter[quarter];

        outfile << setw(10) << list[index].totalSale << endl;
    }

    outfile << "Total   ";

    for (quarter = 0; quarter < 4; quarter++)
        outfile << setw(10) << saleByQuarter[quarter];
 
    outfile << endl << endl;
} //end printReport

void maxSaleByPerson(ofstream& outData, salesPersonRec list[],
                     int listSize)
{
    int maxIndex = 0;
    int index;

    for (index = 1; index < listSize; index++)
        if (list[maxIndex].totalSale < list[index].totalSale)
            maxIndex = index;

    outData << "Max Sale by SalesPerson: ID = "
            << list[maxIndex].ID
            << ", Amount = $" << list[maxIndex].totalSale
            << endl;
} //end maxSaleByPerson

void maxSaleByQuarter(ofstream& outData, 
                      double saleByQuarter[])
{
    int quarter;
    int maxIndex = 0;

    for (quarter = 0; quarter < 4; quarter++)
        if (saleByQuarter[maxIndex] < saleByQuarter[quarter])
            maxIndex = quarter;

    outData << "Max Sale by Quarter: Quarter = "
            << maxIndex + 1
            << ", Amount = $" << saleByQuarter[maxIndex]
            << endl;
} //end maxSaleByQuarter
