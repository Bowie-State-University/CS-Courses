
//Data
//68 43 10 56 77 82 61 82 33 56 72 66 99 88 12 6 7 21 -999

#include <iostream>
#include "binarySearchTree.h"

using namespace std;

int main()
{
	bSearchTreeType<int>  tree1;
	bSearchTreeType<int>  tree2;
	bSearchTreeType<int>  tree3;

	int num;

	cout << "Enter numbers ending with -999" << endl;
	cin >> num;

	while (num != -999)
	{
		tree1.insert(num);
		cin >> num;
	}

	cout << endl << "tree1 nodes in postorder: ";
	tree1.insertPostorder(tree2);
	cout << endl;

	cout << endl << "tree2 nodes in preorder: ";
	tree2.insertPreorder(tree3);
	cout << endl;

	cout << endl << "tree3 nodes in inorder: ";
	tree3.inorderTraversal();
	cout << endl;


	cout << "tree1 height: " << tree1.treeHeight() << endl;
	cout << "tree1 leaves: " << tree1.treeLeavesCount() << endl;
	cout << "tree2 height: " << tree2.treeHeight() << endl;
	cout << "tree2 leaves: " << tree2.treeLeavesCount() << endl;
	cout << "tree3 height: " << tree3.treeHeight() << endl;	
	cout << "tree3 leaves: " << tree3.treeLeavesCount() << endl;
	cout << endl;


	return 0;
}