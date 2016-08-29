   
#include <iostream>
#include "petType.h"
#include "dogType.h"

using namespace std;
 
void callPrint(petType& p);

int main()
{
    petType pet("Lucky");                     //Line 1
    dogType dog("Tommy", "German Shepherd");  //Line 2

    pet.print();                              //Line 3
    cout << endl;                             //Line 4
    dog.print();                              //Line 5

    cout << "*** Calling the function callPrint  ***"
         << endl;                             //Line 6
    callPrint(pet);                           //Line 7
    cout << endl;                             //Line 8
    callPrint(dog);                           //Line 9
    cout << endl;                             //Line 10

    return 0;
}


void callPrint(petType& p)
{	
    p.print();
}
