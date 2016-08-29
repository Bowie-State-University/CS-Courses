//Program: Print a triangle of stars
 
#include <iostream> 

using namespace std;
  
void printStars(int blanks, int starsInLine); 

int main() 
{
    int noOfLines;  //variable to store the number of lines
    int counter;    //for loop control variable 
    int noOfBlanks; //variable to store the number of blanks

    cout << "Enter the number of star lines (1 to 20) "
         << "to be printed: ";                          //Line 1
    cin >> noOfLines;                                   //Line 2

    while (noOfLines < 0 || noOfLines > 20)             //Line 3
    {
        cout << "Number of star lines should be " 
             << "between 1 and 20"<<endl;               //Line 4
        cout << "Enter the number of star lines "
             << "(1 to 20) to be printed: ";            //Line 5
        cin  >>  noOfLines;                             //Line 6
    }

    cout << endl << endl;                               //Line 7
    noOfBlanks = 30;                                    //Line 8

    for (counter = 1; counter <= noOfLines; counter++)  //Line 9
    {
        printStars(noOfBlanks, counter);                //Line 10
        noOfBlanks--;                                   //Line 11
    }

    return 0;                                           //Line 12
}

void printStars(int blanks, int starsInLine)
{
    int count;

    for (count = 1; count <= blanks; count++)           //Line 13
        cout << ' ';                                    //Line 14
    for (count = 1; count <= starsInLine; count++)      //Line 15
        cout << " *";                                   //Line 16
    cout << endl;
}

