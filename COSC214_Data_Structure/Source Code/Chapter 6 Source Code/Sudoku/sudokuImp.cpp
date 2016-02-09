
#include <iostream>
#include "sudoku.h"

using namespace std;

sudoku::sudoku()
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

sudoku::sudoku(int g[][9])
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

void sudoku::initializeSudokuGrid()
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

void sudoku::initializeSudokuGrid(int g[][9])
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

void sudoku::printSudokuGrid()
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::solveSudoku()
{
    int row, col;

    if (findEmptyGridSlot(row, col)) 
    {   
        for (int num = 1; num <= 9; num++)  
        {             
            if (canPlaceNum(row, col, num)) 
            { 
                grid[row][col] = num; 
                if (solveSudoku()) //recursive call
                    return true;
                grid[row][col] = 0; //backtrack
            }
        }
        return false; 
    }
    else
        return true; //there are no empty slots
}

bool sudoku::findEmptyGridSlot(int &row, int &col)
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::canPlaceNum(int row, int col, int num)
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::numAlreadyInRow(int row, int num)
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::numAlreadyInCol(int col, int num)
{
   cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::numAlreadyInBox(int smallGridRow, int smallGridCol, 
                             int num)
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

