//************************************************************
// Author: D.S. Malik 
// 
// Program to calculate the average test score.
// Given a student's name and five test scores, this program
// calculates the average test score. The student's name, the
// five test scores, and the average test score is stored in 
// the file testavg.out. The data is input from the file 
// test.txt.
//************************************************************
   
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
        //Declare variables; 
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable

    double testScore;
    double sum = 0;
    string firstName;   
    string lastName;    

    inFile.open("test.txt");                    
    outFile.open("testavg.out");             

    outFile << fixed << showpoint;  
    outFile << setprecision(2);   

    cout << "Processing data" << endl;

    inFile >> firstName >> lastName; 
    outFile << "Student name: " << firstName
            << " " << lastName << endl; 
    outFile << "Test scores: "; 

    inFile >> testScore;              //Read the first test score
    outFile << setw(6) << testScore;  //Output the test score
    sum = sum + testScore;            //Update sum

    inFile >> testScore;              //Read the second test score
    outFile << setw(6) << testScore;  //Output the test score
    sum = sum + testScore;            //Update sum

    inFile >> testScore;              //Read the third test score
    outFile << setw(6) << testScore;  //Output the test score
    sum = sum + testScore;            //Update sum

    inFile >> testScore;              //Read the fourth test score
    outFile << setw(6) << testScore;  //Output the test score
    sum = sum + testScore;            //Update sum

    inFile >> testScore;              //Read the fifth test score
    outFile << setw(6) << testScore;  //Output the test score
    sum = sum + testScore;            //Update sum

    outFile << endl;

    outFile << "Average test score: " << setw(6) 
            << sum / 5.0 << endl;                  

    inFile.close();                              
    outFile.close();      

    return 0;
}

