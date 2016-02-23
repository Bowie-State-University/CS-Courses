
//*************************************************************
// Author: D.S. Malik
//
// This program shows how the STL functions generate and 
// generate_n work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <algorithm>                                    //Line 2
#include <iterator>                                     //Line 3
#include <vector>                                       //Line 4

using namespace std;                                    //Line 5

int nextNum();                                          //Line 6

int main()                                              //Line 7
{                                                       //Line 8
   vector<int> vecList(8);                              //Line 9
   ostream_iterator<int> screen(cout, " ");             //Line 10

   generate(vecList.begin(), vecList.end(), nextNum);   //Line 11

   cout << "Line 12: vecList after filling with "
        << "numbers: ";                                 //Line 12

   copy(vecList.begin(), vecList.end(), screen);        //Line 13
   cout << endl;                                        //Line 14

   generate_n(vecList.begin(), 3, nextNum);             //Line 15

   cout << "Line 16: vecList, after filling the first "
        << "three elements " << endl
        << "        with the next number: ";            //Line 16
   copy(vecList.begin(), vecList.end(), screen);        //Line 17
   cout << endl;                                        //Line 18

   return 0;                                            //Line 19
}                                                       //Line 20

int nextNum()                                           //Line 21
{                                                       //Line 22
    static int n = 1;                                   //Line 23

    return n++;                                         //Line 24
}                                                       //Line 25
