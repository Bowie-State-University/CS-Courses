   
#include <iostream> 

using namespace std;

int main() 
{
   	int list[2];  

    list[0] = 5;
    list[1] = 10;
    list[2] = 15; //Array index is out of bounds

    for (int counter = 0; counter < 2; counter++)
        cout << list[counter] << " ";

    cout << endl;

    return 0;
}
