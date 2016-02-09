
//*************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use the STL class stack in 
// a program.
//*************************************************************

#include <iostream>                                  //Line 1
#include <stack>                                     //Line 2

using namespace std;                                 //Line 3

int main()                                           //Line 4
{                                                    //Line 5
    stack<int>  intStack;                            //Line 6

    intStack.push(16);                               //Line 7
    intStack.push(8);                                //Line 8
    intStack.push(20);                               //Line 9
    intStack.push(3);                                //Line 10

    cout << "Line 11: The top element of intStack: "
         << intStack.top() << endl;                  //Line 11

    intStack.pop();                                  //Line 12

    cout << "Line 13: After the pop operation, the "
         << " top element of intStack: "
         << intStack.top() << endl;                  //Line 13

    cout << "Line 14: intStack elements: ";          //Line 14

    while (!intStack.empty())                        //Line 15
    {                                                //Line 16
        cout << intStack.top() << " ";               //Line 17
        intStack.pop();                              //Line 18
    }                                                //Line 19

    cout << endl;                                    //Line 20

    return 0;                                        //Line 21
}                                                    //Line 22
