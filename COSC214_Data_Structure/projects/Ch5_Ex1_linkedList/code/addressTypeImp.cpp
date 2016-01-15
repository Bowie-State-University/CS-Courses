
#include <iostream>
#include <string>
#include "addressType.h"

using namespace std;

void addressType::print() const
{
    cout << streetAddress << endl;
    cout << city << ", " << state << " - " << zip << endl;
}
  
void addressType::setAddress(string sAddress, string c, 
                             string s, string z)
{
	streetAddress = sAddress;
	city = c;
	state = s;
	zip = z;
}

void addressType::getAddress(string& sAddress, string& c, 
                            string& s, string& z)
{	
    sAddress = streetAddress;
    c = city;
    s = state;
    z = zip;
}

addressType::addressType(string sAddress, string c, 
                        string s, string z)
{
    streetAddress = sAddress;
    city = c;
    state = s;
    zip = z;
}

