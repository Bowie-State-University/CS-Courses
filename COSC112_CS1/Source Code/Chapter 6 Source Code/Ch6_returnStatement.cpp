// This program illustrates that a value-returning function
// returns only one value, even if the return statement 
// contains more than one expression. This is a legal, but not 
// a recommended code.

#include <iostream>

using namespace std;
   
int funcRet1();  
int funcRet2(int z);

int main()
{
    int num = 4;									

    cout << "Line 1: The value returned by funcRet1: "
         << funcRet1() << endl;                         // Line 1
    cout << "Line 2: The value returned by funcRet2: "
         << funcRet2(num) << endl;                      // Line 2
    
    return 0;
}

int funcRet1()
{
    int x = 45;

    return 23, x;  //only the value of x is returned
}

int funcRet2(int z)
{
    int a = 2; 
    int b = 3;

    return 2 * a + b, z + b; //only the value of z + b is returned 
}