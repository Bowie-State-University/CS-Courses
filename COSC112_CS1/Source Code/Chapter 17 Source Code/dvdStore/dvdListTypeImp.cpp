#include <iostream>
#include <string>
 
#include "dvdListType.h"

using namespace std; 
 
void dvdListType::searchDVDList(string title, bool& found,  
                         nodeType<dvdType>* &current) const
{
    found = false;   //set found to false
   
    current = first; //set current to point to the first node
                     //in the list

    while (current != nullptr && !found)     //search the list
        if (current->info.checkTitle(title)) //the item is found
            found = true;
        else
            current = current->link; //advance current to 
                                     //the next node    
}//end searchDVDList

bool dvdListType::isDVDAvailable(string title) const
{
    bool found;
    nodeType<dvdType> *location;

    searchDVDList(title, found, location);

    if (found)
        found = (location->info.getNoOfCopiesInStock() > 0);
    else
        found = false;

    return found;
}

void dvdListType::dvdCheckIn(string title)
{
    bool found = false;
    nodeType<dvdType> *location;

    searchDVDList(title, found, location); //search the list

    if (found)
        location->info.checkIn();
    else
        cout << "The store does not carry " << title
             << endl;
}

void dvdListType::dvdCheckOut(string title)
{
    bool found = false;
    nodeType<dvdType> *location;

    searchDVDList(title, found, location); //search the list

    if (found)
        location->info.checkOut();
    else
        cout << "The store does not carry " << title
             << endl;
}
 
bool dvdListType::dvdCheckTitle(string title) const
{
    bool found = false;
    nodeType<dvdType> *location;

    searchDVDList(title, found, location); //search the list

    return found;
}

void dvdListType::dvdUpdateInStock(string title, int num)
{
    bool found = false;
    nodeType<dvdType> *location;

    searchDVDList(title, found, location); //search the list

    if (found)
        location->info.updateInStock(num);
    else
        cout << "The store does not carry " << title
             << endl;
}

void dvdListType::dvdSetCopiesInStock(string title, int num)
{
    bool found = false;
    nodeType<dvdType> *location;

    searchDVDList(title, found, location);

    if (found)
        location->info.setCopiesInStock(num);
    else
        cout << "The store does not carry " << title
             << endl;
}

bool dvdListType::dvdSearch(string title) const
{
    bool found = false;
    nodeType<dvdType> *location;

    searchDVDList(title, found, location);

    return found;
}

void dvdListType::dvdPrintTitle() const
{
    nodeType<dvdType>* current;

    current = first;
    while (current != nullptr)
    {
        current->info.printTitle();
        current = current->link;
    }
}
