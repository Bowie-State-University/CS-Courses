#include <iostream>
 
using namespace std;

int main()
{
	int num, sum; 
     
	sum = 0;

	cout << "Enter numbers: ";
	cin >> num;

	while (cin)
	{
		if (num < 0)  
		{
			cout << "Negtive number found in the data." << endl;
			cin >> num;
			continue;
		}

		sum = sum + num;
		cin >> num;
	}

	cout << endl;
	cout << "The sum is: " << sum << endl;

	return 0;
}