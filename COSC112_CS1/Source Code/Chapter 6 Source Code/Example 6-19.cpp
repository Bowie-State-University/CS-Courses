#include <iostream>
#include <iomanip>
   
using namespace std;   

int volume(int l = 1, int w = 1, int h = 1);
void funcOne(int& x, double y = 12.34, char z = 'B');

int main()
{
    int a = 23;
    double b = 48.78;
    char ch = 'M';

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "Line 1: a = " << a << ", b = "
         << b  << ", ch = " << ch << endl;        //Line 1
    cout << "Line 2: Volume = " << volume()
         << endl;                                 //Line 2
    cout << "Line 3: Volume = " << volume(5, 4)
         << endl;                                 //Line 3
    cout << "Line 4: Volume = " << volume(34)
         << endl;                                 //Line 4
    cout << "Line 5: Volume = "
         << volume(6, 4, 5) << endl;              //Line 5
    funcOne(a);                                   //Line 6
    funcOne(a, 42.68);                            //Line 7
    funcOne(a, 34.65, 'Q');                       //Line 8
    cout << "Line 9: a = " << a << ", b = "
         << b << ", ch = " << ch << endl;         //Line 9

    return 0;
}

int volume(int l, int w, int h)
{
    return l * w * h;                             //Line 10
}

void funcOne(int& x, double y, char z)
{
    x = 2 * x;                                    //Line 11
    cout << "Line 12: x = " << x << ", y = "
          << y << ", z = " << z << endl;          //Line 12
}
