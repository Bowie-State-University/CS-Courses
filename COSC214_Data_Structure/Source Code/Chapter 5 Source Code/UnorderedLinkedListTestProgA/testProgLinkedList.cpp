//This program tests various operation of a linked list
//Hello There Show White Bear Brown Black Green Hat C++
 
#include <iostream>                                 //Line 1
#include <string>                                   //Line 2
#include "unorderedLinkedList.h"                    //Line 3

using namespace std;                                //Line 4

int main()                                          //Line 5
{                                                   //Line 6
    unorderedLinkedList<string> list1, list2;       //Line 7
    string str;                                     //Line 8

    cout << "Line 9: Enter 10 strings." << endl;    //Line 9

    for (int i = 0; i < 10; i++)                    //Line 10
    {                                               //Line 11
        cin >> str;                                 //Line 12
        list1.insertLast(str);                      //Line 13
    }                                               //Line 14

    cout << endl;                                   //Line 15

    cout << "Line 16: list1: ";                     //Line 16
    list1.print();                                  //Line 17
    cout << endl;                                   //Line 18
    cout << "Line 19: Length of list1: " 
         << list1.length() << endl;                 //Line 19

    list2 = list1;	   //test the assignment operator Line 20

    cout << "Line 21: list2: ";                     //Line 21
    list2.print();                                  //Line 22
    cout << endl;                                   //Line 23
    cout << "Line 24: Length of list2: " 
         << list2.length() << endl;                 //Line 24

    cout << "Line 25: Enter the string to be "
         << "deleted: ";                            //Line 25
    cin >> str;                                     //Line 26
    cout << endl;                                   //Line 27

    list2.deleteNode(str);                          //Line 28
	
    cout << "Line 29: After deleting " << str 
         << " list2: " << endl;                     //Line 29
    list2.print();                                  //Line 30
    cout << endl;                                   //Line 31

    cout << "Line 32: Length of list2: " 
         << list2.length() << endl;                 //Line 32

    cout << endl << "Line 33: Output list1 " 
         << "using an iterator" << endl;            //Line 33

    linkedListIterator<string> it;                  //Line 34

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  //Line 35
        cout << *it << " ";                         //Line 36
    cout << endl;                                   //Line 37

    return 0;                                       //Line 38
}                                                   //Line 39



