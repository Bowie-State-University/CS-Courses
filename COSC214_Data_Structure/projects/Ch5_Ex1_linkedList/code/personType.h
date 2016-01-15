//personType.h

#ifndef H_personType
#define H_personType

#include <string>
  
using namespace std;

class personType
{
public:
    void print() const;
       //Function to output the first name and last name
       //in the form firstName lastName.
  
    void setName(string first, string last);
       //Function to set firstName and lastName according 
       //to the parameters.
       //Postcondition: firstName = first; lastName = last

    string getFirstName() const;
       //Function to return firstName and lastName via the 
       //parameters.
       //Postcondition: The value of firstName is returned

    string getLastName() const;
       //Function to return firstName and lastName via the 
       //parameters.
       //Postcondition: The value of lastName is returned

    personType(string first = "", string last = "");
       //Constructor
       //Sets firstName and lastName according to the parameters.
       //The default values of the parameters are empty strings.
       //Postcondition: firstName = first; lastName = last  

	bool operator==(const personType&) const;
	bool operator!=(const personType&) const;
	bool operator<=(const personType&) const;
	bool operator<(const personType&) const;
	bool operator>=(const personType&) const;
	bool operator>(const personType&) const;

 private:
    string firstName; //store the first name
    string lastName;  //store the last name
};

#endif