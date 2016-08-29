//Example: clear, empty, erase, length, and size functions
  
#include <iostream> 
#include <string>

using namespace std; 

int main()
{
    string firstName = "Elizabeth";                     //Line 1
    string name = firstName + " Jones";                 //Line 2
    string str1 = "It is sunny.";                       //Line 3
    string str2 = "";                                   //Line 4
    string str3 = "computer science";                   //Line 5
    string str4 = "C++ programming.";                   //Line 6
    string str5 = firstName + " is taking " + str4;     //Line 7

    string::size_type len;                              //Line 8

    cout << "Line 9: str3: " << str3 << endl;           //Line 9
    str3.clear();                                       //Line 10
    cout << "Line 11: After clear, str3: " << str3 
         << endl;                                       //Line 11

    cout << "Line 12: str1.empty(): " << str1.empty()
         << endl;                                       //Line 12
    cout << "Line 13: str2.empty(): " << str2.empty()
         << endl;                                       //Line 13

    cout << "Line 14: str4: " << str4 << endl;          //Line 14
    str4.erase(11, 4);                                  //Line 15
    cout << "Line 16: After erase(11, 4), str4: "
         << str4 << endl;                               //Line 16

    cout << "Line 17: Length of \"" << firstName << "\" = " 
         << static_cast<unsigned int> (firstName.length())
         << endl;                                       //Line 17
    cout << "Line 18: Length of \"" << name << "\" = " 
         << static_cast<unsigned int> (name.length())
         << endl;                                       //Line 18  	
    cout << "Line 19: Length of \"" << str1 << "\" = " 
         << static_cast<unsigned int> (str1.length()) 
         << endl;                                       //Line 19
    cout << "Line 20: Size of \"" << str5 << "\" = " 
         << static_cast<unsigned int> (str5.size()) 
         << endl;                                       //Line 20

    len = name.length();                                //Line 21
    cout << "Line 22: len = " 
         << static_cast<unsigned int> (len) << endl;    //Line 22

    return 0;                                           //Line 23
}


