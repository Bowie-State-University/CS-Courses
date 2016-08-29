//This program tests various operation of a linked list
//34 62 21 90 66 53 88 24 10 -999 
  
#include <iostream>
#include "unorderedLinkedList.h"

using namespace std; 

int main()
{
    unorderedLinkedList<int> list1, list2;          //Line 1
    int num;                                        //Line 2

    cout << "Line 3: Enter integers ending " 
         << "with -999" << endl;                    //Line 3
    cin >> num;                                     //Line 4

    while (num != -999)                             //Line 5
    {
        list1.insertLast(num);                      //Line 6
        cin >> num;                                 //Line 7
    }

    cout << endl;                                   //Line 8

    cout << "Line 9: list1: ";                      //Line 9
    list1.print();                                  //Line 10
    cout << endl;                                   //Line 11
    cout << "Line 12: Length of list1: " 
         << list1.length() << endl;                 //Line 12

    list2 = list1;	   //test the assignment operator Line 13

    cout << "Line 16: list2: ";                     //Line 14
    list2.print();                                  //Line 15
    cout << endl;                                   //Line 16
    cout << "Line 17: Length of list2: " 
         << list2.length() << endl;                 //Line 17

    cout << "Line 18: Enter the number to be "
         << "deleted: ";                            //Line 18
    cin >> num;                                     //Line 19
    cout << endl;                                   //Line 20

    list2.deleteNode(num);                          //Line 21
	
    cout << "Line 22: After deleting " << num 
         << " list2: " << endl;                     //Line 22
    list2.print();                                  //Line 23
    cout << endl;                                   //Line 24

    cout << "Line 25: Length of list2: " 
         << list2.length() << endl;                 //Line 25

    cout << endl << "Line 26: Output list1 " 
         << "using an iterator" << endl;            //LIne 26

    linkedListIterator<int> it;                     //Line 27

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  //Line 28
        cout << *it << " ";                         //Line 29
    cout << endl;                                   //Line 30

    return 0;					
}



