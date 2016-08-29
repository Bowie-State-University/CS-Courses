//Program to test the various operations on an ordered linked list
  
#include <iostream>
#include "orderedLinkedList.h"
  
using namespace std;
 
int main()
{
    orderedLinkedList<int> list1, list2;        //Line 1
    int num;                                    //Line 2

    cout << "Line 3: Enter numbers ending "
         << "with -999." << endl;               //Line 3
    cin >> num;                                 //Line 4

    while (num != -999)                         //Line 5
    {
        list1.insert(num);                      //Line 6
        cin >> num;                             //Line 7
    }

    cout << endl;                               //Line 8

    cout << "Line 9: list1: ";                  //Line 9
    list1.print();                              //Line 10
    cout << endl;                               //Line 11

    list2 = list1; //test the assignment operator Line 12

    cout << "Line 13: list2: ";                 //Line 13
    list2.print();                              //Line 14
    cout << endl;                               //Line 15

    cout << "Line 16: Enter the number to be "
         << "deleted: ";                        //Line 16
    cin >> num;                                 //Line 17
    cout << endl;                               //Line 18

    list2.deleteNode(num);                      //Line 19

    cout << "Line 20: After deleting "
         << num << ", list2: " << endl;         //Line 20
    list2.print();                              //Line 21
    cout<<endl;                                 //Line 22

    return 0;					
}



