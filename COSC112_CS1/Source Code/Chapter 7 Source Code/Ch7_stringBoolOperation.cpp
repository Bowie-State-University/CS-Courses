//Example string relational operations
  
#include <iostream>
#include <string> 

using namespace std; 

int main()
{
    string str1, str2, str3, str4;          //Line 1

    str1 = "Hello";                         //Line 2
    str2 = "Hi";                            //Line 3
    str3 = "Air";                           //Line 4
    str4 = "Bill";                          //Line 5
	
    if (str1 < str2)                        //Line 6
        cout << "Line 7: true" << endl;     //Line 7
    else                                    //Line 8
        cout << "Line 9: false" << endl;    //Line 9

    if (str1 > "Hen")                       //Line 10
        cout << "Line 11: true" << endl;    //Line 11
    else                                    //Line 12
        cout << "Line 13: false" << endl;   //Line 13

    if (str3 < "An")                        //Line 14
        cout << "Line 15: true" << endl;    //Line 15
    else                                    //Line 16
        cout << "Line 17: false" << endl;   //Line 17
	
    if (str1 == "hello")                    //Line 18
        cout << "Line 19: true" << endl;    //Line 19
    else                                    //Line 20
        cout << "Line 21: false" << endl;   //Line 21
		
    if (str4 >= "Billy")                    //Line 22	
        cout << "Line 23: true" << endl;    //Line 23
    else                                    //Line 24
        cout << "Line 25: false" << endl;   //Line 25

    return 0;
}

