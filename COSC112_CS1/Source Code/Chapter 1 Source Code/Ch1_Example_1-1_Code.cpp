#include <iostream> 

using namespace std;

int main()
{
    double length;
    double width;
    double area;
    double perimeter;

    cout << "Enter length and width: ";
    cin >> length >> width;
    cout << endl;

    perimeter = 2 * (length + width);
    area = length *  width;

    cout << "Length = " << length << ", width = " << width
         << ", perimeter = " << perimeter << ", area = " << area << endl;

    return 0;
}


