#ifndef dateType_H
#define dateType_H 
   
class dateType
{
public:
    void setDate(int month, int day, int year);
      //Function to set the date.
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters.
      //Postcondition: dMonth = month; dDay = day;
      //               dYear = year

    int getDay() const;
      //Function to return the day.
      //Postcondition: The value of dDay is returned.

    int getMonth() const;
      //Function to return the month.  
      //Postcondition: The value of dMonth is returned.

    int getYear() const;
      //Function to return the year.     
      //Postcondition: The value of dYear is returned.

    void printDate() const;
      //Function to output the date in the form mm-dd-yyyy.

    dateType(int month = 1, int day = 1, int year = 1900);
      //Constructor to set the date
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters.
      //Postcondition: dMonth = month; dDay = day; dYear = year;
      //               If no values are specified, the default 
      //               values are used to initialize the member
      //               variables.

private:
    int dMonth; //variable to store the month
    int dDay;   //variable to store the day
    int dYear;  //variable to store the year
};

#endif