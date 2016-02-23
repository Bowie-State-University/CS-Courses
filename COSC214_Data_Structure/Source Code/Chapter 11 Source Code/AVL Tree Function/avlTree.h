#ifndef H_AVLTree
#define H_AVLTree

#include <iostream>

using namespace std;


template <class elemT>
class AVLNode
{
public:
    elemT	info;
    int	bfactor; // balance factor
    AVLNode *llink;
    AVLNode * rlink;
};


template <class elemT>
class AVLTreeType
{
public:
    void insert(const elemT &newItem);
    void rotateToLeft(AVLNode<elemT>* &root);
    void rotateToRight(AVLNode<elemT>* &root);
    void balanceFromLeft(AVLNode<elemT>* &root);
    void balanceFromRight(AVLNode<elemT>* &root);

    void insertIntoAVL(AVLNode<elemT>* &root, 
                       AVLNode<elemT>  *newNode, 
                       bool& isTaller);

    void inorderTraversal();
    void preorderTraversal();

    AVLTreeType();   //default constructor

private:
    AVLNode<elemT>* root;

    void inorder(AVLNode<elemT> *p);
    void preorder(AVLNode<elemT> *p);
};


template <class elemT>
void AVLTreeType<elemT>::rotateToLeft(AVLNode<elemT>* &root)
{
    AVLNode<elemT> *p;  //pointer to the root of the
                        //right subtree of root
    if (root == NULL)
        cerr << "Error in the tree" << endl;
    else if (root->rlink == NULL)
        cerr << "Error in the tree:"
             <<" No right subtree to rotate." << endl;
    else
    {
        p = root->rlink;
        root->rlink = p->llink; //the left subtree of p becomes
                                //the right subtree of root
        p->llink = root; 
        root = p;	//make p the new root node
    }
}//rotateLeft

template <class elemT>
void AVLTreeType<elemT>::rotateToRight(AVLNode<elemT>* &root)
{
    AVLNode<elemT> *p;  //pointer to the root of	
                        //the left subtree of root

    if (root == NULL)
        cerr << "Error in the tree" << endl;
    else if (root->llink == NULL)
        cerr << "Error in the tree:"
             << " No left subtree to rotate." << endl;
    else
    {
        p = root->llink;
        root->llink = p->rlink; //the right subtree of p becomes
                                //the left subtree of root
        p->rlink = root; 
        root = p;	//make p the new root node
    }
}//end rotateRight

template <class elemT>
void AVLTreeType<elemT>::balanceFromLeft(AVLNode<elemT>* &root)
{
    AVLNode<elemT> *p;
    AVLNode<elemT> *w;

    p = root->llink;   //p points to the left subtree of root

    switch (p->bfactor)
    {
    case -1: 
        root->bfactor = 0;
        p->bfactor = 0;
        rotateToRight(root);
        break;

    case 0:  
        cerr << "Error: Cannot balance from the left." << endl;
        break;

    case 1:  
        w = p->rlink;
        switch (w->bfactor)  //adjust the balance factors
        {
        case -1: 
            root->bfactor = 1;
            p->bfactor = 0;
            break;

        case 0:  
            root->bfactor = 0;
            p->bfactor = 0;
            break; 

        case 1:  
            root->bfactor = 0;
            p->bfactor = -1;
        }//end switch

        w->bfactor = 0;	
        rotateToLeft(p);
        root->llink = p;
        rotateToRight(root);
    }//end switch;
}//end balanceFromLeft

template <class elemT>
void AVLTreeType<elemT>::balanceFromRight(AVLNode<elemT>* &root)
{
    AVLNode<elemT> *p;
    AVLNode<elemT> *w;

    p = root->rlink;   //p points to the left subtree of root

    switch (p->bfactor)
    {
    case -1: 
        w = p->llink;
        switch (w->bfactor)  //adjust the balance factors
        {
        case -1: 
            root->bfactor = 0;
            p->bfactor = 1;
            break;

        case 0:  
            root->bfactor = 0;
            p->bfactor = 0;
            break;

        case 1:  
            root->bfactor = -1;
            p->bfactor = 0;
        }//end switch

        w->bfactor = 0;	
        rotateToRight(p);
        root->rlink = p;
        rotateToLeft(root);
        break;

    case 0:  
        cerr << "Error: Cannot balance from the left." << endl;
        break;

    case 1:  
        root->bfactor = 0;
        p->bfactor = 0;
        rotateToLeft(root);
    }//end switch;
}//end balanceFromRight

template <class elemT>
void AVLTreeType<elemT>::insertIntoAVL(AVLNode<elemT>* &root, 
                                AVLNode<elemT>  *newNode, 
                                bool& isTaller)
{
    if (root == NULL)
    {
        root = newNode;
        isTaller = true;
    }
    else if (root->info == newNode->info)
        cerr << "No duplicates are allowed." << endl;
    else if (root->info > newNode->info) //newItem goes in 
                                         //the left subtree
    {
        insertIntoAVL(root->llink, newNode, isTaller);

        if (isTaller) //after insertion, the subtree grew in height
            switch (root->bfactor)
            {
            case -1:
                balanceFromLeft(root);
                isTaller = false;
                break;

            case 0:  
                root->bfactor = -1;
                isTaller = true;
                break;

            case 1:  
                root->bfactor = 0;
                isTaller = false;
            }//end switch
        }//end if
        else
        {
            insertIntoAVL(root->rlink, newNode, isTaller);

            if (isTaller) //after insertion, the subtree grew in
                          //height
                switch (root->bfactor)
                {
                case -1: 
                    root->bfactor = 0;
                    isTaller = false;
                    break;

                case 0:  
                    root->bfactor = 1;
                    isTaller = true;
                    break;

                case 1:  
                    balanceFromRight(root);
                    isTaller = false;
                }//end switch
        }//end else
}//insertIntoAVL


template<class elemT>
void AVLTreeType<elemT>::insert(const elemT &newItem)
{
    bool isTaller = false;
    AVLNode<elemT>  *newNode;

    newNode = new AVLNode<elemT>;
    newNode->info = newItem;
    newNode->bfactor = 0;
    newNode->llink = NULL;
    newNode->rlink = NULL;

    insertIntoAVL(root, newNode, isTaller);
}


template<class elemT>
void AVLTreeType<elemT>::inorderTraversal()
{
    inorder(root);
}

template<class elemT>
void AVLTreeType<elemT>::inorder(AVLNode<elemT> *p)
{
    if (p != NULL)
    {
        inorder(p->llink);
        cout << p->info << " ";
        inorder(p->rlink);
    }
}

template<class elemT>
void AVLTreeType<elemT>::preorderTraversal()
{
	preorder(root);
}

template<class elemT>
void AVLTreeType<elemT>::preorder(AVLNode<elemT> *p)
{
    if (p != NULL)
    {
        cout << p->info << " ";
        preorder(p->llink);
        preorder(p->rlink);
    }
}

template<class elemT>
AVLTreeType<elemT>::AVLTreeType()
{
    root = NULL;
}

#endif