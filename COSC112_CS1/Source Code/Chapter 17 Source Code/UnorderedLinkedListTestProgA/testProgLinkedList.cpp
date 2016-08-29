//This program tests various operation of a linked list
//Hello There Show White Bear Brown Black Green Hat C++ 
  
#include <iostream>
#include <string>
#include "unorderedLinkedList.h" 

using namespace std;

int main()
{
    unorderedLinkedList<string> list1, list2;       //Line 1
    string str;                                     //Line 2

    cout << "Line 3: Enter 10 strings." << endl;    //Line 3

    for (int i = 0; i < 10; i++)                    //Line 4
    {
        cin >> str;                                 //Line 5
        list1.insertLast(str);                      //Line 6
    }

    cout << endl;                                   //Line 7

    cout << "Line 9: list1: ";                      //Line 8
    list1.print();                                  //Line 9
    cout << endl;                                   //Line 10
    cout << "Line 12: Length of list1: " 
         << list1.length() << endl;                 //Line 11

    list2 = list1;	   //test the assignment operator Line 12

    cout << "Line 16: list2: ";                     //Line 13
    list2.print();                                  //Line 14
    cout << endl;                                   //Line 15
    cout << "Line 17: Length of list2: " 
         << list2.length() << endl;                 //Line 16

    cout << "Line 18: Enter the string to be "
         << "deleted: ";                            //Line 17
    cin >> str;                                     //Line 18
    cout << endl;                                   //Line 19

    list2.deleteNode(str);                          //Line 20
	
    cout << "Line 24: After deleting " << str 
         << " list2: " << endl;                     //Line 21
    list2.print();                                  //Line 22
    cout << endl;                                   //Line 23

    cout << "Line 24: Length of list2: " 
         << list2.length() << endl;                 //Line 24

    cout << endl << "Line 25: Output list1 " 
         << "using an iterator" << endl;            //LIne 25

    linkedListIterator<string> it;                  //Line 26

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  //Line 27
        cout << *it << " ";                         //Line 28
    cout << endl;                                   //Line 29

    return 0;					
}



