   
#include <iostream>
#include "petType.h"
#include "dogType.h"

using namespace std;

int main() 
{
    petType *pet; 
    dogType *dog;

    dog = new dogType("Tommy", "German Shepherd");  

    dog->print();

    pet = dog;
    dog->setBreed("Siberian Husky");

    pet->print();

    return 0;
}


