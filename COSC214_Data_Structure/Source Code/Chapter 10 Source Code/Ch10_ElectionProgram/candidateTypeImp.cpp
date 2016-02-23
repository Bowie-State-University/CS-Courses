#include <iostream>
#include <string>
#include <iomanip>
#include "candidateType.h"

using namespace std;

void candidateType::setVotes(int region, int votes)
{
	votesByRegion[region - 1] = votes;
}

void candidateType::updateVotesByRegion(int region, int votes)
{
	votesByRegion[region - 1] = votesByRegion[region - 1] + votes;
}

void candidateType::calculateTotalVotes()
{
	totalVotes = 0;

	for (int i = 0; i < NO_OF_REGIONS; i++)
		totalVotes += votesByRegion[i];
}

int candidateType::getTotalVotes() const
{
	return totalVotes;
}

void candidateType::printData() const
{
	cout << left
	     << setw(10) << firstName << " "
	     << setw(10) << lastName << " ";

	cout << right;

	for (int i = 0; i < NO_OF_REGIONS; i++)
		cout << setw(7) << votesByRegion[i] << "  ";
	cout << setw(7) << totalVotes << endl;
}

candidateType::candidateType()
{
	for (int i = 0; i < NO_OF_REGIONS; i++)
		votesByRegion[i] = 0;

	totalVotes = 0;
}

bool candidateType::operator==(const candidateType& right) const
{
	return(firstName == right.firstName 
		   && lastName == right.lastName);
}

bool candidateType::operator!=(const candidateType& right) const
{
	cout << "See Programming Exercise 13." << endl;
	return false;
}

bool candidateType::operator<=(const candidateType& right) const
{
	cout << "See Programming Exercise 13." << endl;
	return false;
}

bool candidateType::operator<(const candidateType& right) const
{
	cout << "See Programming Exercise 13." << endl;
	return false;
}

bool candidateType::operator>=(const candidateType& right) const
{
	cout << "See Programming Exercise 13." << endl;
	return false;
}

bool candidateType::operator>(const candidateType& right) const
{
	cout << "See Programming Exercise 13." << endl;
	return false;
}

const candidateType& candidateType::operator=(const candidateType& right)
{
	cout << "See Programming Exercise 13." << endl;
	
 	return *this;
}

const candidateType& candidateType::operator=(const personType& right)
{
	cout << "See Programming Exercise 13." << endl;

	return *this;
}

