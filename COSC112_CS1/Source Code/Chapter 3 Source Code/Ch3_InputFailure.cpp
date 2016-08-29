//Input Failure program

#include <iostream>
#include <string> 
 
using namespace std;
   
int main()
{
    string name;                                     //Line 1
    int age = 0;                                     //Line 2
    int weight = 0;                                  //Line 3
    double height = 0.0;                             //Line 4
	
    cout << "Line 5: Enter name, age, weight, and " 
         << "height: ";                              //Line 5 
    cin >> name >> age >> weight >> height;          //Line 6
    cout << endl;                                    //Line 7

    cout << "Line 8: Name: " << name << endl;        //Line 8
    cout << "Line 9: Age: " << age << endl;          //Line 9
    cout << "Line 10: Weight: " << weight << endl;   //Line 10
    cout << "Line 11: Height: " << height << endl;   //Line 11

    return 0;                                        //Line 12
}
