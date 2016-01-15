
#include <iostream>
#include <fstream>
#include <string>
#include "orderedLinkedList.h"
#include "addressBookType.h"
 
using namespace std;

void loadAddressBook(addressBookType& adBook, bool& flag);
void saveData(addressBookType& adBook);
void addPerson(addressBookType& adBook);
void showMenu();

int main()
{
    addressBookType addressBook;
    string str;
    string str1;
    string str2;
    int choice;
    int selection;
    int month;
    string lastN;
    string firstN;
    char ch;
 
    bool isFile = true;

    extPersonType temp;

    loadAddressBook(addressBook, isFile);

    if (!isFile)
        return 1;

    showMenu();

    cin >> choice;
    cin.get(ch);

    while (choice != 9)
    {
        switch (choice)
        {
        case 1: 
            cout << "Enter the last name of the person: ";
            getline(cin , str);
            cout << endl;
            addressBook.searchName(str);
            break;
        case 2: 
            cout << "Enter the last name of the person: ";
            getline(cin , str);
            cout << endl;

            addressBook.printInfoOf(str);
            break;
        case 3: 
            cout << "Enter the month number: ";
            cin >> month;
            cin.get(ch);
            cout << endl;

            addressBook.printNameInTheMonth(month);
            break;
		case 4: 
            cout << "Enter starting last name: ";
            getline(cin , str1);
            cout << endl;
            cout << "Enter ending last name: ";
            getline(cin , str2);
            cout << endl;

            addressBook.printNamesBetweenLastNames(str1, str2);
            break;
		case 5: 
            cout << "Enter person type Family, Friend, Business: ";
            getline(cin , str);
            cout << endl;

            addressBook.printNamesWithStatus(str);
            break;
		case 6: 
            addressBook.print();
            break;
		case 7: 
            cout << "Enter 1 to add and 2 to delete: ";
            cin >> selection;
            cin.get(ch);
            cout << endl;
				
            if (selection == 1)
                addPerson(addressBook);
            else if (selection == 2)
            {
                cout << "Enter the last name of the "
                    << "person to be deleted: ";
                getline(cin , lastN);
                cout << endl;

                cout << "Enter the first name of the "
                     << "person to be deleted: ";
                getline(cin, firstN);
                cout << endl;

                temp.setName(firstN, lastN);

                addressBook.deleteNode(temp);
            }
            else
                cout << "Bad selection" << endl;
            break;
		case 8: 
            saveData(addressBook);
            break;
		default: 
            cout << "Invalid choice" << endl;
        }

        showMenu();
        cin >> choice;
        cin.get(ch);
    }

    char response;

    cout << "Save data Yes (Y/y) No(N/n)?: ";
    cin >> response;
    cout << endl;

    if (response == 'y' || response == 'Y')
        saveData(addressBook);
		
    return 0;
}

void loadAddressBook(addressBookType& adBook, bool& flag)
{
    ifstream infile;

    char filename[50];
	
    string first;
    string last;

    int month;
    int day;
    int year;

    string street;
    string city;
    string state;
    string zip;

    string phone;
    string pStatus;

    extPersonType temp;

    cout << "Enter file name: ";
    cin >> filename;
    cout << endl;

    infile.open(filename);
    if (!infile)
    {
        cout << "Input file does not exists. "
             << "Program terminates!!!" << endl;
        flag = false;
        return;
    }

    infile >> first >> last >> month >> day >> year;
    infile.ignore(100,'\n');
    getline(infile, street);
    getline(infile, city);
    getline(infile, state);
    infile >> zip >> phone >> pStatus;

    while (infile)
    {
        temp.setInfo(first, last, month, day, year, street, city, state,
                     zip, phone, pStatus);

        adBook.insertNode(temp);

        infile >> first >> last >> month >> day >> year;	
        infile.ignore(100,'\n');
        getline(infile, street);
        getline(infile, city);
        getline(infile, state);
        infile >> zip >> phone >> pStatus;
    }
}

void saveData(addressBookType& adBook)
{
    ofstream outfile;

    char filename[50];

    cout << "Enter file name: ";
    cin >> filename;
    cout << endl;

    outfile.open(filename);
    if (!outfile)
    {
        cout << "Input file does not exists. "
             << "Program terminates!!!" << endl;
        return;
    }

    adBook.saveData(outfile);
}

void addPerson(addressBookType& adBook)
{
    string first;
    string last;

    int month;
    int day;
    int year;

    string street;
    string city;
    string state;
    string zip;

    string phone;
    string pStatus;

    char ch;

    extPersonType temp;

    cout << "Enter first name: ";
    cin >> first;
    cout << endl;

    cout << "Enter last name: ";
    cin >> last;
    cout << endl;

    cout << "Enter birth month: ";
    cin >> month;
    cout << endl;
	
    cout << "Enter birth day: ";
    cin >> day;
    cout << endl;

    cout << "Enter birth year: ";
    cin >> year;
    cout << endl;
	
    cin.get(ch);

    cout << "Enter street address: ";
    getline(cin, street);
    cout << endl;

    cout << "Enter city: ";
    getline(cin, city);
    cout << endl;

    cout << "Enter state: ";
    getline(cin, state);
    cout << endl;

    cout << "Enter zip code: ";
    cin >> zip;
    cout << endl;
	
    cout << "Enter phone number: ";
    cin >> phone;
    cout << endl;
	
    cout << "Enter personal status (Family, Friend, Business: ";
    cin >> pStatus;
    cout << endl;

    temp.setInfo(first,last,month,day,year,street,city,state,
                 zip,phone,pStatus);

    adBook.insertNode(temp);
}

void showMenu()
{
    cout << "Welcome to the address book program." << endl;
    cout << "Choose among the following options:" << endl;
    cout << "1: To see if a person is in the address book" << endl;
    cout << "2: Print the information of a person" << endl;
    cout << "3: Print the names of person having birthday in a "
         << "particular month" << endl;
    cout << "4: Print the names of persons between two last names" << endl;
    cout << "5: Print the names of persons having a particular status" << endl;
    cout << "6: Print the address book" << endl;
    cout << "7: Add/Delete a person to the address book" << endl;
    cout << "8: Save data" << endl;
    cout << "9: Terminate the program" << endl;
}