  
#include <iostream>
#include <vector>
 
using namespace std;
   
int main()
{
    vector<int> intList;                        //Line 1
    int i;                                      //Line 2
 
    intList.push_back(13);                      //Line 3
    intList.push_back(75);                      //Line 4
    intList.push_back(28);                      //Line 5
    intList.push_back(35);                      //Line 6

    cout << "Line 7: List elements: ";          //Line 7
    for(i = 0; i < 4; i++)                      //Line 8
        cout << intList[i] << " ";              //Line 9
    cout << endl;                               //Line 10
 
    for(i = 0; i < 4; i++)                      //Line 11
        intList[i] *= 2;                        //Line 12

    cout << "Line 13: List elements: ";         //Line 13
    for(i = 0; i < 4; i++)                      //Line 14
        cout << intList[i] << " ";              //Line 15
    cout << endl;                               //Line 16

    vector<int>::iterator listIt;               //Line 17

    cout << "Line 18: List elements: ";         //Line 18
    for (listIt = intList.begin(); 
           listIt != intList.end(); ++listIt)   //Line 19
        cout << *listIt << " ";                 //Line 20
    cout << endl;                               //Line 21 

    listIt = intList.begin();                   //Line 22
    ++listIt;                                   //Line 23
    ++listIt;                                   //Line 24

      //Insert 88 at the position specified 
      //by listIt
    intList.insert(listIt, 88);                 //Line 25

    cout << "Line 25: List elements: ";         //Line 26
    for (listIt = intList.begin(); 
           listIt != intList.end(); ++listIt)   //Line 27
        cout << *listIt << " ";                 //Line 28
    cout << endl;                               //Line 29

    return 0;
}
