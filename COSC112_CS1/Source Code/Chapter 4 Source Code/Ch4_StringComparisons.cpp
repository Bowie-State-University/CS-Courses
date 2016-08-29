 
//Chapter 4 String Comparisons
//Note that in the output, 1 means true and 0 means false.
 
#include <iostream> 
#include <string> 

using namespace std;
  
int main()
{
    string str1 = "Hello";
    string str2 = "Hi";
    string str3 = "Air";
    string str4 = "Bill";
    string str5 = "Big";

    cout << "str1 < str2 evaluate to " << (str1 < str2) << endl;
    cout << "str1 > \"Hen\" evaluates to " << (str1 > "Hen") << endl;
    cout << "str3 < \"An\" evaluates to " << (str3 < "An") << endl;
    cout << "str1 == \"hello\" evaluates to "
         << (str1 == "hello") << endl;
    cout << "str3 <= str4 evaluates to " << (str3 <= str4) << endl;
    cout << "str2 > str4 evaluates to " << (str2 > str4) << endl; 
    cout << "str4 >= \"Billy\" evaluates to "
         << (str4 >= "Billy") << endl;
    cout << "str5 <= \"Bigger\" evaluates to "
         << (str5 <= "Bigger") << endl;

    return 0;
}