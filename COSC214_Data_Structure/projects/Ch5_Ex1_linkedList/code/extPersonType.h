//extPersonType
  
#ifndef H_extPersonType
#define H_extPersonType

#include <string>
#include "addressType.h"
#include "dateType.h"
#include "personType.h"

class extPersonType: public personType
{
public:
	void printAddress() const;
	void printInfo() const;
	void setInfo(string fName, string lName,
				int month, int day, int year,
				string street, string c, string s, 
				string z, string phone, string pStatus);
	void setInfo(string fName, string lName,
				 dateType d, addressType ad, 
				 string phone, string pStatus);
	bool isLastName(string lName) const;

	void getAddress(string& sAddress, string& c, 
					string& s, string& z);

	string getStatus() const;
	string getPhoneNumber() const;

	bool isStatus(string status);

	bool isDOB(int month, int day, int year);
	void getDOB(int& month, int& day, int& year);

	bool isMonth(int month) const;

	extPersonType(string fName = "", string lName = "", 
			      int month = 1, int day = 1, int year = 1900,
				  string street = "", string c = "", string s = "",
				  string z = "", string phone = "", string pStatus = "");

	bool operator==(const extPersonType&) const;
	bool operator!=(const extPersonType&) const;
	bool operator<=(const extPersonType&) const;
	bool operator<(const extPersonType&) const;
	bool operator>=(const extPersonType&) const;
	bool operator>(const extPersonType&) const;

private:
	addressType address;
	dateType dob;
	string phoneNumber;
	string personStatus;
};

#endif