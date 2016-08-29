#include <iostream>

using namespace std;
  
int main() 
{
    int calBurnedDay1, calBurnedDay2, calBurnedDay3,
        calBurnedDay4, calBurnedDay5, calBurnedDay6, 
        calBurnedDay7;     
    int calBurnedInAWeek; 

    cout << "Enter calories burned day 1: ";
    cin >> calBurnedDay1;
    cout << endl;

    cout << "Enter calories burned day 2: ";
    cin >> calBurnedDay2;
    cout << endl;

    cout << "Enter calories burned day 3: ";
    cin >> calBurnedDay3;
    cout << endl;

    cout << "Enter calories burned day 4: ";
    cin >> calBurnedDay4;
    cout << endl;

    cout << "Enter calories burned day 5: ";
    cin >> calBurnedDay5;
    cout << endl;
     
    cout << "Enter calories burned day 6: ";
    cin >> calBurnedDay6;
    cout << endl;

    cout << "Enter calories burned day 7: ";
    cin >> calBurnedDay7;
    cout << endl;
    
    calBurnedInAWeek = calBurnedDay1 + calBurnedDay2 + calBurnedDay3
                     + calBurnedDay4 + calBurnedDay5 + calBurnedDay6 
                     + calBurnedDay7;      

    cout << "Average number of calories burned each day: "
         << calBurnedInAWeek / 7 << endl;

    return 0;
}
