#include <iostream>  
  
using namespace std; 

int main()  
{        
    int *list;  

    list = new int[5]; 

    for (int i = 0; i < 5; i++) 
        list[i] = i * i; 

    for (auto x : list)
        cout << x << " ";
    cout << endl; 

    return 0; 
}  