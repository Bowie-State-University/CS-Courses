//Functions peek and putback

#include <iostream>
     
using namespace std;

int main()   
{
    char ch;

    cout << "Line 1: Enter a string: ";             //Line 1
    cin.get(ch);                                    //Line 2
    cout << endl;                                   //Line 3
    cout << "Line 4: After first cin.get(ch); "
         << "ch = " << ch << endl;                  //Line 4
 
    cin.get(ch);                                    //Line 5
    cout << "Line 6: After second cin.get(ch); " 
         << "ch = " << ch << endl;                  //Line 6

    cin.putback(ch);                                //Line 7
    cin.get(ch);                                    //Line 8
    cout << "Line 9: After putback and then " 
         << "cin.get(ch); ch = " << ch << endl;     //Line 9
    
    ch = cin.peek();                                //Line 10
    cout << "Line 11: After cin.peek(); ch = "
         << ch << endl;                             //Line 11

    cin.get(ch);                                    //Line 12
    cout << "Line 13: After cin.get(ch); ch = "
         << ch << endl;                             //Line 13

    return 0;
}
