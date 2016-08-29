#include <iostream>
#include <iomanip>
   
using namespace std;  

void fill(int **p, int rowSize, int columnSize);
void print(int **p, int rowSize, int columnSize);

int main()
{
    int **board;                                //Line 1

    int rows;                                   //Line 2
    int columns;                                //Line 3

    cout << "Line 4: Enter the number of rows "
         <<"and columns: ";                     //Line 4
    cin >> rows >> columns;                     //Line 5
    cout << endl;                               //Line 6

        //Create the rows of board
    board = new int* [rows];                    //Line 7

        //Create the columns of board
    for (int row = 0; row < rows; row++)        //Line 8
        board[row] = new int[columns];          //Line 9

       //Insert elements into board
    fill(board, rows, columns);                 //Line 10

    cout << "Line 11: Board:" << endl;          //Line 11

       //Output the elements of board
    print(board, rows, columns);                //Line 12

    return 0;
}

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