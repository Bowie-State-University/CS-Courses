
// Specification file for InfixToPostfix.h

#ifndef H_InfixToPostfix
#define H_InfixToPostfix

#include <string>

using namespace std;

class infixToPostfix
{
public:
	void convertToPostfix();
	bool precedence(char opr1, char opr2);
	void getInfix(string);
	void showInfix();
	void showPostfix();
	infixToPostfix(string = ""); //Default constructor
		
private:
	string  ifx;
	string  pfx;
};
  
#endif



