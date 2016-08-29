
#include <iostream>

using namespace std; 

char courseGrade(int score);
  
int main()
{
    int testScore;
 
    return 0;
}

char courseGrade(int score)
{
    switch (score / 10)
    {
    case 0: 
    case 1: 
    case 2:
    case 3: 
    case 4: 
    case 5: 
        return 'F';
    case 6: 
        return 'D';
    case 7: 
        return 'C';
    case 8: 
        return 'B';
    case 9: 
    case 10: 
        return 'A';
    }
}
