//addressBookType.h
 
#ifndef H_addressBookType
#define H_addressBookType

#include <iostream>
#include <fstream>
#include <string>
#include "extPersonType.h"
#include "orderedLinkedList.h"

using namespace std;

class addressBookType: public orderedLinkedList<extPersonType>
{
public:
	void print() const;

	void printNameInTheMonth(int month);
	void printInfoOf(string lName);
	void printNamesWithStatus(string status);

	void printNamesBetweenLastNames(string last1, 
									string last2);
 
	void insertNode(const extPersonType& eP);

	void searchName(string lName);

	void saveData(ofstream&);

	addressBookType();

private:
	nodeType<extPersonType>* searchList(string lName);
};

#endif
