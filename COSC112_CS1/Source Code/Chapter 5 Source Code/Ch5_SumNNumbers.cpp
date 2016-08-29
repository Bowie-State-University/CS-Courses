//Program to determine the sum of the first n positive numbers. 
 
#include <iostream>

using namespace std; 
  
int main() 
{
    int counter;    //loop control variable 
    int sum;        //variable to store the sum of numbers 
    int N;          //variable to store the number of 
                    //first positive integers to be added 

    cout << "Line 1: Enter the number of positive "
         << "integers to be added: ";               //Line 1
    cin >> N;                                       //Line 2
    sum = 0;                                        //Line 3
    cout << endl;                                   //Line 4

    for (counter = 1; counter <= N; counter++)      //Line 5
        sum = sum + counter;                        //Line 6

    cout << "Line 7: The sum of the first " << N
         << " positive integers is " << sum 
         << endl;                                   //Line 7

    return 0;
}
