
#include <iostream> 
#include <vector>

using namespace std; 

int main()                                  //Line 1
{                                           //Line 2
    vector<int> intList;                    //Line 3
    unsigned int i;                         //Line 4

    intList.push_back(13);                  //Line 5
    intList.push_back(75);                  //Line 6
    intList.push_back(28);                  //Line 7
    intList.push_back(35);                  //Line 8

    cout << "Line 9: List Elements: ";      //Line 9

    for (i = 0; i < intList.size(); i++)    //Line 10
        cout << intList[i] << " ";          //Line 11
    cout << endl;                           //Line 12

    for (i = 0; i < intList.size(); i++)    //Line 13
        intList[i] = intList[i] * 2;        //Line 14

    cout << "Line 15: List Elements: ";     //Line 15

    for (i = 0; i < intList.size(); i++)    //Line 16
        cout << intList[i] << " ";          //Line 17

    cout << endl;                           //Line 18

    return 0;                               //Line 19
}                                           //Line 20

