//Program: Sentinel-Controlled Loop  
//This program computes and outputs the total number of boxes of
//cookies sold, the total revenue, and the average number of 
//boxes sold by each volunteer.

#include <iostream>                                     //Line 1
#include <string>                                       //Line 2
#include <iomanip>                                      //Line 3

using namespace std;                                    //Line 4

const string SENTINEL = "-1";                           //Line 5 

int main()                                              //Line 6
{                                                       //Line 7
    string name;                                        //Line 8
    int numOfVolunteers;                                //Line 9
    int numOfBoxesSold;                                 //Line 10
    int totalNumOfBoxesSold;                            //Line 11
    double costOfOneBox;                                //Line 12

    cout << fixed << showpoint << setprecision(2);      //Line 13
    
    cout << "Line 14: Enter each volunteer's name and " 
         << "the number of boxes " << endl
         << "         sold by each volunteer, ending "
         << "with -1: " << endl;                        //Line 14

    totalNumOfBoxesSold = 0;                            //Line 15
    numOfVolunteers = 0;                                //Line 16

    cin >> name;                                        //Line 17

    while (name != SENTINEL)                            //Line 18
    {                                                   //Line 19
        cin >> numOfBoxesSold;                          //Line 20
        totalNumOfBoxesSold = totalNumOfBoxesSold 
                              + numOfBoxesSold;         //Line 21
        numOfVolunteers++;                              //Line 22
        cin >> name;                                    //Line 23
    }                                                   //Line 24

    cout << endl;                                       //Line 25

    cout << "Line 26: The total number of boxes sold: "
         << totalNumOfBoxesSold << endl;                //Line 26

    cout << "Line 27: Enter the cost of one box: ";     //Line 27
    cin >> costOfOneBox;                                //Line 28
    cout << endl;                                       //Line 29

    cout << "Line 30: The total money made by selling "
         << "cookies: $" 
         << totalNumOfBoxesSold * costOfOneBox << endl; //Line 30

    if (numOfVolunteers != 0)                           //Line 31
        cout << "Line 32: The average number of "
             << "boxes sold by each volunteer: "
             << totalNumOfBoxesSold / numOfVolunteers
             << endl;                                   //Line 32
    else                                                //Line 33
        cout << "Line 34: No input." << endl;           //Line 34

    return 0;                                           //Line 35
}                                                       //Line 36
