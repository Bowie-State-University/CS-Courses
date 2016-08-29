#include <iostream>
#include "integerManipulation.h"
#include "primeFactorization.h" 
 
using namespace std; 

void primeFactorization::factorization()
{
    //See Progamming Exercise 14.
    cout << "See Progamming Exercise 14." << endl;
}

primeFactorization::primeFactorization(long long n)
    : integerManipulation(n)
{
    first125000PrimeNum(first125000Primes, 125000);
}

void primeFactorization::primeFact(long long num, long long list[], int length, 
                   int firstPrimeFactIndex)
{
    //See Progamming Exercise 14.
}
void primeFactorization::first125000PrimeNum(long long list[], int length)
{
    //See Progamming Exercise 14.
}


void primeFactorization::primeTest(long long num, long long list[], int length, 
                   bool& primeNum, int& firstPrimeFactIndex)
{
    //See Progamming Exercise 14.
}
bool primeFactorization::isPrime(long long number)
{
    //See Progamming Exercise 14.

    return false;
}