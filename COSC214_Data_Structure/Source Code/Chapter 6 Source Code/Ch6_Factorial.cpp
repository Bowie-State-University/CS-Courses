
#include <iostream>

using namespace std;

int  fact(int num);

int main()
{
    cout << "Factorial of 3 = " << fact(3) << endl;

    return 0;
}

int fact(int num)
{
    if (num == 0)
        return 1;
    else
        return num * fact(num - 1);
}
