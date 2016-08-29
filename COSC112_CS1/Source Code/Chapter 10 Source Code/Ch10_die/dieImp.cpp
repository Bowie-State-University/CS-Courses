//Implementation File for the class clockType
 
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "die.h"

using namespace std;

die::die()
{
    num = 1;
    srand(time(0));
}

void die::roll()
{
    num = rand() % 6 + 1;
}

int die::getNum() const
{
    return num;
}
