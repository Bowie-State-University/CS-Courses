// This program illustrates how to use a sequential search in a
// program.

#include <iostream>                                    //Line 1

using namespace std;                                   //Line 2

const int ARRAY_SIZE = 10;                             //Line 3

int seqSearch(const int list[], int listLength, 
              int searchItem);                         //Line 4

int main()                                             //Line 5
{                                                      //Line 6
    int intList[ARRAY_SIZE];                           //Line 7
    int number;                                        //Line 8

    cout << "Line 9: Enter " << ARRAY_SIZE
         << " integers." << endl;                      //Line 9

    for (int index  = 0; index < ARRAY_SIZE; index++)  //Line 10
        cin >> intList[index];                         //Line 11

    cout << endl;                                      //Line 12

    cout << "Line 13: Enter the number to be " 
         << "searched: ";                              //Line 13
    cin >> number;                                     //Line 14
    cout << endl;                                      //Line 15
     
    int pos = seqSearch(intList, ARRAY_SIZE, number);  //Line 16

    if (pos!= -1)                                      //Line 17
        cout <<"Line 18: " << number 
             << " is found at index " << pos
             << endl;                                  //Line 18
    else                                               //Line 19
        cout << "Line 20: " << number 
             << " is not in the list." << endl;        //Line 20

    return 0;                                          //Line 21
}                                                      //Line 22

int seqSearch(const int list[], int listLength, int searchItem)
{
    int loc;
    bool found = false;

    loc = 0;

    while (loc < listLength && !found)
        if (list[loc] == searchItem)
            found = true;
        else
              loc++;
 
    if (found)
        return loc;
    else
        return -1;

}
