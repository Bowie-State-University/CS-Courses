//This program tests various operation of a linked list
 
#include <iostream>
#include "newClock.h" 
#include "unorderedLinkedList.h"
 
using namespace std; 

int main()
{
    unorderedLinkedList<clockType> list1, list2;    //Line 1
    clockType cl;                                   //Line 2

    cl.setTime(5, 17, 32);                          //Line 3
    list1.insertLast(cl);                           //Line 4
    cl.setTime(18, 27, 55);                         //Line 5
    list1.insertLast(cl);                           //Line 6
    cl.setTime(3, 11, 6);                           //Line 7
    list1.insertLast(cl);                           //Line 8
    cl.setTime(22, 18, 25);                         //Line 9
    list1.insertLast(cl);                           //Line 10
    cl.setTime(11, 4, 25);                          //Line 11
    list1.insertLast(cl);                           //Line 12
    cl.setTime(6, 51, 44);                          //Line 13
    list1.insertLast(cl);                           //Line 14

    cout << "Line 9: list1: ";                      //Line 15
    list1.print();                                  //Line 16
    cout << endl;                                   //Line 17
    cout << "Line 12: Length of list1: " 
         << list1.length() << endl;                 //Line 18

    list2 = list1;	   //test the assignment operator Line 19

    cout << "Line 16: list2: ";                     //Line 20
    list2.print();                                  //Line 21
    cout << endl;                                   //Line 22
    cout << "Line 17: Length of list2: " 
         << list2.length() << endl;                 //Line 23

    int hours, minutes, seconds;                    //Line 24

    cout << "Line 18: Enter the hours, minutes, " 
         << "and seconds of the time to be "
         << "deleted: ";                            //Line 25
    cin >> hours >> minutes >> seconds;             //Line 26
    cout << endl;                                   //Line 27

    cl.setTime(hours, minutes, seconds);            //Line 28

    list2.deleteNode(cl);                           //Line 29
	
    cout << "Line 30: After deleting " << cl 
         << " list2: " << endl;                     //Line 30
    list2.print();                                  //Line 31
    cout << endl;                                   //Line 32

    cout << "Line 33: Length of list2: " 
         << list2.length() << endl;                 //Line 33

    cout << endl << "Line 34: Output list1 " 
         << "using an iterator" << endl;            //LIne 34

    linkedListIterator<clockType> it;               //Line 35

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  //Line 36
        cout << *it << " ";                         //Line 37
    cout << endl;                                   //Line 38

    return 0;					
}



