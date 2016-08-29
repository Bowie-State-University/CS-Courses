 
#include <iostream>
#include <fstream>

using namespace std; 
 
int main()
{
    char ch;                                          //Line 1
    ifstream inFile;                                  //Line 2

    inFile.open("digitsAndAlphabet.txt");             //Line 3

    if (!inFile)                                      //Line 4
    {
       cout << "The input file does not exist. "
            << "The program terminates!!!!" << endl;  //Line 5
       return 1;                                      //Line 6
    }

    inFile.get(ch);                                   //Line 7
    cout << "Line 8: The first byte: " << ch << endl; //Line 8

       //position the reading marker six bytes to the 
       //right of its current position
    inFile.seekg(6L, ios::cur);                       //Line 9 
    inFile.get(ch);  //read the character             //Line 10
    cout << "Line 11: Current byte read: " << ch
         << endl;                                     //Line 11

       //position the reading marker seven bytes 
       //from the beginning
    inFile.seekg(7L, ios::beg);                       //Line 12
    inFile.get(ch);  //read the character             //Line 13
    cout << "Line 14: Seventh byte from the beginning: " 
         << ch << endl;                               //Line 14

       //position the reading marker 26 bytes 
       //from the end
    inFile.seekg(-26L, ios::end);                     //Line 15
    inFile.get(ch);  //read the character             //Line 16
    cout << "Line 17: Byte 26 from the end: " << ch
         << endl;                                     //Line 17

    return 0;                                         //Line 18
}
