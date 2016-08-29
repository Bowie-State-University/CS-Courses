//Example: insert and replace functions

#include <iostream>  
#include <string>
 
using namespace std;

int main()
{
    string firstString = "Cloudy and warm.";               //Line 1
    string secondString = "Hello there";                   //Line 2
    string thirdString = "Henry is taking programming I."; //Line 3
    string str1 = " very ";                                //Line 4
    string str2 = "Lisa";                                  //Line 5

    cout << "Line 6: firstString = " << firstString
         << endl;                                          //Line 6
    firstString.insert(10, str1);                          //Line 7
    cout << "Line 8: After insert; firstString = "
         << firstString << endl;                           //Line 8

    cout << "Line 9: secondString = " << secondString
         << endl;                                          //Line 9
    secondString.insert(11, 5, '!');                       //Line 10
    cout << "Line 11: After insert; secondString = "
         << secondString << endl;                          //Line 11

    cout << "Line 12: thirdString = " << thirdString
         << endl;                                          //Line 12
    thirdString.replace(0, 5, str2);                       //Line 13
    cout << "Line 14: After replace, thirdString = "
         << thirdString << endl;                           //Line 14

    return 0;                                              //Line 15
}
