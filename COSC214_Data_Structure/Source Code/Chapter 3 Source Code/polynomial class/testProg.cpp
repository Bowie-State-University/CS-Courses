//****************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use the class polynomialType.
//****************************************************************
 
#include <iostream>                                    //Line 1

#include "polynomialType.h"                            //Line 2

using namespace std;                                   //Line 3

int main()                                             //Line 4
{                                                      //Line 5
    polynomialType p(8);                               //Line 6
    polynomialType q(4);                               //Line 7
    polynomialType t;                                  //Line 8

    cin >> p;                                          //Line 9
    cout << endl << "Line 10: p(x): " << p << endl;    //Line 10

    cout << "Line 11: p(5): " << p(5) << endl << endl; //Line 11

    cin >> q;                                          //Line 12
    cout << endl << "Line 13: q(x): " << q << endl
         << endl;                                      //Line 13

    t = p + q;                                         //Line 14

    cout << "Line 15: p(x) + q(x): " << t << endl;     //Line 15
 
    cout << "Line 16: p(x) - q(x): " << p - q << endl; //Line 16

    return 0;                                          //Line 17
}                                                      //Line 18
