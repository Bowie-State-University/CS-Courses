
//*************************************************************
// Author: D.S. Malik
//
// This program shows how STL arithmetic function objects work.
//*************************************************************

#include <iostream>                                     //Line 1
#include <string>                                       //Line 2
#include <algorithm>                                    //Line 3
#include <numeric>                                      //Line 4
#include <iterator>                                     //Line 5
#include <vector>                                       //Line 6
#include <functional>                                   //Line 7

using namespace std;                                    //Line 8

int funcAdd(plus<int>, int, int);                       //Line 9

int main()                                              //Line 10
{                                                       //Line 11
   plus<int> addNum;                                    //Line 12
   int num = addNum(34, 56);                            //Line 13

   cout << "Line 14: num = " << num << endl;            //Line 14

   plus<string> joinString;                             //Line 15

   string str1 = "Hello ";                              //Line 16
   string str2 = "There";                               //Line 17

   string str = joinString(str1, str2);                 //Line 18
 
   cout << "Line 19: str = " << str << endl;            //Line 19
   cout << "Line 20: Sum of 34 and 26 = "
        << funcAdd(addNum, 34, 26) << endl;             //Line 20

   int list[8] = {1, 2, 3, 4, 5, 6, 7, 8};              //Line 21

   vector<int> intList(list, list + 8);                 //Line 22
   ostream_iterator<int> screenOut(cout, " ");          //Line 23

   cout << "Line 24: intList: ";                        //Line 24
   copy(intList.begin(), intList.end(), screenOut);     //Line 25
   cout << endl;                                        //Line 26

        //accumulate
   int sum = accumulate(intList.begin(), 
                        intList.end(), 0);              //Line 27

   cout << "Line 28: Sum of the elements of intList = "
        << sum << endl;                                 //Line 28

   int product = accumulate(intList.begin(), intList.end(), 
                            1, multiplies<int>());      //Line 29

   cout << "Line 30: Product of the elements of intList = "
        << product << endl;                             //Line 30

   return 0;                                            //Line 31
}                                                       //Line 32

int funcAdd(plus<int> sum, int x, int y)                //Line 33
{                                                       //Line 34
    return sum(x, y);                                   //Line 35
}                                                       //Line 36
