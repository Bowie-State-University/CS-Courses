
#include <iostream>

using namespace std;

void moveDisks(int count, int needle1, int needle3, int needle2);

int main()
{
    cout << "Write a test program." << endl;

    return 0;
}

void moveDisks(int count, int needle1, int needle3, int needle2)
{
    if (count > 0)
    {
        moveDisks(count - 1, needle1, needle2, needle3);

        cout << "Move disk " << count << " from " << needle1
             << " to " << needle3 << "." << endl;

        moveDisks(count - 1, needle2, needle3, needle1);
    }
}
