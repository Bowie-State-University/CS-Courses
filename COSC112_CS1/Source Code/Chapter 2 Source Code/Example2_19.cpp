     
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int count, temp;
    double length, width, area;
    char ch;
    string name;

    cout << "When prompted, enter the following data and " 
         << "press the enter key: " 
         << endl;
    cout << "10.5 4.0 Amy A" << endl;

    count = 1;                                          //Statement 1
    cout << "count = " << count << endl;

    count = count + 1;                                  //Statement 2
    cout << "count = " << count << endl;

    cin >> length >> width;                             //Statement 3
    cout << "count = " << count << ", length = " 
         << length << ", width = " << width << endl;

    area = length * width;                              //Statement 4
    cout << "count = " << count << ", length = " 
         << length << ", width = " << width
         << ", area = " << area << endl;

    cin >> name;                                        //Statement 5
    cout << "count = " << count << ", length = " 
         << length << ", width = " << width 
         << ", area = " << area 
         << ", name = " << name << endl;

    length = length + 2;                                //Statement 6
    cout << "count = " << count << ", length = " 
         << length << ", width = " << width 
         << ", area = " << area 
         << ", name = " << name << endl;

    width = 2 * length -  5 * width;                    //Statement 7
    cout << "count = " << count << ", length = " 
         << length << ", width = " << width 
         << ", area = " << area 
         << ", name = " << name << endl;

    area = length * width;                               //Statement 8
    cout << "count = " << count << ", length = " 
         << length << ", width = " << width 
         << ", area = " << area 
         << ", name = " << name << endl;
    cin >> ch;                                          //Statement 9
    cout << "count = " << count << ", length = " 
         << length << ", width = " << width 
         << ", area = " << area 
         << ", ch = " << ch 
         << ", name = " << name<< endl;

    temp = count + static_cast<int>(ch);                //Statement 10
    cout << "count = " << count
         << ", temp = " << temp 
         << ", length = " 
         << length << ", width = " << width 
         << ", area = " << area 
         << ", ch = " << ch 
         << ", name = " << name<< endl;
 
    return 0;
}
