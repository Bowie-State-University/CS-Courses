#include <iostream>
 
using namespace std;
 
const int arraySize = 10;
  
int binarySearch(const int list[], int listLength, int searchItem);

int main()
{
	cout << "See Programming Exercise 2 at the end of this chapter. "  
		 << endl;        

	return 0;                                             
}

int binarySearch(const int list[], int listLength, int searchItem) 
{
    int first = 0;
    int last = listLength - 1;
    int mid;

    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if (list[mid] == searchItem)
            found = true;
        else if (list[mid] > searchItem)
            last = mid - 1;
        else
            first = mid + 1;
    }

    if (found) 
        return mid;
    else
        return -1;
}//end binarySearch

