// This program reads data from a file consisting of students’
// names and their test scores. The program outputs each student’s
// name followed by the test score followed by the grade. The
// program also outputs the average test score for all the students.
 
#include <iostream>                                    //Line 1
#include <fstream>                                     //Line 2
#include <string>                                      //Line 3
#include <iomanip>                                     //Line 4
 
using namespace std;                                   //Line 5

int main()                                             //Line 6
{                                                      //Line 7
       //Declare variables to manipulate data
    string firstName;                                  //Line 8
    string lastName;                                   //Line 9
    double testScore;                                  //Line 10
    char grade = ' ';                                  //Line 11
    double sum = 0;                                    //Line 12
    int count = 0;                                     //Line 13

        //Declare stream variables
    ifstream inFile;                                   //Line 14
    ofstream outFile;                                  //Line 15 

        //Open input file
    inFile.open("Ch5_stData.txt");                     //Line 16

    if (!inFile)                                       //Line 17
    {                                                  //Line 18
        cout << "Cannot open input file. "
             << "Program terminates!" << endl;         //Line 19
        return 1;                                      //Line 20 
    }                                                  //Line 21
        //Open output file
    outFile.open("Ch5_stData.out");                    //Line 22

    outFile << fixed << showpoint << setprecision(2);  //Line 23

    inFile >> firstName >> lastName;  //read the name    Line 24
    inFile >> testScore;       //read the test score     Line 25

    while (inFile)                                     //Line 26
    {                                                  //Line 27
        sum = sum + testScore; //update sum              Line 28
        count++;               //increment count         Line 29

           //determine the grade
        switch (static_cast<int> (testScore) / 10)     //Line 30
        {                                              //Line 31
        case 0:                                        //Line 32
        case 1:                                        //Line 33
        case 2:                                        //Line 34
        case 3:                                        //Line 35
        case 4:                                        //Line 36
        case 5:                                        //Line 37
            grade = 'F';                               //Line 38
            break;                                     //Line 39

        case 6:                                        //Line 40
            grade = 'D';                               //Line 41
            break;                                     //Line 42

        case 7:                                        //Line 43
            grade = 'C';                               //Line 44
            break;                                     //Line 45

        case 8:                                        //Line 46
            grade = 'B';                               //Line 47
            break;                                     //Line 48

        case 9:                                        //Line 49
        case 10:                                       //Line 50
            grade = 'A';                               //Line 51
            break;                                     //Line 52

        default:                                       //Line 53
            cout << "Invalid score." << endl;          //Line 54
        }//end switch                                  //Line 55

        outFile << left << setw(12) << firstName
                << setw(12) << lastName
                << right << setw(4) << testScore
                << setw(2) << grade << endl;           //Line 56

        inFile >> firstName >> lastName; //read the name Line 57
        inFile >> testScore;       //read the test score Line 58
    }//end while                                       //Line 59

    outFile << endl;                                   //Line 60

    if (count != 0)                                    //Line 61
        outFile << "Class Average: " << sum / count
                <<endl;                                //Line 62
    else                                               //Line 63
        outFile << "No data." << endl;                 //Line 64

    inFile.close();                                    //Line 65
    outFile.close();                                   //Line 66

    return 0;                                          //Line 67
}                                                      //Line 68

