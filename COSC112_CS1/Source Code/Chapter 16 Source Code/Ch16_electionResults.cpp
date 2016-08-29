 
//*************************************************************
// Author: D.S. Malik
//
// This program processes voting data for student council
// president's post. It outputs each candidate's name and the 
// votes they received. The name of the winner also is printed.
//*************************************************************
 
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
 
using namespace std;

const int NO_OF_CANDIDATES = 6;
const int NO_OF_REGIONS = 4;

void printHeading();

void initialize(int vbRegion[][NO_OF_REGIONS], int tVotes[],
                int noOfRows);

void getCandidatesName(ifstream& inp, string cNames[], 
                       int noOfRows);

void sortCandidatesName(string cNames[], int noOfRows);

int binSearch(string cNames[], int noOfRows, string name);

void processVotes(ifstream& inp, string cNames[],
                  int vbRegion[][NO_OF_REGIONS], 
                  int noOfRows);

void addRegionsVote(int vbRegion[][NO_OF_REGIONS], 
                    int tVotes[], int noOfRows);

void printResults(string cNames[], 
                  int vbRegion[][NO_OF_REGIONS],
                  int tVotes[], int noOfRows);

int main()
{
        //Declare variables; Step 1
    string candidatesName[NO_OF_CANDIDATES];
    int votesByRegion[NO_OF_CANDIDATES][NO_OF_REGIONS];
    int totalVotes[NO_OF_CANDIDATES];
    ifstream infile;

    infile.open("candData.txt");                    //Step 2
    if (!infile)                                    //Step 3
    {
        cout << "Input file (candData.txt) does " 
             << "not exit." << endl;
        return 1;
    }

    getCandidatesName(infile, candidatesName, 
                      NO_OF_CANDIDATES);            //Step 4
    sortCandidatesName(candidatesName, 
                       NO_OF_CANDIDATES);           //Step 5

    infile.close();                                 //Step 6
    infile.clear();                                 //Step 6

    infile.open("voteData.txt");                    //Step 7
    if (!infile)                                    //Step 8
    {
        cout << "Input file (voteData.txt) does "
             << "not exist." << endl;
        return 1;
    }

    initialize(votesByRegion, totalVotes, 
               NO_OF_CANDIDATES);                   //Step 9
    processVotes(infile, candidatesName, 
                 votesByRegion, NO_OF_CANDIDATES);  //Step 10
    addRegionsVote(votesByRegion, totalVotes,
                   NO_OF_CANDIDATES);               //Step 11

    printHeading();                                 //Step 12
    printResults(candidatesName,votesByRegion,
                 totalVotes, NO_OF_CANDIDATES);     //Step 13

    return 0;
}

void initialize(int vbRegion[][NO_OF_REGIONS], int tVotes[],
                int noOfRows)
{
    int i, j;

    for (i = 0; i < noOfRows; i++)
        for (j = 0; j < NO_OF_REGIONS; j++)
            vbRegion[i][j] = 0;

    for (i = 0; i < noOfRows; i++)
        tVotes[i] = 0;
}

void getCandidatesName(ifstream& inp, string cNames[], 
                       int noOfRows)
{
    int i;
	
    for (i = 0; i < noOfRows; i++)
        inp >> cNames[i];
}

void sortCandidatesName(string cNames[], int noOfRows)
{
    int firstOutOfOrder, location;
    string temp;

    for (firstOutOfOrder = 1; firstOutOfOrder < noOfRows;
                              firstOutOfOrder++)
        if (cNames[firstOutOfOrder] < cNames[firstOutOfOrder - 1])
        {
            temp = cNames[firstOutOfOrder];
            location = firstOutOfOrder;

            do
            {
                cNames[location] = cNames[location - 1];
                location--;
            } 
            while (location > 0 && cNames[location - 1] > temp);

            cNames[location] = temp;
        }
}

int binSearch(string cNames[], int noOfRows, string name)
{
    int first, last, mid;
    bool found;
    first = 0;
    last = noOfRows - 1;
    found = false;

    while (!found && first <= last)
    {
        mid = (first + last) / 2;

        if (cNames[mid] == name)
            found = true;
        else if (cNames[mid] > name)
            last = mid - 1;
        else
            first = mid + 1;
    }

    if (found)
        return mid;
    else
        return -1;
}

void processVotes(ifstream& inp, string cNames[],
                  int vbRegion[][NO_OF_REGIONS], 
                  int noOfRows)
{
    string candName;
    int region;
    int noOfVotes;
    int loc;

    inp >> candName >> region >> noOfVotes;

    while (inp)
    {
        loc =  binSearch(cNames, noOfRows, candName);

        if (loc != -1)
            vbRegion[loc][region - 1] = vbRegion[loc][region - 1]
                                        + noOfVotes;
        inp >> candName >> region >> noOfVotes;
    }
}

void addRegionsVote(int vbRegion[][NO_OF_REGIONS], 
                    int tVotes[], int noOfRows)
{
    int i, j;

    for (i = 0; i < noOfRows; i ++)
        for (j = 0; j < NO_OF_REGIONS; j++)
            tVotes[i] = tVotes[i] + vbRegion[i][j];
}

void printHeading()
{
    cout << "      --------------Election Results----------" 
         << "----" << endl << endl;
    cout << "Candidate                  Votes" << endl;
    cout << "Name        Region1   Region2   Region3   "
         << "Region4    Total" << endl;
    cout << "---------   -------   -------   -------   "
         << "-------   ------" << endl;
}

void printResults(string cNames[], 
                  int vbRegion[][NO_OF_REGIONS],
                  int tVotes[], int noOfRows)
{
    int i, j;
    int largestVotes = 0;
    int winLoc = 0;
    int sumVotes = 0;

    for (i = 0; i < noOfRows; i++)
    {
        if (largestVotes < tVotes[i])
        {
            largestVotes = tVotes[i];
            winLoc = i;
        }

        sumVotes = sumVotes + tVotes[i];

        cout << left;
        cout << setw(9) << cNames[i] << "  ";
        cout << right;
        for (j = 0; j < NO_OF_REGIONS; j++)
            cout << setw(8) << vbRegion[i][j] << "  ";
        cout << setw(6) << tVotes[i] << endl;
    }

    cout << endl << endl << "Winner: " << cNames[winLoc]
         << ", Votes Received: " << tVotes[winLoc] 
         << endl << endl;
    cout << "Total votes polled: " << sumVotes << endl;
}
