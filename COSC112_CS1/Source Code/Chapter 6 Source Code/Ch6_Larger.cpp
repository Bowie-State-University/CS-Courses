//Program: Largest of three numbers
 
#include <iostream> 
 
using namespace std; 
  
double larger(double x, double y);      //Function prototype
double compareThree(double x, double y, 
					double z);          //Function prototype

int main() 
{
    double one, two;                                //Line 1

    cout << "Line 2: The larger of 5 and 10 is "
         << larger(5, 10) << endl;                  //Line 2

    cout << "Line 3: Enter two numbers: ";          //Line 3
    cin >> one >> two;                              //Line 4
    cout << endl;                                   //Line 5

    cout << "Line 6: The larger of " << one 
         << " and " << two << " is " 
         << larger(one, two) << endl;               //Line 6

    cout << "Line 7: The largest of 43.48, 34.00, " 
         << "and 12.65 is " 
         << compareThree(43.48, 34.00, 12.65)
         << endl;                                   //Line 7

   return 0;
}

double larger(double x, double y)
{
    double max;

    if (x >= y)
        max = x;
    else
        max = y;

    return max;
}

double compareThree (double x, double y, double z)
{
    return larger(x, larger(y, z));
}
