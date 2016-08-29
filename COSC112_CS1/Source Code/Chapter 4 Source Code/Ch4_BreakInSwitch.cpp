//Program: Effect of break statements in a switch structure

#include <iostream>

using namespace std; 
 
int main() 
{
    int num;

    cout << "Enter an integer between 0 and 7: ";      //Line 1
    cin >> num;                                        //Line 2
    cout << endl;                                      //Line 3

    cout << "The number you entered is " << num 
         << endl;                                      //Line 4
	
    switch(num)                                        //Line 5
    {
    case 0:                                            //Line 6
    case 1:                                            //Line 7
        cout << "Learning to use ";                    //Line 8
    case 2:                                            //Line 9
        cout << "C++'s ";                              //Line 10
    case 3:                                            //Line 11
        cout << "switch structure." << endl;           //Line 12
        break;                                         //Line 13
    case 4:                                            //Line 14
        break;                                         //Line 15
    case 5:                                            //Line 16
        cout << "This program shows the effect ";      //Line 17
    case 6:                                            //Line 18
    case 7:                                            //Line 19
        cout << "of the break statement." << endl;     //Line 20
        break;                                         //Line 21
    default:                                           //Line 22
        cout << "The number is out of range." << endl; //Line 23 
    }

    cout << "Out of the switch structure." << endl;    //Line 24

    return 0;                                          //Line 25
}
