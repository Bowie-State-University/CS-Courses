//Example 6-12
//Program illustrating how a value parameter works.
  
#include <iostream>

using namespace std; 

void funcValueParam(int num);

int main()
{
    int number = 6;                                 //Line 1

    cout << "Line 2: Before calling the function "
         << "funcValueParam, number = " << number
         << endl;                                   //Line 2

    funcValueParam(number);                         //Line 3

    cout << "Line 4: After calling the function "
         << "funcValueParam, number = " << number
         << endl;                                   //Line 4

	return 0;
}

void funcValueParam(int num)
{
    cout << "Line 5: In the function funcValueParam, "
         << "before changing, num = " << num
         << endl;                                   //Line 5

    num = 15;                                       //Line 6

    cout << "Line 7: In the function funcValueParam, "
         << "after changing, num = " << num
         << endl;                                   //Line 7
}
