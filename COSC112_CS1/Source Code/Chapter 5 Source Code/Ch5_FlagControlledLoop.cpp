//Flag-controlled while loop.
//Number guessing game. 

#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() 
{
        //declare the variables
    int num;         //variable to store the random
                     //number
    int guess;       //variable to store the number
                     //guessed by the user
    bool isGuessed;  //boolean variable to control
                     //the loop

    srand(time(0));                                 //Line 1                
    num = rand() % 100;                             //Line 2

    isGuessed = false;                              //Line 3

    while (!isGuessed)                              //Line 4
    {                                               //Line 5
        cout << "Enter an integer greater"
             << " than or equal to 0 and "
             << "less than 100: ";                  //Line 6

        cin >> guess;                               //Line 7
        cout << endl;                               //Line 8

        if (guess == num)                           //Line 9
        {                                           //Line 10
            cout << "You guessed the correct "
                 << "number." << endl;              //Line 11
            isGuessed = true;                       //Line 12
        }                                           //Line 13
        else if (guess < num)                       //Line 14
            cout << "Your guess is lower than the "
                 << "number.\n Guess again!"
                 << endl;                           //Line 15
        else                                        //Line 16
            cout << "Your guess is higher than "
                 << "the number.\n Guess again!"
                 << endl;                           //Line 17
    } //end while                                   //Line 18

    return 0;
}

                                                  


