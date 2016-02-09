//****************************************************************
// Author: D.S. Malik
// Test Program: class personType
//****************************************************************

#include <iostream>                                       //Line 1
#include <string>                                         //Line 2
#include "personType.h"                                   //Line 3

using namespace std;                                      //Line 4

int main()                                                //Line 5
{                                                         //Line 6
    personType student1("Lisa", "Smith");                 //Line 7
    personType student2;                                  //Line 8
    personType student3;                                  //Line 9

    cout << "Line 10 -- Student 1: ";                     //Line 10
    student1.print();                                     //Line 11
    cout << endl;                                         //Line 12

    student2.setFirstName("Shelly").setLastName("Malik"); //Line 13

    cout << "Line 14 -- Student 2: ";                     //Line 14
    student2.print();                                     //Line 15
    cout << endl;                                         //Line 16

    student3.setFirstName("Cindy");                       //Line 17

    cout << "Line 18 -- Student 3: ";                     //Line 18
    student3.print();                                     //Line 19
    cout << endl;                                         //Line 20

    student3.setLastName("Tomek");                        //Line 21

    cout << "Line 22 -- Student 3: ";                     //Line 22
    student3.print();                                     //Line 23
    cout << endl;                                         //Line 24

    return 0;                                             //Line 25
}                                                         //Line 26
