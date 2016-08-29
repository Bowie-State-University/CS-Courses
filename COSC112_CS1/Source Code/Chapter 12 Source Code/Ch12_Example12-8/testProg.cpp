
#include <iostream>
#include "ptrMemberVarType.h"
 
using namespace std;
   
void testCopyConst(ptrMemberVarType temp);

int main()
{
    ptrMemberVarType listOne;                      //Line 1

    int num;                                       //Line 2
    int index;                                     //Line 3

    cout << "Line 4: Enter 5 integers." << endl;   //Line 4

    for (index = 0; index < 5; index++)            //Line 5
    {
        cin >> num;                                //Line 6
        listOne.insertAt(index, num);              //Line 7
    }

    cout << "Line 8: listOne: ";                   //Line 8
    listOne.print();                               //Line 9
    cout << endl;                                  //Line 10

       //Declare listTwo and initialize it using listOne
    ptrMemberVarType listTwo(listOne);             //Line 11

    cout << "Line 12: listTwo: ";                  //Line 12
    listTwo.print();                               //Line 13
    cout << endl;                                  //Line 14

    listTwo.insertAt(5, 34);                       //Line 15
    listTwo.insertAt(2, -76);                      //Line 16

    cout << "Line 17: After modifying listTwo: ";  //Line 17
    listTwo.print();                               //Line 18
    cout << endl;                                  //Line 19

    cout << "Line 20: After modifying listTwo, " 
         << "listOne: ";                           //Line 20
    listOne.print();                               //Line 21
    cout << endl;                                  //Line 22
   
    cout << "Line 23: Calling the function testCopyConst"
         << endl;                                  //Line 23

        //Call function testCopyConst
    testCopyConst(listOne);                        //Line 24

    cout << "Line 25: After a call to the function "
         << "testCopyConst, " << endl
         << "         listOne is: ";               //Line 25

    listOne.print();                               //Line 26
    cout << endl;                                  //Line 27

    return 0;                                      //Line 28
}

void testCopyConst(ptrMemberVarType temp)
{
    cout << "Line 29: *** Inside the function "
         << "testCopyConst ***" << endl;           //Line 29

    cout << "Line 30: Object temp data: ";         //Line 30
    temp.print();                                  //Line 31
    cout << endl;                                  //Line 32

    temp.insertAt(3, -100);                        //Line 33
    cout << "Line 34: After changing temp: ";      //Line 34
    temp.print();                                  //Line 35
    cout << endl;                                  //Line 36

    cout << "Line 37: *** Exiting the function "
         << "testCopyConst ***" << endl;           //Line 37
}
