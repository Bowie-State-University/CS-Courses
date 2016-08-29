   
#include <iostream> 

using namespace std;

int main() 
{
    int a = 18;
   	int list[10];  
    int b = -20;

    int x[4]; // = {};

    for (int i = 0; i < 10; i++)
        list[i] = 0;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    for (int i = 0; i < 4; i++)
        cout << x[i] << " ";
    cout << endl;

    char name[10]; // = {};

     for (int i = 0; i < 10; i++)
        cout << name[i] << " ";
    cout << endl;

    return 0;
}
