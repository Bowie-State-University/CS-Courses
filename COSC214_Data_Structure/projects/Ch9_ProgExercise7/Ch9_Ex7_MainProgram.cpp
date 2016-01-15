//78 45 67 22 11 110 300 292 65 89 98 66 109 27 61 71
//10 20 30 35 77 68 15 87 54 57 195 78 25 111 37 83
//10 20 30 35 77 68 110 87 54 57 195 292 65 89 98 300 
//(indexStatusList[hashIndex] != 0 && indexStatusList[hashIndex] != -1)

#include <iostream>
#include "hashT.h"

using namespace std;

int hashFunc(int num);

int main()
{
	hashT<int> intHashTable(19);

	int num;
	int key;
	bool found;

	cout << "Enter 16 integers." << endl;

	for (int i = 0; i < 16; i++)
	{
		cin >> num;
		key = hashFunc(num);
		intHashTable.insert(key, num);
	}

	intHashTable.print();

	cout << "Enter item to be deleted: ";
	cin >> num;
	cout << endl;

	key = hashFunc(num);
	intHashTable.remove(key, num);

	intHashTable.print();

	cout << "Enter item to be searched: ";
	cin >> num;
	cout << endl;

	key = hashFunc(num);
	intHashTable.search(key, num, found);

	if (found)
		cout << "Item found in the list" << endl;
	else
		cout << "Item not in the list." << endl;

	cout << "Enter item to be inserted: ";
	cin >> num;
	cout << endl;

	key = hashFunc(num);
	intHashTable.insert(key, num);

	intHashTable.print();

	return 0;

}

int hashFunc(int num)
{
	return num % 19;
}