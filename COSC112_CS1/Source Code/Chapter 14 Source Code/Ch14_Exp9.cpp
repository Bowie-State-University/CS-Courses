// Handling bad_alloc exception thrown by the operator new.

#include <iostream>
  
using namespace std;
 
int main() 
{
    int *list[100];                                 //Line 1

    try                                             //Line 2
    {
        for (int i = 0; i < 100; i++)               //Line 3
        {
            list[i] = new int[50000000];            //Line 4
            cout << "Line 4: Created list[" << i 
                 << "] of 50000000 components." 
                 << endl;                           //Line 5
        }
    }
    catch (bad_alloc be)                            //Line 6
    {
        cout << "Line 7: In the bad_alloc catch "
              << "block: " << be.what() << "."
              << endl;                              //Line 7
    }

    return 0;                                       //Line 8
}
