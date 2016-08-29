//Logic errors.
 
#include <iostream>
#include <iomanip>
 
using namespace std;
  
int main()  
{   
    double cost;
    double area;
    double bagSize;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the amount of fertilizer, in pounds, "
         << "in one bag: ";
    cin >> bagSize;
    cout << endl;

    cout << "Enter the cost of the " << bagSize 
         << " pound fertilizer bag: ";
    cin >> cost;
    cout << endl;

    cout << "Enter the area, in square feet, that can be "
        << "fertilized by one bag: ";
    cin >> area;
    cout << endl;

    cout << "The cost of the fertilizer per pound is: $"
         << bagSize / cost << endl; 
    cout << "The cost of fertilizing per square foot is: $"
         << area / cost << endl;
 
    return 0;
}
