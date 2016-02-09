//****************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use the class arrayListType.
//****************************************************************
 
#include <iostream>                                       //Line 1

#include <string>                                         //Line 2
#include "arrayListType.h"                                //Line 3

using namespace std;                                      //Line 4

int main()                                                //Line 5
{                                                         //Line 6
    arrayListType<int> intList(100);                      //Line 7
    arrayListType<string> stringList;                     //Line 8

    int number;                                           //Line 9

    cout << "List 10: Enter 5 integers: ";                //Line 10

    for (int counter = 0; counter < 5; counter++)         //Line 11
    {                                                     //Line 12
        cin >> number;                                    //Line 13
        intList.insertAt(counter, number);                //Line 14
    }                                                     //Line 15

    cout << endl;                                         //Line 16
    cout<<"List 19: The list you entered is: ";           //Line 17
    intList.print();                                      //Line 18
    cout << endl;                                         //Line 19

    cout << "Line 20: Enter the item to be deleted: ";    //Line 20
    cin >> number;                                        //Line 21
    intList.remove(number);                               //Line 22
    cout << "Line 23: After removing " << number
         << ", the list is:" << endl;                     //Line 23
    intList.print();                                      //Line 24
    cout << endl;                                         //Line 25

    string str;                                           //Line 26

    cout << "Line 27: Enter 5 strings: ";                 //Line 27

    for (int counter = 0; counter < 5; counter++)         //Line 28
    {                                                     //Line 29
        cin >> str;                                       //Line 30
        stringList.insertAt(counter, str);                //Line 31
    }                                                     //Line 32

    cout << endl;                                         //Line 33
    cout << "Line 34: The list you entered is: " << endl; //Line 34
    stringList.print();                                   //Line 35
    cout << endl;                                         //Line 36

    cout << "Line 37: Enter the string to be deleted: ";  //Line 37
    cin >> str;                                           //Line 38
    stringList.remove(str);                               //Line 39
    cout << "Line 40: After removing " << str
         << ", the list is:" << endl;                     //Line 40
    stringList.print();                                   //Line 41
    cout << endl;                                         //Line 42

    return 0;                                             //Line 43
}                                                         //Line 44

