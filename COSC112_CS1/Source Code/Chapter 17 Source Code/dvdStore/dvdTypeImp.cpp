#include <iostream>
#include <string>
#include "dvdType.h"
  
using namespace std; 
 
void dvdType::setDVDInfo(string title, string star1,
                         string star2, string producer, 
                         string director,
                         string productionCo,
                         int setInStock)
{
    dvdTitle = title;
    movieStar1 = star1;
    movieStar2 = star2;
    movieProducer = producer;
    movieDirector = director;
    movieProductionCo = productionCo;
    copiesInStock = setInStock;
}

void dvdType::checkOut()
{
    if (getNoOfCopiesInStock() > 0)
        copiesInStock--;
    else
        cout << "Currently out of stock" << endl;
}

void dvdType::checkIn()
{
    copiesInStock++;
}

int dvdType::getNoOfCopiesInStock() const
{
    return copiesInStock;
}

void dvdType::printTitle() const
{
    cout << "DVD Title: " << dvdTitle << endl;
}

void dvdType::printInfo() const
{
    cout << "DVD Title: " << dvdTitle << endl;
    cout << "Stars: " << movieStar1 << " and " 
         << movieStar2 << endl;
    cout << "Producer: " << movieProducer << endl;
    cout << "Director: " << movieDirector << endl;
    cout << "Production Company: " << movieProductionCo
         << endl;
    cout << "Copies in stock: " << copiesInStock
         << endl;
}

bool dvdType::checkTitle(string title)
{
    return(dvdTitle == title);
}

void dvdType::updateInStock(int num)
{
    copiesInStock += num;
}

void dvdType::setCopiesInStock(int num)
{
    copiesInStock = num;
}

string dvdType::getTitle() const
{
    return dvdTitle;
}

dvdType::dvdType(string title, string star1, 
                 string star2, string producer, 
                 string director,
                 string productionCo, int setInStock)
{
    setDVDInfo(title, star1, star2, producer, director,
               productionCo, setInStock);
}

bool dvdType::operator==(const dvdType& other) const
{
    return (dvdTitle == other.dvdTitle);
}

bool dvdType::operator!=(const dvdType& other) const
{
    return (dvdTitle != other.dvdTitle);
}

ostream& operator<< (ostream& osObject, const dvdType& dvd)
{
    osObject << endl;
    osObject << "DVD Title: " << dvd.dvdTitle << endl;
    osObject << "Stars: " << dvd.movieStar1 << " and "
             << dvd.movieStar2 << endl;
    osObject << "Producer: " << dvd.movieProducer << endl;
    osObject << "Director: " << dvd.movieDirector << endl;
    osObject << "Production Company: "
             << dvd.movieProductionCo << endl;
    osObject << "Copies in stock: " << dvd.copiesInStock 
             << endl;
    osObject << "_____________________________________" 
             << endl;

    return osObject;
}
