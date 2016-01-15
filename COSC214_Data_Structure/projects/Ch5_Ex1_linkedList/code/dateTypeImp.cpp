//Implementation file date

#include <iostream>
#include "dateType.h"

using namespace std;

void dateType::setDate(int month, int day, int year)
{
    if (year >= 1)
        dYear = year;
    else
        dYear = 1900;

    if (1 <= month && month <= 12)
        dMonth = month;
    else
        dMonth = 1;

    switch (dMonth)
    {
    case 1: 
    case 3: 
    case 5: 
    case 7:
    case 8: 
    case 10: 
    case 12:		
        if (1 <= day && day <= 31)
            dDay = day;
        else
            dDay = 1;
        break;
    case 4: 
    case 6: 
    case 9:  
    case 11: 
        if (1 <= day && day <= 30)
            dDay = day;
        else
            dDay = 1;
        break;
    case 2: 
        if (isLeapYear(year))
        {
            if (1 <= day && day <= 29)
                dDay = day;
            else
                dDay = 1;
        }
        else
        {
            if (1 <= day && day <= 28)
                dDay = day;
            else
            dDay = 1;
        }
    }
}

int dateType::getDay() const 
{
    return dDay;
}

int dateType::getMonth() const 
{
    return dMonth;
}

int dateType::getYear() const 
{
    return dYear;
}

void dateType::printDate() const
{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

	//constructor with parameter
dateType::dateType(int month, int day, int year) 
{ 
    setDate(month, day, year);
}

bool dateType::isLeapYear(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return true;
    else 
        return false;
}
