  
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std; 
   
int main()
{
    cout << fixed << showpoint << setprecision(5);
	cout << "The value of RAND_MAX: " << RAND_MAX << endl;
    cout << "A random number: " << rand() << endl;
    cout << "A random number between 0 and 9: "
         << rand() % 10 << endl;
    cout << "A random number between 0 and 1: " 
         << static_cast<double> (rand())
              / static_cast<double>(RAND_MAX)
         << endl;

    return 0;
}