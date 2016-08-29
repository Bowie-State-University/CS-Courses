  
//Template larger

#include <iostream>
#include "myString.h"

using namespace std; 

template <class Type>
Type larger(Type x, Type y);

int main()
{
    cout << "Line 1: Larger of 5 and 6 = "
         << larger(5, 6) << endl;                   //Line 1
    cout << "Line 2: Larger of A and B = "
         << larger('A', 'B') << endl;               //Line 2
    cout << "Line 3: Larger of 5.6 and 3.2 = "
         << larger(5.6, 3.2) << endl;               //Line 3

    newString str1 = "Hello";                       //Line 4
    newString str2 = "Happy";                       //Line 5

    cout << "Line 6: Larger of " << str1 << " and "
         << str2 << " = " << larger(str1, str2)
         << endl;                                   //Line 6

    return 0;
}

template <class Type>
Type larger(Type x, Type y)
{
    if (x >= y)
        return x;
    else
        return y;
}
