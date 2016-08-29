// Handling out_of_range and length_error exceptions.

#include <iostream>
#include <string>
   
using namespace std;

int main() 
{
    string sentence;                                //Line 1
    string str1, str2, str3;                        //Line 2

    try                                             //Line 3
    {
        sentence = "Testing string exceptions!";    //Line 4
        cout << "Line 5: sentence = " << sentence 
             << endl;                               //Line 5
        cout << "Line 6: sentence.length() = " 
             << static_cast<int>(sentence.length())
             << endl;                               //Line 6

        str1 = sentence.substr(8, 20);              //Line 7
        cout << "Line 8: str1 = " << str1
             << endl;                               //Line 8

        str2 = sentence.substr(28, 10);             //Line 9
        cout << "Line 10: str2 = " << str2
             << endl;                               //Line 10

        str3 = "Exception handling. " + sentence;   //Line 11
        cout << "Line 12: str3 = " << str3 
             << endl;                               //Line 12

    }
    catch (out_of_range re)                         //Line 13
    {
        cout << "Line 14: In the out_of_range " 
             << "catch block: " << re.what()
             << endl;                               //Line 14
    }
    catch (length_error le)                         //Line 15
    {
        cout << "Line 16: In the length_error "
             << "catch block: " << le.what() 
             << endl;                               //Line 16
    }

    return 0;                                       //Line 17
}
