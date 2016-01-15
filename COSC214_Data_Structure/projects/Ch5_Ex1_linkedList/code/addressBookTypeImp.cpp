//addressBookTypeImp.cpp

#include <iostream>
#include <fstream>
#include <string>
#include "addressBookType.h"
 
using namespace std;

void addressBookType::print() const
{
	nodeType<extPersonType>* current = first;

	while (current != NULL)
	{
		current->info.printInfo();
		cout << endl;
		current= current->link;
	}
}

void addressBookType::printNameInTheMonth(int month)
{
	nodeType<extPersonType>* current = first;

	while (current != NULL)
	{
		if (current->info.isMonth(month))
		{
			current->info.print();
			cout << endl;
		}
		current = current->link;
	}
}

void addressBookType::printInfoOf(string lName) 
{
	nodeType<extPersonType>* location = searchList(lName);

	if (location != NULL)
		location->info.printInfo();
	else
		cout << lName << " is not in address book." << endl;
}

void addressBookType::printNamesWithStatus(string status)
{
	nodeType<extPersonType>* current = first;

	while (current != NULL)
	{
		if (current->info.isStatus(status))
		{
			current->info.print();
			cout << endl;
		}
		current = current->link;
	}
}

void addressBookType::printNamesBetweenLastNames(string last1, 
												 string last2)
{
	string lName;

	nodeType<extPersonType>* current = first;

	while(current != NULL)
	{
		lName = current->info.getLastName();

		if (last1 <= lName && lName <= last2)
		{
			current->info.print();
			cout << endl;
		}
		current = current->link;
	}
}

void addressBookType::insertNode(const extPersonType& eP)
{
	orderedLinkedList<extPersonType>::insert(eP);
}

void addressBookType::searchName(string lName)
{
	nodeType<extPersonType>* location = searchList(lName);

	if (location != NULL)
		cout << lName << " is in the address book" << endl;
	else
		cout << lName << " is not in the address book" << endl;
}


nodeType<extPersonType>* addressBookType::searchList(string lName)
{
	nodeType<extPersonType>* current = first;
	bool found = false;

	while (current != NULL)
	{
		if (current->info.isLastName(lName))
		{
			found = true;
			break;
		}

		current = current->link;
	}

	return current;
}

void addressBookType::saveData(ofstream& outFile)
{
	//add your code here
}


addressBookType::addressBookType()
{
}