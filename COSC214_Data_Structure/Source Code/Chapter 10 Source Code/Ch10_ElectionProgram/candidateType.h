#ifndef H_candidateType
#define H_candidateType

//*************************************************************
// Author: D.S. Malik
// 
// This class specifies the members to implement a candidate.
//*************************************************************

#include <string>
#include "personType.h"  

using namespace std;  

const int NO_OF_REGIONS = 4;  

class candidateType: public personType
{
public:
    const candidateType& operator=(const candidateType&);
      //Overload the assignment operator for objects of the
      //type candidateType

    const candidateType& operator=(const personType&);
      //Overload the assignment operator for objects so that
      //the value of an object of type personType can be 
      //assigned to an object of type candidateType

    void updateVotesByRegion(int region, int votes);
      //Function to update the votes of a candidate for a
      //particular region.
      //Postcondition: Votes for the region specified by the
      //    parameter are updated by adding the votes specified
      //    by the parameter votes.

    void setVotes(int region, int votes);
      //Function to set the votes of a candidate for a
      //particular region.
      //Postcondition: Votes for the region specified by the
      //    parameter are set to the votes specified by the
      //    parameter votes.

    void calculateTotalVotes();
      //Function to calculate the total votes received by a
      //candidate.
      //Postcondition: The votes in each region are added and 
      //    assigned to totalVotes.

    int getTotalVotes() const;
      //Function to return the total votes received by a
      //candidate.
      //Postcondition: The value of totalVotes is returned.

    void printData() const;
      //Function to output the candidate's name, the votes
      //received in each region, and the total votes received.

    candidateType();
      //Default constructor.
      //Postcondition: Candidate's name is initialized to blanks, 
      //    the number of votes in each region, and the total 
      //    votes are initialized to 0.
    
        //Overload the relational operators.
    bool operator==(const candidateType& right) const;
    bool operator!=(const candidateType& right) const;
    bool operator<=(const candidateType& right) const;
    bool operator<(const candidateType& right) const;
    bool operator>=(const candidateType& right) const;
    bool operator>(const candidateType& right) const;

private:
    int votesByRegion[NO_OF_REGIONS];   //array to store the votes
                         // received in each region
    int totalVotes; //variable to store the total votes
};


#endif
