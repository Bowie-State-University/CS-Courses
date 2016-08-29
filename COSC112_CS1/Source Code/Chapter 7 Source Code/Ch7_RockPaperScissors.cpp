 
//*************************************************************
// Author: D.S. Malik 
//
// Program: Rock, Paper, and Scissors
// This program plays the game of rock, paper, and scissors.
//*************************************************************

#include <iostream>
 
using namespace std;

enum objectType{ROCK, PAPER, SCISSORS};

	//Function prototypes
void displayRules();
objectType retrievePlay(char selection);
bool validSelection(char selection);
void convertEnum(objectType object);
objectType winningObject(objectType play1, objectType play2);
void gameResult(objectType play1, objectType play2, 
                int& winner);
void displayResults(int gCount, int wCount1, int wCount2);

int main()
{
        //Step 1
    int gameCount; //variable to store the number of 
                   //games played
    int winCount1; //variable to store the number of games 
                   //won by player 1
    int winCount2; //variable to store the number of games 
                   //won by player 2
    int gamewinner;
    char response;  //variable to get the user's response to 
                    //play the game
    char selection1;
    char selection2;
    objectType play1;  //player1's selection
    objectType play2;  //player2's selection

        //Initialize variables; Step 2
    gameCount = 0;
    winCount1 = 0;
    winCount2 = 0;
  
    displayRules();                               //Step 3
	
    cout << "Enter Y/y to play the game: ";       //Step 4
    cin >> response;                              //Step 5
    cout << endl;
  
    while (response == 'Y' ||  response == 'y')   //Step 6
    {
        cout << "Player 1 enter your choice: ";   //Step 6a
        cin >> selection1;                        //Step 6b
        cout << endl;

        cout << "Player 2 enter your choice: ";   //Step 6c
        cin >> selection2;                        //Step 6d
        cout << endl;

            //Step 6e
        if (validSelection(selection1) 
               && validSelection(selection2))
        {
            play1 = retrievePlay(selection1);
            play2 = retrievePlay(selection2);
            gameCount++;                          //Step 6e.i
            gameResult(play1, play2, gamewinner); //Step 6e.ii

            if (gamewinner == 1)                  //Step 6e.iii
                winCount1++;
            else if (gamewinner == 2)
                winCount2++;
        }//end if

        cout << "Enter Y/y to play the game: ";   //Step 6f
        cin >> response;                          //Step 6g
        cout << endl;
    }//end while

    displayResults(gameCount, winCount1, 
                   winCount2);                    //Step 7

    return 0;
}//end main

void displayRules()
{
    cout << "  Welcome to the game of Rock, Paper, " 
         << "and Scissors." << endl;
    cout << "  This is a game for two players. For each "
         << "game, each" << endl;   
    cout << " player selects one of the objects, Rock, "
         << "Paper or Scissors." << endl;
    cout << " The rules for winning the game are: " << endl;
    cout << "1. If both players selects the same object, it "
         << "is a tie." << endl;
    cout << "2. Rock breaks Scissors: So player who selects "
         << "Rock wins." << endl;
    cout << "3. Paper covers Rock: So player who selects " 
         << "Paper wins." << endl;
    cout << "4. Scissors cuts Paper: So player who selects "
         << "Scissors wins." << endl << endl;
    cout << "Enter R or r to select Rock, P or p to select "
         << "Paper, and S or s to select Scissors." << endl;
}

bool validSelection(char selection)
{
    switch (selection)
    {
    case 'R': 
    case 'r':
    case 'P': 
    case 'p':
    case 'S': 
    case 's': 
        return true;
    default: 
        return false;
    }
}

objectType retrievePlay(char selection)
{
    objectType object;

    switch (selection)
    {
    case 'R': 
    case 'r': 
        object = ROCK;
        break;
    case 'P': 
    case 'p': 
        object = PAPER;
        break;
    case 'S': 
    case 's': 
        object = SCISSORS;
    }

    return object;
}

void convertEnum(objectType object)
{
    switch (object)
    {
    case ROCK: 
        cout << "Rock";
        break;
    case PAPER: 
        cout << "Paper";
        break;
    case 
        SCISSORS: cout << "Scissors";
    }				
}

objectType winningObject(objectType play1, objectType play2)
{
    if ((play1 == ROCK && play2 == SCISSORS)
          || (play2 == ROCK && play1 == SCISSORS))
        return ROCK;
    else if ((play1 == ROCK && play2 == PAPER)
              || (play2 == ROCK && play1 == PAPER))
        return PAPER;
    else
        return SCISSORS;
}

void gameResult(objectType play1, objectType play2, 
                int& winner)
{
    objectType winnerObject;

    if (play1 == play2)
    {
        winner = 0;
        cout << "Both players selected ";
        convertEnum(play1);
        cout << ". This game is a tie." << endl;
    }	
    else
    {
        winnerObject = winningObject(play1, play2);

            //Output each player's choice
        cout << "Player 1 selected ";
        convertEnum(play1);
        cout << " and player 2 selected ";
        convertEnum(play2);
        cout << ". ";
     
            //Decide the winner
        if (play1 == winnerObject)
            winner = 1;
        else if (play2 == winnerObject)
            winner = 2;

            //Output the winner
        cout << "Player " << winner << " wins this game."
             << endl;
    }
}

void displayResults(int gCount, int wCount1, int wCount2)
{
    cout << "The total number of plays: " << gCount 
         << endl;
    cout << "The number of plays won by player 1: " 
         << wCount1 << endl;
    cout << "The number of plays won by player 2: " 
         << wCount2 << endl;
}
