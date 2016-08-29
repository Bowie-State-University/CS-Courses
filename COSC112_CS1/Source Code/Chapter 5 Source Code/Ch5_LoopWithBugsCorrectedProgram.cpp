 
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ifstream infile;

    int i;     
    int j; 
    int sum;
    int num;

    infile.open("Ch5_LoopWithBugsData.txt");

    for (i = 1; i <= 3; i++)
    {
        sum = 0;

        for (j = 1; j <= 4; j++)
        {
            infile >> num;
            cout << num << " ";
            sum = sum + num;
        }
        
        cout << "sum = " << sum << endl;
    }

    return 0;
 }
