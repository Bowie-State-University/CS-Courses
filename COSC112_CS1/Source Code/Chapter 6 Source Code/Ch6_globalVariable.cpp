#include <iostream>

using namespace std;

int t;    //global variable

void funOne(int& a); 

int main()
{
    t = 15;                                         //Line 1

    cout << "Line 2: In main: t = " << t << endl;   //Line 2
 
    funOne(t);                                      //Line 3

    cout << "Line 4: In main after funOne: " 
         << " t = " << t << endl;                   //Line 4

    return 0;                                       //Line 5
}

void funOne(int& a)
{
    cout << "Line 6: In funOne: a = " << a 
         << " and t = " << t << endl;              //Line 6

    a = a + 12;                                    //Line 7
    cout << "Line 8: In funOne: a = " << a 
         << " and t = " << t << endl;              //Line 8

    t = t + 13;                                    //Line 9

    cout << "Line 10: In funOne: a = " << a 
         << " and t = " << t << endl;              //Line 10
}
