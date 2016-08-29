#ifndef H_fullTimeEmployee
#define H_partTimeEmployee 
 
#include "employeeType.h"
    
class fullTimeEmployee: public employeeType
{
public:
    void set(string first, string last, long id, 
             double salary, double bonus);
      //Function to set the first name, last name, 
      //id, and salary according to the parameters.
      //Postcondition: firstName = first; lastName = last;
      //               personId = id; empSalary = salary;
      //               empBonus = bonus

    void setSalary(double salary);
      //Function to set the salary.
      //Postcondition: empSalary = salary

    double getSalary();
      //Function to retrieve the salary.
      //Postcondition: returns empSalary

    void setBonus(double bonus);
      //Function to set the bonus.
      //Postcondition: empBonus = bonus

    double getBonus();
      //Function to retrieve the bonus.
      //Postcondition: returns empBonus

    void print() const;
      //Function to output the id, first name, last name, 
      //and the wages.
      //Postcondition: Outputs 
      //        Id: 
      //        Name: firstName lastName 
      //        Wages: $$$$.$$

    double calculatePay() const; 
      //Function to calculate and return the wages.
      //Postcondition: Pay is calculated and returned

    fullTimeEmployee(string first = "", string last = "", 
                     long id = 0, double salary = 0,
                     double bonus = 0);
      //Constructor with default parameters.
      //Sets the first name, last name, id, salary, and 
      //bonus according to the parameters. If
      //no value is specified, the default values are 
      //assumed.
      //Postcondition: firstName = first; lastName = last;
      //               personId = id; empSalary = salary;
      //               empBonus = bonus

private:
    double empSalary; 
    double empBonus;
};

#endif