//Example 6-15: Reference and value parameters.
//Program: Makes you think. 
  
#include <iostream>

using namespace std;

void addFirst(int& first, int& second);
void doubleFirst(int one, int two);
void squareFirst(int& ref, int val);

int main ()
{
    int num = 5;

    cout << "Line 1: Inside main: num = " << num
         << endl;                                     //Line 1
						
    addFirst(num, num);                               //Line 2
    cout << "Line 3: Inside main after addFirst:"
         << " num = " << num << endl;                 //Line 3

    doubleFirst(num, num);                            //Line 4
    cout << "Line 5: Inside main after "
         << "doubleFirst: num = " << num << endl;     //Line 5

    squareFirst(num, num);                            //Line 6
    cout << "Line 7: Inside main after "
         << "squareFirst: num = " << num << endl;     //Line 7

    return 0;
}

void addFirst(int& first, int& second)
{
    cout << "Line 8: Inside addFirst:  first = " 
         << first << ", second = " << second << endl; //Line 8

    first = first + 2;                                //Line 9

    cout << "Line 10: Inside addFirst:  first = " 
         << first << ", second = " << second << endl; //Line 10

    second = second * 2;                              //Line 11

    cout << "Line 12: Inside addFirst:  first = " 
         << first << ", second = " << second << endl; //Line 12
}

void doubleFirst(int one, int two)
{
    cout << "Line 13: Inside doubleFirst:  one = " 
         << one << ", two = " << two << endl;         //Line 13

    one = one * 2;                                    //Line 14

    cout << "Line 15: Inside doubleFirst:  one = " 
         << one << ", two = " << two << endl;         //Line 15

    two = two + 2;                                    //Line 16

    cout << "Line 17: Inside doubleFirst:  one = " 
         << one << ", two = " << two << endl;         //Line 17
}

void squareFirst(int& ref, int val)
{
    cout << "Line 18: Inside squareFirst: ref = "
         << ref << ", val = " << val << endl;         //Line 18

    ref = ref * ref;                                  //Line 19

    cout << "Line 20: Inside squareFirst: ref = "
         << ref << ", val = " << val << endl;         //Line 20

    val = val + 2;                                    //Line 21

    cout << "Line 22: Inside squareFirst: ref = "
         << ref << ", val = " << val << endl;         //Line 22
}


