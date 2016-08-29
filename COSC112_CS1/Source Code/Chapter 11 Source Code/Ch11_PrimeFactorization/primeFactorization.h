#ifndef primeFactorization_H
#define primeFactorization_H

#include "integerManipulaiton.h"
 
class primeFactorization: public integerManipulation
{
public:

    void factorization();
      //Function to output the prime factorization of num 
      //Postcondition: Prime factorization of num is printed;

    primeFactorization(long long n = 0);
      //Constructor with a default parameter.
      //The instance variables of the base class are set according 
      //to the parameters and the array first125000Primes is 
      //created.
      //Postcondition: num = n; revNum = 0; evenscount = 0;
      //    oddsCount = 0; zerosCount = 0;
      //    first125000Primes = first 125000 prime numbers.      

private:
    long long first125000Primes[125000];

    void primeFact(long long num, long long list[], int length, 
                   int firstPrimeFactIndex);
    void first125000PrimeNum(long long list[], int length);
      //Function to determine and store the first 125000 prime 
      //integers.
      //Postcondition: The first 125000 prime numbers are  
      //    determined and stored in the array first125000Primes;

    void primeTest(long long num, long long list[], int length, 
                   bool& primeNum, int& firstPrimeFactIndex);
    bool isPrime(long long number);
};

#endif