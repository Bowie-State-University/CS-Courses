#include <iostream> 

using namespace std;
 
int secret(int x);
  
int main() 
{  
    int num = 5;

    int a;

    a = 2 + secret(num);
	
    cout << a << " " << secret(a) << endl;

    return 0;
}

int secret(int x)
{
    if (x > 5)           //Line 1
        return 2 * x;    //Line 2
    return x;            //Line 3
}
