//**************************************************************
// Author: D.S. Malik
//
// Program: Election Results
// Given candidates' voting this program determines the winner
// of the election. The program outputs the votes received by
// each candidate and the winner.
//**************************************************************

#include <iostream> 
#include <string> 
#include <fstream>
#include "candidateType.h"
#include "orderedArrayListType.h"

using namespace std;

const int NO_OF_CANDIDATES = 6;

void fillNames(ifstream& inFile, 
               orderedArrayListType<candidateType>& cList);
void processVotes(ifstream& inFile,   
                  orderedArrayListType<candidateType>& cList); 
void addVotes(orderedArrayListType<candidateType>& cList);  
void printHeading();
void printResults(orderedArrayListType<candidateType>& cList);  
 
 int main() 
 {   
     orderedArrayListType<candidateType> candidateList(NO_OF_CANDIDATES);
	
    ifstream inFile;
	
    inFile.open("candData.txt");
	
    fillNames(inFile, candidateList);
	
    candidateList.selectionSort();
	
    inFile.close();
	
    inFile.open("voteData.txt");
	
    processVotes(inFile, candidateList);
	
    addVotes(candidateList);
	
    printHeading();
  
    printResults(candidateList);

    return 0;
}

void fillNames(ifstream& inFile, 
               orderedArrayListType<candidateType>& cList) {     string firstN;     string lastN;
	
    candidateType temp;

    for (int i = 0; i < NO_OF_CANDIDATES; i++)
    {
        inFile >> firstN >> lastN;
        temp.setName(firstN, lastN);
        cList.insertAt(i, temp);
    }
}

void processVotes(ifstream& inFile, 
				  orderedArrayListType<candidateType>& cList)
{
	cout << "See Programming Exercise 13" << endl;
}
	
void addVotes(orderedArrayListType<candidateType>& cList)
{
    candidateType temp;
	
    for (int i = 0; i < NO_OF_CANDIDATES; i++)
    {
        cList.retrieveAt(i, temp);
        temp.calculateTotalVotes();
        cList.replaceAt(i, temp);
    }
}

void printHeading()
{
    cout << "      --------------------Election Results---------"
         << "-----------" << endl << endl;
    cout << "                                   Votes" << endl;
    cout << "    Candidate Name     Region1  Region2  Region3  "
         <<"Region4   Total" << endl;
    cout << "---------------------  -------  -------  "
         << "-------  -------  ------" << endl;
}

void printResults(orderedArrayListType<candidateType>& cList)
{
	cout << "See Programming Exercise 13" << endl;
}
	
