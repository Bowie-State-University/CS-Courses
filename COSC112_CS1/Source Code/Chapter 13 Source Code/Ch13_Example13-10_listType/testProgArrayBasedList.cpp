   
//This program shows how to use the class template listType.

#include <iostream>

#include "myString.h"
#include "listType.h"
 
using namespace std;

int main()
{
    listType<int> intList(100);                     //Line 1
    listType<newString> stringList;                 //Line 2

    int index;                                      //Line 3
    int number;                                     //Line 4

    cout << "List 5: Processing the integer list"
         << endl;                                   //Line 5
    cout << "List 6: Enter 5 integers: ";           //Line 6
                                 
    for (index = 0; index < 5; index++)             //Line 7
    {    
        cin >> number;                              //Line 8
        intList.insertAt(number, index);            //Line 9
    }

    cout << endl;                                   //Line 10
    cout << "List 11: intList: ";                   //Line 11
    intList.print();                                //Line 12
    cout << endl;                                   //Line 13

       //Sort intList
    intList.sort();                                 //Line 14

    cout << "Line 15: After sorting, intList: ";    //Line 15
    intList.print();                                //Line 16
    cout << endl;                                   //Line 17

    newString str;                                  //Line 18

    cout << "Line 19: Processing the string list"
         << endl;                                   //Line 19

    cout << "Line 20: Enter 5 strings: ";           //Line 20

    for (index = 0; index < 5; index++)             //Line 21
    {
        cin >> str;                                 //Line 22
        stringList.insertAt(str, index);            //Line 23
    }

    cout << endl;                                   //Line 24
    cout << "Line 25: stringList: ";                //Line 25
    stringList.print();                             //Line 26
    cout << endl;                                   //Line 27

      //Sort stringList
    stringList.sort();                              //Line 28

    cout << "Line 29: After sorting, stringList: "; //Line 29
    stringList.print();                             //Line 30
    cout << endl;                                   //Line 31
    
    int intListSize;                                //Line 32

    cout << "Line 33: Enter the size of the integer "
         << "list: ";                               //Line 33
    cin >> intListSize;                             //Line 34
    cout << endl;                                   //Line 35
   
    listType<int> intList2(intListSize);            //Line 36

    cout << "Line 37: Processing the integer list"
         << endl;                                   //Line 37
    cout << "Line 38: Enter " << intListSize
         << " integers: ";                          //Line 38

    for (index = 0; index < intListSize; index++)   //Line 39
    {
        cin >> number;                              //Line 40
        intList2.insertAt(number, index);           //Line 41
    }

    cout << endl;                                   //Line 42

    cout << "Line 43: intList2: ";                  //Line 43
    intList2.print();                               //Line 44
    cout << endl;                                   //Line 45
 
      //Sort intList2
    intList2.sort();                                //Line 46

    cout << "Line 47: After sorting, intList2: ";   //Line 47
    intList2.print();                               //Line 48
    cout << endl;                                   //Line 49

    cout << "Line 50: Length of intList2: "
         << intList2.getLength() << endl;           //Line 50
    cout << "Line 51: Maximum size of intList2: "
         << intList2.getMaxSize() << endl;          //Line 51

    return 0;
}
