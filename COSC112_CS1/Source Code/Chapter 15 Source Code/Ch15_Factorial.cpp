//Chapter 15: Factorial
 
#include <iostream> 

using namespace std;
 
int  fact(int num);

int main()
{ 
    cout << "Factorial of 6 = " << fact(6) << endl;
    cout << "Factorial of 10 = " << fact(10) << endl;

    return 0;
}

int fact(int num)
{
    if (num == 0)
        return 1;
    else
        return num * fact(num - 1);
}
