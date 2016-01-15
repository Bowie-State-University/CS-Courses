//Chapter 6: Programming Exercise 5

#include <iostream>

using namespace std;

int sumArray(const int list[], int first, int length);

int main()
{
	int list[10]={1,2,3,4,5,6,7,8,9,10};
	int listB[1] = {5}; 

	cout << "Sum list = " << sumArray(list,0,10) << endl;

	cout << "Sum listB = " << sumArray(listB,0,1) << endl;

	return 0;
}


int sumArray(const int list[], int first, int length)
{
	//add your code here
}
