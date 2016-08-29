//Program to calculate the average test score.

#include <iostream>
#include <fstream> 
#include <iomanip>   
#include <string>

using namespace std;

int main()
{
    ifstream inFile;  //input file stream variable
    ofstream outFile; //output file stream variable

    double test1, test2, test3, test4, test5;
    double average;

    string firstName;   
    string lastName;    

    inFile.open("test.txt"); //open the input file

    if (!inFile)
    {
        cout << "Cannot open the input file. "
             << "The program terminates." << endl;
        return 1;
    }

    outFile.open("testavg.out");  //open the output file

    outFile << fixed << showpoint; 
    outFile << setprecision(2); 

    cout << "Processing data" << endl;

    inFile >> firstName >> lastName; 
    outFile << "Student name: " << firstName
            << " " << lastName << endl;

    inFile >> test1 >> test2 >> test3 
           >> test4 >> test5;
    outFile << "Test scores: " << setw(4) << test1
            << setw(4) << test2 << setw(4) << test3
            << setw(4) << test4 << setw(4) << test5 
            << endl; 

    average = (test1 + test2 + test3 + test4 + test5) / 5.0;

    outFile << "Average test score: " << setw(6) 
            << average << endl; 

    inFile.close(); 
    outFile.close(); 

    return 0;
}