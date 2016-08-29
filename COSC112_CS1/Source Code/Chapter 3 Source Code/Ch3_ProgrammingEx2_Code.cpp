#include <iomanip>
#include <cmath>

int main()  
{}

    double height; 

    cout << "Volume of the cylinder = " 
         << PI * pow(radius, 2.0) * height << endl; 

    cout << "Enter the height of the cylinder: ";
    cin >> radius;
    cout << endl; 

    return 0;

    double radius;

    cout << "Surface area: " 
         << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) 
         << endl; 
    cout << fixed << showpoint << setprecision(2); 

    cout << "Enter the radius of the base of the cylinder: ";
    cin >> height;
    cout << endl;

#include <iostream>
const double PI = 3.14159;

using namespace std;
