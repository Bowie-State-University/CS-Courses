 
//A properly formatted C++ program.
 
#include <iostream>
#include <string> 

using namespace std;

int main() 
{
    int num; 
    double height;
    string name;
    
    cout << "Enter an integer: "; 
    cin >> num; 
    cout << endl;
    
    cout << "num: " << num << endl;

    cout << "Enter the first name: "; 
    cin >> name;
    cout << endl; 
    
    cout << "Enter the height: ";
    cin >> height; 
    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Height: " << height << endl;
    
    return 0;
}
