//  Base address of an array. 
   
//  A sample run of this program is:

//  Line 3: Base address of myList: 0012FEC4
//  Line 4: Base address of yourList: 0012FEA8
//  Line 10: The base address of myList is greater than the
//           base address of  yourList.

//The base address of myList is 0012FEC4. In computer memory the
//addresses are in binary. This is hexadecimal representation of 
//the binary number 00000000000100101111111011000100.
//The decimal representation of this number is 1,244,868. Also
//the decimal representation of 0012FEA8 is 1,244,840.

//Note that the base in hexadecimal representation is 16 and
//the digits of this base are 0,1, 2, 3, 4, 5, 6, 7, 8, 9, A, B
//C, D, E, F. Moreover A in hexadecimal is 10 in decimal, B in 
//hexadecimal is 11 in decimal, and so on. F in hexadecimal is 15 
//in decimal.
//Also note that 0012FEC4 = 0 * 16^7 + 0 * 16^6 + 1 * 16^5 + 2 * 16 ^ 4
//                         + 15 * 16^3 + 14 * 16^2 +12 * 16^1 + 4 * 16^0
//                       = 1,244,868
//Similarly, 0012FEA8 in base 16 (hexadecimal) is 
//           1,244,840 in base 10 (decimal).
//Chapter 17 explains how to convet number from one base to 
//another.

//Note that the memory addresses are computer dependent.
//When you run this program on your computer, you might get 
//different answer.

#include <iostream>

using namespace std;

int main()
{
    int myList[5] = {0, 2, 4, 6, 8};                //Line 1
    int yourList[5];                                //Line 2

    cout << "Line 3: Base address of myList: "  
         << myList << endl;                         //Line 3
    cout << "Line 4: Base address of yourList: " 
         << yourList << endl;                       //Line 4

    if (myList == yourList)                         //Line 5
        cout << "Line 6: The base addresses of "
             << "myList and yourList \n"
             << "        are the same." 
             << endl;                               //Line 6
    else if (myList < yourList)                     //Line 7
        cout << "Line 8: The base address of "
             << "myList is less than the \n"
             <<"         base address of " 
             << "yourList." << endl;                //Line 8
    else                                            //Line 9
        cout << "Line 10: The base address of "
             << "myList is greater than the \n" 
             << "         base address of "
             << " yourList." << endl;               //Line 10

    return 0;
}

