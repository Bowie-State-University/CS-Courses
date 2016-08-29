#ifndef H_partTimeEmployee
#define H_partTimeEmployee 
  
#include "personType.h"
 
class partTimeEmployee: public personType
{
public:
    void print() const;
      //Function to output the first name, last name, and 
      //the wages.
      //Postcondition: Outputs 
      //        firstName lastName wages are $$$$.$$

    double calculatePay() const; 
      //Function to calculate and return the wages.
      //Postcondition: Pay is calculated and returned

    void setNameRateHours(string first, string last,
                          double rate, double hours);
      //Function to set the first name, last name, payRate,
      //and hoursWorked according to the parameters.
      //Postcondition: firstName = first; lastName = last;
      //               payRate = rate; hoursWorked = hours

    partTimeEmployee(string first = "", string last = "", 
                     double rate = 0, double hours = 0);
      //Constructor with parameters
      //Sets the first name, last name, payRate, and hoursWorked
      //according to the parameters. If no value is specified, 
      //the default values are assumed.
      //Postcondition: firstName = first; lastName = last; 
      //               payRate = rate; hoursWorked = hours

private:
    double payRate;     //variable to store the pay rate
    double hoursWorked; //variable to store the hours worked
}; 

#endif