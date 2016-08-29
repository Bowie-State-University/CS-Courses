//Example string operations
  
#include <iostream>
#include <string> 

using namespace std; 

int main()
{
    string name = "William Jacob";                  //Line 1
    string str1, str2, str3, str4;                  //Line 2

    cout << "Line 3: Name = " << name << endl;      //Line 3

    str1 = "Hello There";                           //Line 4
    cout << "Line 5: str1 = " << str1 << endl;      //Line 5

    str2 = str1;                                    //Line 6
    cout << "Line 7: str2 = " << str2 << endl;      //Line 7

    str1 = "Sunny";                                 //Line 8
    str2 = str1 + " Day";                           //Line 9
    cout << "Line 10: str2 = " << str2 << endl;     //Line 10

    str1 = "Hello";                                 //Line 11
    str2 = "There";                                 //Line 12
    str3 = str1 + " " + str2;                       //Line 13
    cout << "Line 14: str3 = " << str3 << endl;     //Line 14

    str3 = str1 + ' ' + str2;                       //Line 15
    cout << "Line 16: str3 = " << str3 << endl;     //Line 16

    str1 = str1 + " Mickey";                        //Line 17
    cout << "Line 18: str1 = " << str1 << endl;     //Line 18

    str1 = "Hello there";                           //Line 19
    cout << "Line 20: str1[6] = " << str1[6]
         << endl;                                   //Line 20
					
    str1[6] = 'T';                                  //Line 21
    cout << "Line 22: str1 = " << str1 << endl;     //Line 22

        //String input operations
    cout << "Line 23: Enter a string with "
         << "no blanks: ";                          //Line 23
    cin >> str1;                                    //Line 24

    char ch;                                        //Line 25
    cin.get(ch);        //Read the newline character; Line 26
    cout << endl;                                   //Line 27

    cout << "Line 28: The string you entered = "
         << str1 << endl;                           //Line 28

    cout << "Line 29: Enter a sentence: ";          //Line 29
    getline(cin, str2);                             //Line 30
    cout << endl;                                   //Line 31

    cout << "Line 32: The sentence is: " << str2 
         << endl;                                   //Line 32

    return 0;
}

