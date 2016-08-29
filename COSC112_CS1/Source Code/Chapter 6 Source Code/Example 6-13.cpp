//This program reads a course score and prints the 
//associated course grade.
	 
#include <iostream>
using namespace std; 
 
void getScore(int& score); 
void printGrade(int score);
 
int main ()
{
    int courseScore;

    cout << "Line 1: Based on the course score, \n"
         << "        this program computes the "  
         << "course grade." << endl;                  //Line 1
 
    getScore(courseScore);                            //Line 2

    printGrade(courseScore);                          //Line 3

    return 0;
}

void getScore(int& score)
{
    cout << "Line 4: Enter course score: ";           //Line 4 
    cin >> score;                                     //Line 5
    cout << endl << "Line 6: Course score is "
         << score << endl;                            //Line 6
}

void printGrade(int cScore)
{
    cout << "Line 7: Your grade for the course is ";  //Line 7

    if (cScore >= 90)                                 //Line 8
        cout << "A." << endl;
    else if (cScore >= 80)
        cout << "B." << endl;
    else if(cScore >= 70)
        cout << "C." << endl;
    else if (cScore >= 60)
        cout << "D." << endl;
    else
        cout << "F." << endl;
 }
