

//***********************************************************
// Author: D.S. Malik
//
// This program illustrates how a use a vector container in a
// program.
//***********************************************************

#include <iostream>                                  //Line 1
#include <vector>                                    //Line 2

using namespace std;                                 //Line 3

int main()                                           //Line 4
{                                                    //Line 5
    vector<int>  intList;                            //Line 6
    
    intList.push_back(13);                           //Line 7
    intList.push_back(75);                           //Line 8
    intList.push_back(28);                           //Line 9
    intList.push_back(35);                           //Line 10

    cout << "Line 11: List Elements: ";              //Line 11
    for (int i = 0; i < 4; i++)                      //Line 12
        cout << intList[i] << " ";                   //Line 13
    cout << endl;                                    //Line 14

    for (int i = 0; i < 4; i++)                      //Line 15
        intList[i] *= 2;                             //Line 16

    cout << "Line 17: List Elements: ";              //Line 17
    for (int i = 0; i < 4; i++)                      //Line 18
        cout << intList[i] << " ";                   //Line 19
    cout << endl;                                    //Line 20

    vector<int>::iterator  listIt;                   //Line 21

    cout << "Line 22: List Elements: ";              //Line 22
    for (listIt = intList.begin();
                  listIt != intList.end(); ++listIt) //Line 23
        cout << *listIt << " ";                      //Line 24
    cout << endl;                                    //Line 25

    listIt = intList.begin();                        //Line 26
    ++listIt;                                        //Line 27
    ++listIt;                                        //Line 28
    intList.insert(listIt, 88);                      //Line 29

    cout << "Line 30: List Elements: ";              //Line 30
    for (listIt = intList.begin(); 
                  listIt != intList.end(); ++listIt) //Line 31
        cout << *listIt << " ";                      //Line 32
    cout << endl;                                    //Line 33

    return 0;                                        //Line 34
}                                                    //Line 35
