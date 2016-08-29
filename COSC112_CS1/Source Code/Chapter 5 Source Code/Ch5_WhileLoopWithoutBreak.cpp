#include <iostream>
 
using namespace std;
    
int main() 
{ 
	int num, sum;
	bool isNegative;

	sum = 0;
	isNegative = false;  

	cout << "Enter numbers: ";
	cin >> num;

	while (cin && !isNegative)
	{
		if (num < 0)   //if num is negative, terminate the loop
                       //after this iteration
		{
			cout << "Negative number found in the data." << endl;
			isNegative = true;
		}
		else
		{
			sum = sum + num;
			cin >> num;
		}
	}

	cout << endl;
	cout << "The sum is: " << sum << endl;

	return 0;
}