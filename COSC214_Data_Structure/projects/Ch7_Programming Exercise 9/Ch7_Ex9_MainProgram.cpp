//Main program infix to postfix

#include <iostream>
#include <fstream>
#include <cstring>
#include "myStack.h"
#include "infixToPostfix.h"

using namespace std;

int main()
{

	infixToPostfix  InfixExp;
	string infix;

	ifstream infile;

	infile.open("Ch7_infixData.txt");

	if (!infile)
	{
		cout << "Cannot open input file. Program terminates!!!" << endl;
		return 1;
	}

	getline(infile, infix);

	while (infile)
	{
		InfixExp.getInfix(infix);
		InfixExp.showInfix();
		InfixExp.showPostfix();
		cout << endl;

		getline(infile, infix);
	}

	infile.close();

	return 0;
}

