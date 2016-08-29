// Two-dimensional arrays as parameters to functions.
  
#include <iostream> 
#include <iomanip> 
   
using namespace std;

const int NUMBER_OF_ROWS = 6;
const int NUMBER_OF_COLUMNS = 5;

void printMatrix(int matrix[][NUMBER_OF_COLUMNS], 
                 int NUMBER_OF_ROWS);
void sumRows(int matrix[][NUMBER_OF_COLUMNS], 
             int NUMBER_OF_ROWS);
void largestInRows(int matrix[][NUMBER_OF_COLUMNS], 
                   int NUMBER_OF_ROWS);

int main()
{
    int board[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS] 
                        = {{23, 5, 6, 15, 18},
                           {4, 16, 24, 67, 10},
                           {12, 54, 23, 76, 11},
                           {1, 12, 34, 22, 8},
                           {81, 54, 32, 67, 33},
                           {12, 34, 76, 78, 9}};    //Line 1

    printMatrix(board, NUMBER_OF_ROWS);             //Line 2
    cout << endl;                                   //Line 3
    sumRows(board, NUMBER_OF_ROWS);                 //Line 4
    cout << endl;                                   //Line 5
    largestInRows(board, NUMBER_OF_ROWS);           //Line 6

    return 0;
}

void printMatrix(int matrix[][NUMBER_OF_COLUMNS], 
                 int numOfRows)
{
    int row, col;

    for (row = 0; row < numOfRows; row++)
    {
        for (col = 0; col < NUMBER_OF_COLUMNS; col++)
            cout << setw(5) << matrix[row][col] << " ";

        cout << endl;
    }
}

void sumRows(int matrix[][NUMBER_OF_COLUMNS], int numOfRows)
{
    int row, col;
    int sum;

         //Sum of each individual row
    for (row = 0; row < numOfRows; row++)
    {
        sum = 0;

        for (col = 0; col < NUMBER_OF_COLUMNS; col++)
            sum = sum + matrix[row][col];

        cout << "Sum of row " << (row + 1) << " = " << sum
             << endl;
    }
}

void largestInRows(int matrix[][NUMBER_OF_COLUMNS], 
                   int numOfRows)
{
    int row, col;
    int largest;

         //Largest element in each row
    for (row = 0; row < numOfRows; row++)
    {
        largest = matrix[row][0]; //Assume that the first element
                                  //of the row is the largest.
        for (col = 1; col < NUMBER_OF_COLUMNS; col++)
            if (largest < matrix[row][col])
                largest = matrix[row][col];

        cout << "The largest element of row " << (row + 1) 
             << " = " << largest << endl;
    }
}
