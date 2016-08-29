// Two-dimensional arrays as parameters to functions.
  
#include <iostream> 
#include <iomanip>
   
using namespace std;

int max(int list[]);

int main() 
{
    int numList[] = {23, 5, 6, 15, 18, 4, 16, 24, 67,
                     72, 54, 87, 76, 11, 100, 12, 34};    //Line 1

    auto maxNum = numList[0];

    for (auto num : numList)
        if (num > maxNum)
            maxNum = num;

    cout << "The largest number is : " << maxNum << endl;

    return 0;
}

int max(int list[])
{
    int maxNum = list[0];

    int *p = &list[0];

    int x[25];

    for (auto num : x)
        if (num > maxNum)
            maxNum = num;
    return maxNum;
}

