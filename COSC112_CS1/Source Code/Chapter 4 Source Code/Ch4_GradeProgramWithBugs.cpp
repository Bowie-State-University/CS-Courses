
//Grade program with bugs.  

#include <iostream>                                 //Line 1

using namespace std;                                //Line 2

int main()                                          //Line 3
{                                                   //Line 4
    int testScore;                                  //Line 5
    
    cout << "Enter the test score: ";               //Line 6
    cin >> testScore;                               //Line 7
    cout << endl;                                   //Line 8

    switch (testScore / 10)                         //Line 9
    {                                               //Line 10
    case 0:                                         //Line 11
    case 1:                                         //Line 12
    case 2:                                         //Line 13
    case 3:                                         //Line 14
    case 4:                                         //Line 15
    case 5:                                         //Line 16
        cout << "The grade is F." << endl;          //Line 17
    case 6:                                         //Line 18
        cout << "The grade is D." << endl;          //Line 19
    case 7:                                         //Line 20
        cout << "The grade is C." << endl;          //LIne 21
    case 8:                                         //Line 22
        cout << "The grade is B." << endl;          //Line 23
    case 9:                                         //Line 24
    case 10:                                        //Line 25
        cout << "The grade is A." << endl;          //Line 26
    default:                                        //Line 27
        cout << "Invalid test score." << endl;      //Line 28
    }                                               //Line 29

    return 0;                                       //Line 30
}                                                   //Line 31