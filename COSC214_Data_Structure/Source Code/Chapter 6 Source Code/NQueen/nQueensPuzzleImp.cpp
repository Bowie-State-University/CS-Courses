
#include <iostream>
#include <cmath>
#include "nQueenPuzzle.h"
 
using namespace std;

nQueensPuzzle::nQueensPuzzle()
{
	noOfQueens = 8;
	queensInColumn = new int[8];
	noOfSolutions = 0;
}

nQueensPuzzle::nQueensPuzzle(int queens)
{
	noOfQueens = queens;
	queensInColumn = new int[noOfQueens];
	noOfSolutions = 0;
}

bool nQueensPuzzle::canPlaceQueen(int k, int i)
{
	for(int j = 0; j < k; j++)
		if((queensInColumn[j] == i)
			|| (abs(queensInColumn[j] - i) == abs(j-k)))
			return false;
	return true;
}

void nQueensPuzzle::queensConfiguration(int k)//, int queens)
{
	for(int i = 0; i < noOfQueens; i++)
	{
		if(canPlaceQueen(k, i))
		{
			queensInColumn[k] = i;
			if(k == noOfQueens - 1)
				printConfiguration();
			else
				queensConfiguration(k + 1);
		}
	}
}

void nQueensPuzzle::printConfiguration()
{
	noOfSolutions++;
	cout<<"(";
	for(int i = 0; i < noOfQueens - 1; i++)
		cout<<queensInColumn[i]<<", ";


	cout<<queensInColumn[noOfQueens - 1]<<")"<<endl;
}

int nQueensPuzzle::solutionsCount()
{
	return noOfSolutions;
}
