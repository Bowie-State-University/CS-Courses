//*************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use two-dimensional dynamic
// arrays. 
//*************************************************************
 
#include <iostream>                                 //Line 1
#include <iomanip>                                  //Line 2

using namespace std;                                //Line 3

void fill(int **p, int rowSize, int columnSize);    //Line 4
void print(int **p, int rowSize, int columnSize);   //Line 5

int main()                                          //Line 6
{                                                   //Line 7
    int **board;                                    //Line 8

    int rows;                                       //Line 9
    int columns;                                    //Line 10

    cout << "Line 11: Enter the number of rows "
         <<"and columns: ";                         //Line 11
    cin >> rows >> columns;                         //Line 12
    cout << endl;                                   //Line 13

        //Create the rows of board
    board = new int* [rows];                        //Line 14

        //Create the columns of board
    for (int row = 0; row < rows; row++)            //Line 15
        board[row] = new int[columns];              //Line 16

       //Insert elements into board
    fill(board, rows, columns);                     //Line 17

    cout << "Line 18: Board:" << endl;              //Line 18

       //Output the elements of board
    print(board, rows, columns);                    //Line 19

    return 0;                                       //Line 20
}                                                   //Line 21

void fill(int **p, int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        cout << "Enter " << columnSize << " number(s) for row "
            << "number " << row << ": ";
        for (int col = 0; col < columnSize; col++)
            cin >> p[row][col];
        cout << endl;
    }
}

void print(int **p, int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
         for (int col = 0; col < columnSize; col++)
            cout << setw(5) << p[row][col];
         cout << endl;
    }
}

