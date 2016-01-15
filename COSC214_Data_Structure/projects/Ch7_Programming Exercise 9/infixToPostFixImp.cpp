//Implementation File

#include <iostream>
#include <string>
#include "myStack.h"
#include "infixToPostfix.h"

using namespace std;

void infixToPostfix::convertToPostfix()
{
	//your code here

}//end convertToPostfix


bool infixToPostfix::precedence(char opr1, char opr2)
{
	int prec1, prec2;

	if (opr1 == '*' || opr1 =='/')
		prec1 = 2;
	else if(opr1 == '+' || opr1 == '-')
        prec1 = 1;
    else if(opr1 ='(')
        prec1 = 0;

    if (opr2 == '*' || opr2 == '/')
        prec2 = 2;
	else if(opr2 =='+' || opr2 == '-')
        prec2 = 1;

    return(prec1 >= prec2);
}//end precedence

void infixToPostfix::getInfix(string data)
{
    ifx = data;
    convertToPostfix();
}

void infixToPostfix::showInfix()
{
	cout << "Infix: " << ifx << endl;
}


void infixToPostfix::showPostfix()
{
	cout << "Postfix: " << pfx << endl;
}

infixToPostfix::infixToPostfix(string infx)
{
	ifx = infx;
	convertToPostfix();
}



