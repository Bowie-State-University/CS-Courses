#include <iostream>

using namespace std;
   
void one(); 
void two();

int main()
{ 
    int s;

    extern int w;

    s = 10;
    cout << "s = " << s << endl;

    one();
    two();

    w = w + s;
    cout << "In main external w = " << w << endl;

    return 0;
}

void one()
{
    extern int w;

    w = 15;
    cout << "In one w = " << w << endl;
}

int w;

void two()
{
    int z;

    z = 12;
    w = w + z;

    cout << "In two z = " << z << endl;
    cout << "In two w = " << w << endl;
}


