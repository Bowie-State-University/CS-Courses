#ifndef H_partTimeEmployee
#define H_partTimeEmployee
  
#include "employeeType.h"
    
class partTimeEmployee: public employeeType
{
public:
    void set(string first, string last, long id, double rate, 
             double hours);
      //Function to set the first name, last name, id,
      //payRate, and hoursWorked according to the
      //parameters.
      //Postcondition: firstName = first; lastName = last;
      //               personId = id;
      //               payRate = rate; hoursWorked = hours

    double calculatePay() const; 
      //Function to calculate and return the wages.
      //Postcondition: Pay is calculated and returned

    void setPayRate(double rate);
      //Function to set the salary.
      //Postcondition: payRate = rate

    double getPayRate();
      //Function to retrieve the salary.
      //Postcondition: returns payRate

    void setHoursWorked(double hours);
      //Function to set the bonus.
      //Postcondition: hoursWorked = hours

    double getHoursWorked();
      //Function to retrieve the bonus.
      //Postcondition: returns empBonus

    void print() const;
      //Function to output the Id, first name, last name, 
      //and the wages.
      //Postcondition: Outputs 
      //        Id: 
      //        Name: firstName lastName 
      //        Wages: $$$$.$$

    partTimeEmployee(string first = "", string last = "", 
                     long id = 0,
                     double rate = 0, double hours = 0);
      //Constructor with parameters
      //Sets the first name, last name, payRate, and 
      //hoursWorked according to the parameters. If
      //no value is specified, the default values are 
      //assumed.
      //Postcondition: firstName = first; lastName = last; 
      //               personId = id, payRate = rate;
      //               hoursWorked = hours

private:
    double payRate;     //stores the pay rate
    double hoursWorked; //stores the hours worked
}; 

#endif