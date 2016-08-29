//Program to find the average test score and output the average
//test score and all the test scores that are less than 
//the average test score.  
 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int test0, test1, test2, test3, test4;
    double average;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter five test scores: ";
    cin >> test0 >> test1 >> test2 >> test3 >> test4;
    cout << endl;

    average = (test0 + test1 + test2 + test3 + test4) / 5.0;

    cout << "The average test score = " << average << endl;

    if (test0 < average)
        cout << test0 << " is less than the average test score." << endl;  

    if (test1 < average)
        cout << test1 << " is less than the average test score." << endl;

    if (test2 < average)
        cout << test2 << " is less than the average test score." << endl;

    if (test3 < average)
        cout << test3 << " is less than the average test score." << endl;

    if (test4 < average)
        cout << test4 << " is less than the average test score." << endl;

    return 0;
} 

