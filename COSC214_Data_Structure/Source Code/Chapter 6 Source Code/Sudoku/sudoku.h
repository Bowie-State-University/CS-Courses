
//***************************************************************
// D.S. Malik
//
// This class specifies the functions to solve a sudoku problem.
//***************************************************************

class sudoku
{
public:
    sudoku();
      //default constructor
      //Postcondition: grid is initialized to 0

    sudoku(int g[][9]);
      //constructor
      //Postcondition: grid = g

    void initializeSudokuGrid();
      //Function to promt the user to specify the numbers of the
      //partially filled grid.
      //Postcondition: grid is initialized to the numbers 
      //    specified by the user.

    void initializeSudokuGrid(int g[][9]);
      //Function to initialize grid to g
      //Postcondition: grid = g;

    void printSudokuGrid();
      //Function to print the sudoku grid.

    bool solveSudoku();
      //Funtion to solve the sudoku problem.
      //Postcondition: If a solution exits, it returns true,
      //    otherwise it returns false.
    bool findEmptyGridSlot(int &row, int &col);
      //Function to determine if the grid slot specified by 
      //row and col is empty.
      //Postcondition: Returns true if grid[row][col] = 0;

    bool canPlaceNum(int row, int col, int num);
      //Function to determine if num can be placed in 
      //grid[row][col]
      //Postcondition: Returns true if num can be placed in
      //    grid[row][col], otherwise it returns false.

    bool numAlreadyInRow(int row, int num);
      //Function to determine if num is in grid[row][]
      //Postcondition: Returns true if num is in grid[row][],
      //    otherwise it returns false.

    bool numAlreadyInCol(int col, int num);
      //Function to determine if num is in grid[row][]
      //Postcondition: Returns true if num is in grid[row][],
      //    otherwise it returns false.

    bool numAlreadyInBox(int smallGridRow, int smallGridCol, 
                         int num);
      //Function to determine if num is in the small grid
      //Postcondition: Returns true if num is in small grid,
      //    otherwise it returns false.

private:
    int grid[9][9];
};
