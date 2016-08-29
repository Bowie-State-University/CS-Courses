
//Example 6-14: Reference and value parameters
   
#include <iostream>

using namespace std;

void funOne(int a, int& b, char v);
void funTwo(int& x, int y, char& w);

int main()
{
    int num1, num2;
    char ch;

    num1 = 10;                                      //Line 1
    num2 = 15;                                      //Line 2
    ch = 'A';                                       //Line 3

    cout << "Line 4: Inside main: num1 = " << num1
         << ", num2 = " << num2 << ", and ch = " 
         << ch << endl;                             //Line 4

    funOne(num1, num2, ch);                         //Line 5

    cout << "Line 6: After funOne: num1 = " << num1
         << ", num2 = " << num2 << ", and ch = " 
         << ch << endl;                             //Line 6

    funTwo(num2, 25, ch);                           //Line 7

    cout << "Line 8: After funTwo: num1 = " << num1
         << ", num2 = " << num2 << ", and ch = " 
         << ch << endl;                             //Line 8

    return 0;
}

void funOne(int a, int& b, char v)
{
    int one;

    one = a;                                        //Line 9
    a++;                                            //Line 10
    b = b * 2;                                      //Line 11
    v = 'B';                                        //Line 12

    cout << "Line 13: Inside funOne: a = " << a 
         << ", b = " << b << ", v = " << v 
         << ", and one = " << one << endl;          //Line 13
}

void funTwo(int& x, int y, char& w)
{
    x++;                                            //Line 14
    y = y * 2;                                      //Line 15
    w = 'G';                                        //Line 16

    cout << "Line 17: Inside funTwo: x = " << x 
         << ", y = " << y << ", and w = " << w 
         << endl;                                   //Line 17
}
