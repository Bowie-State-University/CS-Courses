//*************************************************************
// Author: D.S. Malik 
//
// Program: Classify Numbers
// This program reads 20 numbers and outputs the number of 
// zeros, odd, and even numbers.
//*************************************************************
  
#include <iostream> 
#include <iomanip>

using namespace std;

const int N = 20;   

    //Function prototypes
void initialize(int& zeroCount, int& oddCount, int& evenCount);
void getNumber(int& num);
void classifyNumber(int num, int& zeroCount, int& oddCount, 
                    int& evenCount);
void printResults(int zeroCount, int oddCount, int evenCount);

int main ()
{
        //Variable declaration
    int counter; //loop control variable 
    int number;  //variable to store the new number 
    int zeros;   //variable to store the number of zeros 
    int odds;    //variable to store the number of odd integers 
    int evens;   //variable to store the number of even integers 

    initialize(zeros, odds, evens);                 //Step 1

    cout << "Please enter " << N << " integers."
         << endl;                                   //Step 2
    cout << "The numbers you entered are: "
         << endl;

    for (counter = 1; counter <= N; counter++)      //Step 3
    {
        getNumber(number);                          //Step 3a
        cout << number << " ";                      //Step 3b
        classifyNumber(number, zeros, odds, evens); //Step 3c
    }// end for loop 

    cout << endl;

    printResults(zeros, odds, evens);               //Step 4

    return 0;
}

void initialize(int& zeroCount, int& oddCount, int& evenCount)
{
    zeroCount = 0;
    oddCount = 0;
    evenCount = 0;
}

void getNumber(int& num)
{
    cin >> num;
}

void classifyNumber(int num, int& zeroCount, int& oddCount,
                    int& evenCount)
{
    switch (num % 2)
    {
    case 0: 
        evenCount++;  
        if (num == 0)
            zeroCount++;  
        break;
   case 1: 
   case -1: 
       oddCount++;
   } //end switch
} //end classifyNumber

void printResults(int zeroCount, int oddCount, int evenCount)
{ 
    cout << "There are " << evenCount << " evens, "
         << "which includes " << zeroCount << " zeros"
         << endl;

    cout << "The number of odd numbers is: " << oddCount
         << endl;
} //end printResults
