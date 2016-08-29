   
#include <iostream>

#include "dogType.h"

using namespace std;

void dogType::print()  
{
    petType::print();
    cout << ", Breed: " << breed << endl;
}

void dogType::setBreed(string b)
{
    breed = b;
}

dogType:: dogType(string n, string b)
               : petType(n)
{
    breed = b;
}
