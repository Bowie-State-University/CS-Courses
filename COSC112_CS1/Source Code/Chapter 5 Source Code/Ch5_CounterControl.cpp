//Program: Counter-Controlled Loop 
//This program computes and outputs the total number of boxes of
//cookies sold, the total revenue, and the average number of 
//boxes sold by each volunteer.

#include <iostream>                                     //Line 1
#include <string>                                       //Line 2
#include <iomanip>                                      //Line 3

using namespace std;                                    //Line 4

int main()                                              //Line 5
{                                                       //Line 6
    string name;                                        //Line 7
    int numOfVolunteers;                                //Line 8
    int numOfBoxesSold;                                 //Line 9
    int totalNumOfBoxesSold;                            //Line 10
    int counter;                                        //Line 11
    double costOfOneBox;                                //Line 12

    cout << fixed << showpoint << setprecision(2);      //Line 13
    
    cout << "Line 14: Enter the number of "
          << "volunteers: ";                            //Line 14
    cin >> numOfVolunteers;                             //Line 15
    cout << endl;                                       //Line 16

    totalNumOfBoxesSold = 0;                            //Line 17
    counter = 0;                                        //Line 18

    while (counter < numOfVolunteers)                   //Line 19
    {                                                   //Line 20
        cout << "Line 21: Enter the volunteer's name" 
             << " and the number of boxes sold: ";      //Line 21
        cin >> name >> numOfBoxesSold;                  //Line 22
        cout << endl;                                   //Line 23
        totalNumOfBoxesSold = totalNumOfBoxesSold 
                              + numOfBoxesSold;         //Line 24
        counter++;                                      //Line 25
    }                                                   //Line 26

    cout << "Line 27: The total number of boxes sold: "
         << totalNumOfBoxesSold << endl;                //Line 27

    cout << "Line 28: Enter the cost of one box: ";     //Line 28
    cin >> costOfOneBox;                                //Line 29
    cout << endl;                                       //Line 30

    cout << "Line 31: The total money made by selling "
         << "cookies: $" 
         << totalNumOfBoxesSold * costOfOneBox << endl; //Line 31

    if (counter != 0)                                   //Line 32
        cout << "Line 33: The average number of "
             << "boxes sold by each volunteer: "
             << totalNumOfBoxesSold / counter << endl;  //Line 33
    else                                                //Line 34
        cout << "Line 35: No input." << endl;           //Line 35

    return 0;                                           //Line 36
}                                                       //Line 37

