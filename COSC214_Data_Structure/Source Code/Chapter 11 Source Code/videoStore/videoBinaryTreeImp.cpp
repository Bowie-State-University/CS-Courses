#include <iostream>
#include <string>
#include "videoBinaryTree.h"

using namespace std;

bool videoBinaryTree::isVideoAvailable(string title) 
{
    cout << "See Programming Exercise 12." << endl;

    return false;
}

void videoBinaryTree::videoCheckIn(string title)
{
	cout << "See Programming Exercise 12." << endl;
}

void videoBinaryTree::videoCheckOut(string title)
{
    cout << "See Programming Exercise 12." << endl;
}

bool videoBinaryTree::videoCheckTitle(string title)
{
    cout << "See Programming Exercise 12." << endl;

    return false;
}

void videoBinaryTree::videoUpdateInStock(string title, int num)
{
    cout << "See Programming Exercise 12." << endl;
}

void videoBinaryTree::videoSetCopiesInStock(string title, 
											int num)
{
    cout << "See Programming Exercise 12." << endl;
}

bool videoBinaryTree::videoSearch(string title)
{
    cout << "See Programming Exercise 12." << endl;

    return false;
}

void videoBinaryTree::searchVideoList(string title, bool& found,
                                   binaryTreeNode<videoType>* &current)
{
    found = false;   
   
    videoType temp;

    temp.setVideoInfo(title, "", "", "", "", "", 0);

    if (root == NULL)  //the tree is empty
        cout << "Cannot search an empty list. " << endl;
    else
    {
        current = root; //set current point to the root node 
                        //of the binary tree
        found = false;  //set found to false

        while (!found && current != NULL) //search the tree
            if (current->info == temp)    //the item is found
                found = true;
            else if(current->info > temp)
                current = current->llink;
            else
                current = current->rlink;
    } //end else
}

void videoBinaryTree::videoPrintTitle()
{
	inorderTitle(root);
}

void videoBinaryTree::inorderTitle(binaryTreeNode<videoType> *p)
{
    if (p != NULL)
    {
        inorderTitle(p->llink);
        p->info.printTitle();
        inorderTitle(p->rlink);
    }
}

