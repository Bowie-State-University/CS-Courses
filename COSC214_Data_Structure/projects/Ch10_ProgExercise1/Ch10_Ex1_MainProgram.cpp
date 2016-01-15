
//Data:  34 77 26 51 39 8 12 67 4 98 123 10 42 -999

#include <iostream>
#include "unorderedLinkedList.h"

using namespace std;

int main()
{
	unorderedLinkedList<int> intList;

	int num;

	cout << "Enter integers ending with -999" << endl;

	cin >> num;
	while(num != -999)
	{
		intList.insertFirst(num);
		cin >> num;
	}

	cout << endl << "List: ";
    intList.print();
    cout << endl;

	intList.linkedSelectionSort();

	cout << endl << "After Sorting List: ";
    intList.print();
    cout << endl;

	return 0;					
}



