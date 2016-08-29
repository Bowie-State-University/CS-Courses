//*************************************************************
// Author: D.S. Malik
//
// Program: Line and Letter Count
// This programs reads a text, outputs the text as is, and also
// prints the number of lines and the number of times each 
// letter appears in the text. An uppercase letter and a 
// lowercase letter are treated as being the same; that is, 
// they are tallied together.
//*************************************************************

#include <iostream> 
#include <fstream>
#include <cctype>

using namespace std;

void initialize(int& lc, int list[]);
void copyText(ifstream& intext, ofstream& outtext, char& ch,
              int list[]);
void characterCount(char ch, int list[]);
void writeTotal(ofstream& outtext, int lc, int list[]);

int main()
{
        //Step 1; Declare variables
    int lineCount;
    int letterCount[26];
    char ch;
    ifstream infile; 
    ofstream outfile; 

    infile.open("textin.txt");                      //Step 2

    if (!infile)                                    //Step 3
    {
        cout << "Cannot open the input file." 
             << endl;
        return 1;
    }
   
    outfile.open("textout.out");                    //Step 4

    initialize(lineCount, letterCount);             //Step 5

    infile.get(ch);                                 //Step 6

    while (infile)                                  //Step 7
    {
        copyText(infile, outfile, ch, letterCount); //Step 7.1
        lineCount++;                                //Step 7.2
        infile.get(ch);                             //Step 7.3
    }

    writeTotal(outfile, lineCount, letterCount);    //Step 8

    infile.close();                                 //Step 9
    outfile.close();                                //Step 9

    return 0;
}

void initialize(int& lc, int list[])
{
    int j;
    lc = 0;

    for (j = 0; j < 26; j++)
        list[j] = 0;
} //end initialize

void copyText(ifstream& intext, ofstream& outtext, char& ch,
              int list[])
{
    while (ch != '\n')      //process the entire line
    {
        outtext << ch;      //output the character

        characterCount(ch, list);   //call the function 
                                    //character count
        intext.get(ch);     //read the next character
    }
    outtext << ch;          //output the newline character
} //end copyText

void characterCount(char ch, int list[])
{
    int index;

    ch = toupper(ch);                       //Step a

    index = static_cast<int>(ch)
            - static_cast<int>('A');        //Step b

    if (0 <= index && index < 26)           //Step c
        list[index]++;
} //end characterCount

void writeTotal(ofstream& outtext, int lc, int list[])
{
    int index;

    outtext << endl << endl;
    outtext << "The number of lines = " << lc << endl;

    for (index = 0; index < 26; index++)
        outtext << static_cast<char>(index + static_cast<int>('A'))
                << " count = " << list[index] << endl;
} //end writeTotal


