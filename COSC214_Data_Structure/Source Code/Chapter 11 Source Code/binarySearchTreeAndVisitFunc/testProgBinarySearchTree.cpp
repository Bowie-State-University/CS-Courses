
//**************************************************************
// Author: D.S. Malik
//
// This program illustrates how to pass a user-defined function
// as a parameter to the binary tree traversal algorithms.
//**************************************************************

#include <iostream>                                     //Line 1
#include "binarySearchTree.h"                           //Line 2

using namespace std;                                    //Line 3

void print(int& x);                                     //Line 4
void update(int& x);                                    //Line 5

int main()                                              //Line 6
{                                                       //Line 7
    bSearchTreeType<int>  treeRoot;                     //Line 8
 
    int num;                                            //Line 9

    cout << "Line 10: Enter numbers ending with -999" 	
         << endl;                                       //Line 10
    cin >> num;                                         //Line 11

    while (num != -999)                                 //Line 12
    {                                                   //Line 13
        treeRoot.insert(num);                           //Line 14
        cin >> num;                                     //Line 15
    }                                                   //Line 16

    cout << endl << "Line 17: Tree nodes in inorder: "; //Line 17
    treeRoot.inorderTraversal(print);                   //Line 18
    cout << endl << "Line 19: Tree Height: "
         << treeRoot.treeHeight()
         << endl << endl;                               //Line 19

    cout << "Line 20: ******* Update Nodes *******"
         << endl;                                       //Line 20
    treeRoot.inorderTraversal(update);                  //Line 21

    cout << "Line 22: Tree nodes in inorder after "
         << "the update: " << endl << "         ";      //Line 22
    treeRoot.inorderTraversal(print);                   //Line 23
    cout << endl<<"Line 24: Tree Height: "
         << treeRoot.treeHeight() << endl;              //Line 24

    return 0;                                           //Line 25
}                                                       //Line 26

void print(int& x)                                      //Line 27
{                                                       //Line 28
    cout << x << " ";                                   //Line 29
}                                                       //Line 30

void update(int& x)                                     //Line 31
{                                                       //Line 32
    x = 2 * x;                                          //Line 33
}                                                       //Line 34
