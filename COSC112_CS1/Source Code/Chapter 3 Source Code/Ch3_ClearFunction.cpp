//Input failure and the clear function
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

    cin.clear();               //Restore input stream; Line 12

    cin.ignore(200,'\n');          //Clear the buffer; Line 13

    cout << "\nLine 14: Enter name, age, weight, " 
         << "and height: ";                          //Line 14 
    cin >> name >> age >> weight >> height;          //Line 15
    cout << endl;                                    //Line 16

    cout << "Line 17: Name: " << name << endl;       //Line 17
    cout << "Line 18: Age: " << age << endl;         //Line 18
    cout << "Line 19: Weight: " << weight << endl;   //Line 19
    cout << "Line 20: Height: " << height << endl;   //Line 20

    return 0;                                        //Line 21
}
