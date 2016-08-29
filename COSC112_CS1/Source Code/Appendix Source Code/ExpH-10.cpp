  
//STL functions fill and fill_n

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
  
using namespace std;

int main() 
{
    vector<int>  vecList(8);                       //Line 1
    ostream_iterator<int> screen(cout, " ");       //Line 2

    fill(vecList.begin(), vecList.end(), 2);       //Line 3

    cout << "Line 4: After filling vecList " 
         << "with 2's: ";                          //Line 4
    copy(vecList.begin(), vecList.end(), screen);  //Line 5
    cout << endl;                                  //Line 6

    fill_n(vecList.begin(), 3, 5);                 //Line 7

    cout << "Line 8: After filling the first "
         << "three elements with 5's: " 
         << endl << "        ";                    //Line 8
    copy(vecList.begin(), vecList.end(), screen);  //Line 9
    cout << endl;                                  //Line 10

    return 0;
}
