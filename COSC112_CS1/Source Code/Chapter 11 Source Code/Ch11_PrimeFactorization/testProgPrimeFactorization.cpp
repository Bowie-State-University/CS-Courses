 
#include <iostream> 
#include "primeFactorization.h"

using namespace std;

int main() 
{  
    primeFactorization number;   

    long long num; 

    cout << "Enter an integer between 2 and "
          << "270,000,000,000,000: ";    
    cin >> num;   
    cout << endl; 
    
    number.setNum(num); 

    number.factorization();  

    return 0;  
}//end main 
