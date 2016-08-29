
// This program illustrates how to read strings and numeric data.

#include <iostream>
#include <string>  

using namespace std;  

int main()
{
    string firstName;                               //Line 1
    string lastName;                                //Line 2
    int age;                                        //Line 3
    double weight;                                  //Line 4

    cout << "Enter first name, last name, age, "   
         << "and weight, separated by spaces." 
         << endl;                                   //Line 5

    cin >> firstName >> lastName;                   //Line 6
    cin >> age >> weight;                           //Line 7

    cout << "Name: " << firstName << " "
         << lastName << endl;                       //Line 8

    cout << "Age: " << age << endl;                 //Line 9
    cout << "Weight: " << weight << endl;           //Line 10

    return 0;                                       //Line 11
}
