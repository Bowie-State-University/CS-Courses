
// Given length in inches, this program outputs the equivalent
// length in feet and remaining inch(es).
  
#include <iostream>

using namespace std; 

int main() 
{
    int inches; //variable to store total inches

    cout << "Enter total inches and press Enter: "; //prompt
                            //the user to enter total inches
    cin >> inches;  //store the value eneterd by the user
                    //into the variable inches
    cout << endl;

    cout << inches << " inch(es) = ";  //output the value of 
                              //inches and the equal sign
    cout << inches / 12 << " feet (foot) and "; //output maximum
                               //number of feet (foot)
    cout << inches % 12 << " inch(es)" << endl; //output
                               //remaining inches
    return 0;
}

