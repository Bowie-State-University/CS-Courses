
//Chapter 4 Logical operators 
  
#include <iostream> 
#include <iomanip>

using namespace std;
  
int main()
{
    bool found = true;
    int age = 20;
    double hours = 45.30;
    double overTime = 15.00;
    int count = 20;
    char ch = 'B';

    cout << fixed << showpoint << setprecision(2);
    cout << "found = " << found << ", age = " << age 
         << ", hours = " << hours << ", overTime = " << overTime 
         << "," << endl << "count = " << count
         << ", ch = " << ch << endl << endl;

    cout << "!found evaluates to " << !found << endl;
    cout << "hours > 40.00 evaluates to " << (hours > 40.00) << endl;
    cout << "!age evaluates to " << !age << endl; 
    cout << "(!found && (age >= 18)) evaluates to "
         << (!found && (age >= 18)) << endl;
    cout << "!(found && (age >= 18)) evaluates to "
         << (!(found && (age >= 18))) << endl;
    cout << "hours + overTime <= 75.00 evaluates to "
         << (hours + overTime <= 75.00) << endl;
    cout << "(count >= 0) && (count <= 100) evaluates to "
         << ((count >= 0) && (count <= 100)) << endl;
    cout << "('A' <= ch && ch <= 'Z') evaluates to "
         << ('A' <= ch && ch <= 'Z') << endl;

    return 0;
}