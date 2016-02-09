#ifndef H_videoType
#define H_videoType

//************************************************************
// Author: D.S. Malik
// 
// class videoType
// This class specifies the members to implement a video.
//************************************************************

#include <iostream>
#include <string>

using namespace std;

class videoType
{
    friend ostream& operator<< (ostream&, const videoType&);

public:
    void setVideoInfo(string title, string star1, 
                      string star2, string producer, 
                      string director, string productionCo, 
                      int setInStock);
      //Function to set the details of a video. 
      //The private member variables are set according to the 
      //parameters.
      //Postcondition: videoTitle = title; movieStar1 = star1;  
      //     movieStar2 = star2; movieProducer = producer; 
      //     movieDirector = director; 
      //     movieProductionCo = productionCo; 
      //     copiesInStock = setInStock;

    int getNoOfCopiesInStock() const;
      //Function to check the number of copies in stock. 
      //Postcondition: The value of copiesInStock is returned.

    void checkOut();
      //Function to rent a video. 
      //Postcondition: The number of copies in stock is 
      //    decremented by one.

    void checkIn();
      //Function to check in a video. 
      //Postcondition: The number of copies in stock is 
      //    incremented by one.

    void printTitle() const;
      //Function to print the title of a movie.

    void printInfo() const;
      //Function to print the details of a video.
      //Postcondition: The title of the movie, stars, director,
      //    and so on are displayed on the screen.

    bool checkTitle(string title);
      //Function to check whether the title is the same as the
      //title of the video.
      //Postcondition: Returns the value true if the title is the
      //    same as the title of the video; false otherwise.

    void updateInStock(int num);
      //Function to increment the number of copies in stock by 
      //adding the value of the parameter num.
      //Postcondition: copiesInStock = copiesInStock + num;

    void setCopiesInStock(int num);
      //Function to set the number of copies in stock.
      //Postcondition: copiesInStock = num;

    string getTitle() const;
      //Function to return the title of the video.
      //Postcondition: The title of the video is returned.

    videoType(string title = "", string star1 = "", 
              string star2 = "", string producer = "", 
              string director = "", string productionCo = "",
              int setInStock = 0);
      //constructor
      //The member variables are set according to the 
      //incoming parameters. If no values are specified, the 
      //default values are assigned.
      //Postcondition: videoTitle = title; movieStar1 = star1; 
      //    movieStar2 = star2; movieProducer = producer;
      //    movieDirector = director;
      //    movieProductionCo = productionCo;
      //    copiesInStock = setInStock;

      //Overload the relational operators.
    bool operator==(const videoType&) const;
    bool operator!=(const videoType&) const;

private:
    string videoTitle;  //variable to store the name of the movie
    string movieStar1;  //variable to store the name of the star
    string movieStar2;  //variable to store the name of the star 
    string movieProducer; //variable to store the name of the
                          //producer 
    string movieDirector; //variable to store the name of the
                          //director 
    string movieProductionCo; //variable to store the name
                              //of the production company 
    int copiesInStock;  //variable to store the number of 
                        //copies in stock
};


#endif