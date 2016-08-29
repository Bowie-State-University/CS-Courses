
#include <iostream> 
#include <vector>

using namespace std; 

void doubleList(vector<int> &list);                 //Line 1 
void printList(const vector<int> &list);            //Line 2

int main()                                          //Line 3
{                                                   //Line 4
    vector<int> intList;                            //Line 5
    
    intList.push_back(13);                          //Line 6
    intList.push_back(75);                          //Line 7
    intList.push_back(28);                          //Line 8
    intList.push_back(35);                          //Line 9

    cout << "intList: ";                            //Line 10
    printList(intList);                             //Line 11

    doubleList(intList);                            //Line 12

    cout << "intList after multiplying each " 
         << "element by 2: ";                       //Line 13
     printList(intList);                            //Line 14

    cout << endl;                                   //Line 15

    return 0;                                       //Line 16
}                                                   //Line 17

void printList(const vector<int> &list)             //Line 18
{                                                   //Line 19
    for (auto p : list)                             //Line 20
        cout << p << " ";                           //Line 21
    cout << endl;                                   //Line 22
}                                                   //Line 23

void doubleList(vector<int> &list)                  //Line 24
{                                                   //Line 25
    for (auto &p : list)                            //Line 26
        p = p * 2;                                  //Line 27
}                                                   //Line 28

