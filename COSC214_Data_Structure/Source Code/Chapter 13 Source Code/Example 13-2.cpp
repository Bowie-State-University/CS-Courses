
//**************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use the functions pair and 
// make_pair.
//**************************************************************

#include <algorithm>                                    //Line 1
#include <iostream>                                     //Line 2
#include <utility>                                      //Line 3
#include <string>                                       //Line 4
using namespace std;                                    //Line 5

void funcExp(pair<int,int>);                            //Line 6
void funcExp1(pair<int, char>);                         //Line 7
void funcExp2(pair<int, string> x);                     //Line 8
void funcExp3(pair<int, char *> x);                     //Line 9

int main()                                              //Line 10
{                                                       //Line 11
    pair<int, double> x(50, 87.67);                     //Line 12
    pair<string, string> name("John", "Johnson");       //Line 13

    cout <<  "Line 14: " << x.first << " " << x.second
         << endl;                                       //Line 14
    cout << "Line 15: " << name.first << " "
          << name.second << endl;                       //Line 15

    pair<int, int> y;                                   //Line 16
    cout << "Line 17: " << y.first << " " << y.second
         << endl;                                       //Line 17

    pair<string, string> name2;                         //Line 18
    cout << "Line 19: " << name2.first << "***"
         << name2.second << endl;                       //Line 19
    funcExp(make_pair(75, 80));                         //Line 20
    funcExp1(make_pair(87, 'H'));                       //Line 21
    funcExp1(pair<int, char>(198,'K'));                 //Line 22
    funcExp2(pair<int, string>(250, "Hello"));          //Line 23
    funcExp2(make_pair(65,string("Hello There")));      //Line 24
    funcExp3(pair<int, char *>(35, "Hello World"));     //Line 25
    funcExp3(make_pair(22, (char *)("Sunny")));         //Line 26

    return 0;                                           //Line 27
}                                                       //Line 28

void funcExp(pair<int, int> x)                          //Line 29
{                                                       //Line 30
    cout << "Line 31: " << "In funcExp: " << x.first
         << " " << x.second << endl;                    //Line 31
}                                                       //Line 32

void funcExp1(pair<int, char> x)                        //Line 33 
{                                                       //Line 34
    cout << "Line 36: " << "In funcExp1: " << x.first   //Line 35
         << " " << x.second << endl;                    //Line 36
}                                                       //Line 37 

void funcExp2(pair<int, string> x)                      //Line 38
{                                                       //Line 39
    cout << "Line 40: " << "In funcExp2: " << x.first
         << " " << x.second << endl;                    //Line 40
}                                                       //Line 41
void funcExp3(pair<int, char *> x)                      //Line 42
{                                                       //Line 43
    cout << "Line 44: " << "In funcExp3: " << x.first
         << " " << x.second << endl;                    //Line 44
}                                                       //Line 45


