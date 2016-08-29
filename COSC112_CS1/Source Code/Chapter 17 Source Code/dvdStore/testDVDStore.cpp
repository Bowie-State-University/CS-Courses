#include <iostream>
#include <fstream>
#include <string>
#include "dvdType.h" 
#include "dvdListType.h"

using namespace std; 
 
void createDVDList(ifstream& infile, 
                     dvdListType& dvdList);
void displayMenu();

int main()
{
    dvdListType dvdList;
    int choice;
    char ch;
    string title;

    ifstream infile;

           //open the input file
    infile.open("dvdDat.txt");
    if (!infile)
    {
        cout << "The input file does not exist. "
             << "The program terminates!!!" << endl;
        return 1;
    }

        //create the DVD list
    createDVDList(infile, dvdList);
    infile.close();

        //show the menu
    displayMenu();
    cout << "Enter your choice: ";
    cin >> choice;    //get the request
    cin.get(ch);
    cout << endl;

        //process the requests
    while (choice != 9)
    {
        switch (choice)
        {
        case 1: 
            cout << "Enter the title: ";
            getline(cin, title);
            cout << endl;

            if (dvdList.dvdSearch(title))
                cout << "The store carries " << title 
                     << endl;
            else
                cout << "The store does not carry " 
                     << title << endl;
            break;

        case 2: 
            cout << "Enter the title: ";
            getline(cin, title);
            cout << endl;

            if (dvdList.dvdSearch(title))
            {
                if (dvdList.isDVDAvailable(title))
                {
                    dvdList.dvdCheckOut(title);
                    cout << "Enjoy your movie: " 
                         << title << endl;
                }
                else
                    cout << "Currently " << title
                         << " is out of stock." << endl;
            }
            else
                cout << "The store does not carry " 
                     << title << endl;
            break;

        case 3: 
            cout << "Enter the title: ";
            getline(cin, title);
            cout << endl;

            if (dvdList.dvdSearch(title))
            {
                dvdList.dvdCheckIn(title);
                cout << "Thanks for returning "
                     << title << endl;
            }
            else
                cout << "The store does not carry " 
                     << title << endl;
            break;

        case 4: 
            cout << "Enter the title: ";
            getline(cin, title);
            cout << endl;

            if (dvdList.dvdSearch(title))
            {
                if (dvdList.isDVDAvailable(title))
                    cout << title << " is currently in " 
                         << "stock." << endl;
                else
                    cout << title << " is currently out "
                         << "of stock." << endl;
            }
            else
                cout << "The store does not carry " 
                     << title << endl;
            break;

        case 5: 
            dvdList.dvdPrintTitle();
            break;

        case 6: 
            dvdList.print();
            break;

        default: 
            cout << "Invalid selection." << endl;
        }//end switch

        displayMenu();     //display menu

        cout << "Enter your choice: ";
        cin >> choice;     //get the next request
        cin.get(ch);
        cout << endl;
    }//end while

    return 0;
}

void createDVDList(ifstream& infile, 
                     dvdListType& dvdList)
{
    string title;
    string star1;
    string star2;
    string producer;
    string director;
    string productionCo;
    char ch;
    int inStock;

    dvdType newDVD;

    getline(infile, title);
	
    while (infile)
    {
        getline(infile, star1);
        getline(infile, star2);
        getline(infile, producer);
        getline(infile, director);
        getline(infile, productionCo);
        infile >> inStock;
        infile.get(ch);
        newDVD.setDVDInfo(title, star1, star2, producer,
                              director, productionCo, inStock);
        dvdList.insertFirst(newDVD);

        getline(infile, title);
    }//end while
}//end createDVDList

void displayMenu()
{
    cout << "Select one of the following:" << endl;
    cout << "1: To check whether the store carries a "
         << "particular DVD." << endl;
    cout << "2: To check out a DVD." << endl;
    cout << "3: To check in a DVD." << endl;
    cout << "4: To check whether a particular DVD is " 
         << "in stock." << endl;
    cout << "5: To print only the titles of all the DVDs."
         << endl;
    cout << "6: To print a list of all the DVDs." << endl;
    cout << "9: To exit" << endl;
} //end displayMenu
