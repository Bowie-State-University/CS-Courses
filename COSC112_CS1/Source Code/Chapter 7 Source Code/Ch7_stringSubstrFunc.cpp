//Example: substr function

#include <iostream>
#include <string>
 
using namespace std; 
 
int main()
{
    string sentence;                                 //Line 1	
    string str;                                      //Line 2

    sentence = "It is cloudy and warm.";             //Line 3

    cout << "Line 4: substr(0, 5) in \"" 
         << sentence << "\" = \"" 
         << sentence.substr(0, 5) << "\"" << endl;   //Line 4
	 
    cout << "Line 5: substr(6, 6) in \"" 
         << sentence << "\" = \"" 
         << sentence.substr(6, 6) << "\"" << endl;   //Line 5
	 
    cout << "Line 6: substr(6, 16) in \"" 
         << sentence << "\" = " << endl 
         << "        \"" << sentence.substr(6, 16) 
         << "\"" << endl;                            //Line 6

    cout << "Line 7: substr(17, 10) in \"" 
         << sentence << "\" = \"" 
         << sentence.substr(17, 10) << "\"" << endl; //Line 7

    cout << "Line 8: substr(3, 6) in \"" 
         << sentence << "\" = \"" 
         << sentence.substr(3, 6) << "\"" << endl;   //Line 8

    str = sentence.substr(0, 8);                     //Line 9
    cout << "Line 10: " << "str = \"" << str  
         << "\"" << endl;                            //Line 10
	 
    str = sentence.substr(2, 10);                    //Line 11
    cout << "Line 12: " << "str = \"" << str 
         << "\"" << endl;                            //Line 12
	 
    return 0;
}
