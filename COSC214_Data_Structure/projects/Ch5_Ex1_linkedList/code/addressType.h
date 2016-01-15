
#ifndef H_addressType
#define H_addressType
 
#include <string>

using namespace std;

class addressType
{
public:
	void print() const;
	void setAddress(string sAddress, string c, string s, string z);
	void getAddress(string& sAddress, string& c, 
					string& s, string& z);

	addressType(string sAddress = "", string c = "",
			    string s = "", string z = "");

private:
	string streetAddress;
	string city;
	string state;
	string zip;
};

#endif