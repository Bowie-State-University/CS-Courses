//Chapter 15: Tower of Hanoi 

#include <iostream>

using namespace std;
 
void moveDisks(int count, int needle1, int needle3, int needle2);

int main() 
{
    cout << "Moves for 3 disk problem." << endl;

    moveDisks(9, 1, 3, 2);

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
