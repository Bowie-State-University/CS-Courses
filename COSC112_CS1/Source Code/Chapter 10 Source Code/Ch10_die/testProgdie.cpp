//The user program that uses the class die
 
#include <iostream>
#include "die.h" 

using namespace std;

int main()                                              //Line 1 
{                                                       //Line 2
    die die1;                                           //Line 3
    die die2;                                           //Line 4

    cout << "Line 5: die1: " << die1.getNum() << endl;  //Line 5
    cout << "Line 6: die2: " << die2.getNum() << endl;  //Line 6

    die1.roll();                                        //Line 7
    cout << "Line 8: After rolling die1: "
         << die1.getNum() << endl;                      //Line 8

    die2.roll();                                        //Line 9
    cout << "Line 10: After rolling die2: "
         << die2.getNum() << endl;                      //Line 10

    cout << "Line 11: The sum of the numbers rolled"
         << " by the dice is: "
         << die1.getNum() + die2.getNum() << endl;      //Line 11

    die1.roll();                                        //Line 12
    die2.roll();                                        //Line 13

    cout << "Line 14: After again rolling, the sum of "
         << "the numbers rolled is: "
         << die1.getNum() + die2.getNum() << endl;      //Line 14

    return 0;                                           //Line 15
}//end main                                             //Line 16
