#ifndef H_personType
#define H_personType

//*************************************************************
// Author: D.S. Malik
// 
// This class specifies the members to implement a person’s
// name.
//*************************************************************

#include <iostream>
#include <string>

using namespace std; 

class personType
{
        //Overload the stream insertion and extraction operators.
    friend istream& operator>>(istream&, personType&);
    friend ostream& operator<<(ostream&, const personType&);

public:
    const personType& operator=(const personType&);
      //Overload the assignment operator.

    void setName(string first, string last);
       //Function to set firstName and lastName according to 
      //the parameters.
      //Postcondition: firstName = first; lastName = last

    string getFirstName() const;
      //Function to return the first name.
      //Postcondition: The value of firstName is returned.

    string getLastName() const;
      //Function to return the last name.
      //Postcondition: The value of lastName is returned.  

    personType(string first = "", string last = "");       
      //constructor with parameters       
      //Set firstName and lastName according to the parameters.
      //Postcondition: firstName = first; lastName = last

        //Overload the relational operators.
    bool operator==(const personType& right) const;
    bool operator!=(const personType& right) const;
    bool operator<=(const personType& right) const;
    bool operator<(const personType& right) const;
    bool operator>=(const personType& right) const;
    bool operator>(const personType& right) const;

protected:
    string firstName; //variable to store the first name
    string lastName;  //variable to store the last name
};


#endif
