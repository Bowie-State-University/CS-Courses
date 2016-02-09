

//**************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use selection sort in a 
// program.
//**************************************************************

#include <iostream>                                      //Line 1
#include "arrayListType.h"                               //Line 2

using namespace std;                                     //Line 3

int main()                                               //Line 4
{                                                        //Line 5
    arrayListType<int> list;                             //Line 6
    int num;                                             //Line 7

    cout << "Line 8: Enter numbers ending with -999"
         << endl;                                        //Line 8

    cin >> num;                                          //Line 9

    while (num != -999)                                  //Line 10
    {                                                    //Line 11
        list.insert(num);                                //Line 12
        cin >> num;                                      //Line 13
    }                                                    //Line 14

    cout << "Line 15: The list before sorting:" << endl; //Line 15
    list.print();                                        //Line 16
    cout << endl;                                        //Line 17

    list.selectionSort();                                //Line 18

    cout << "Line 19: The list after sorting:" << endl;  //Line 19
    list.print();                                        //Line 20
    cout << endl;                                        //Line 21

    return 0;                                            //Line 22
}                                                        //Line 23
