  
#include <iostream>
#include <stack>

using namespace std;

int main()  
{
    stack<int> intStack;                         //Line 1

    intStack.push(16);                           //Line 2
    intStack.push(8);                            //Line 3
    intStack.push(20);                           //Line 4
    intStack.push(3);                            //Line 5

    cout << "Line 6: The top element of "
         << "intStack: " << intStack.top()
         << endl;                                //Line 6

    intStack.pop();                              //Line 7

    cout << "Line 8: After the pop operation, "
         << "the top element of intStack: "
         << intStack.top() << endl;              //Line 8

    cout << "Line 9: intStack elements: ";       //Line 9

    while (!intStack.empty())                    //Line 10
    {
        cout << intStack.top() << " ";           //Line 11
        intStack.pop();                          //Line 12
    }

    cout << endl;                                //Line 13

    return 0;
}
