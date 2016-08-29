//Test Program personType
 
#include <iostream>  
#include <string>
#include "personType.h" 
 
using namespace std;

int main()
{
    personType student("Lisa", "Regan");

    student.print();

    cout << endl;

    return 0;
}
