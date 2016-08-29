#include <iostream>
#include <string>
#include "fullTimeEmployee.h"
 
using namespace std;
    
void fullTimeEmployee::set(string first, string last, 
                           long id,
                           double salary, double bonus)
{
    setName(first, last);
    setId(id);
    empSalary = salary;
    empBonus = bonus;
}

void fullTimeEmployee::setSalary(double salary)
{
    empSalary = salary;
}

double fullTimeEmployee::getSalary()
{
    return empSalary;
}

void fullTimeEmployee::setBonus(double bonus)
{
    empBonus = bonus;
}

double fullTimeEmployee::getBonus()
{
    return empBonus;
}

void fullTimeEmployee::print() const
{
    cout << "Id: " << getId() << endl;
    cout << "Name: ";
    personType::print();     
    cout << endl;
    cout << "Wages $" << calculatePay() << endl;
}

double fullTimeEmployee::calculatePay() const
{
    return empSalary + empBonus;
}

      //constructor 
fullTimeEmployee::fullTimeEmployee(string first, string last, 
                                   long id, double salary,
                                   double bonus)
                : employeeType(first, last, id) 
{
    empSalary = salary;
    empBonus = bonus;
} 
