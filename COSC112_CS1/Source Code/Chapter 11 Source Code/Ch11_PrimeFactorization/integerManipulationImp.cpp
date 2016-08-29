//Implementation File for the class integerManipulation
 
#include <iostream>
#include "integerManipulation.h"
 
using namespace std;

void integerManipulation::setNum(long long n)
{
    num = n;
}

long long integerManipulation::getNum()
{
    return num;
}

void integerManipulation::reverseNum()
{
    cout << "See Programming Exercise 6 in Chapter 6." << endl;
}

void integerManipulation::classifyDigits()
{
    long long temp;

    temp = abs(num);

    int digit;

    while (temp != 0)
    {
         digit = temp - (temp / 10 ) * 10;
         temp = temp / 10;

         if (digit % 2 == 0)
         {
             evensCount++;
             if (digit == 0)
                 zerosCount++;
         }
         else
             oddsCount++;
     }
}

int integerManipulation::getEvensCount()
{
    return evensCount;
}

int integerManipulation::getOddsCount()
{
    return oddsCount;
}

int integerManipulation::getZerosCount()
{
    return zerosCount;
}

int integerManipulation::sumDigits()
{
    cout << "See Programming Exercise 1 in Chapter 5." << endl;

    return 0;
}

integerManipulation::integerManipulation(long long n)
{
    num = n;
    revNum = 0;
    evensCount = 0;
    oddsCount = 0;
    zerosCount = 0;
}
