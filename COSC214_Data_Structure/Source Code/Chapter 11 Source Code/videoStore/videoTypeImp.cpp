#include <iostream>
#include <string>
#include "videoType.h"

using namespace std;
 
void videoType::setVideoInfo(string title, string star1, 
							 string star2, string producer, 
							 string director, 
							 string productionCo,
							 int setInStock)
{
	videoTitle = title;
	movieStar1 = star1;
	movieStar2 = star2;
	movieProducer = producer;
	movieDirector = director;
	movieProductionCo = productionCo;
	copiesInStock = setInStock;
}

void videoType::checkIn()
{
	copiesInStock++;
}

void videoType::checkOut()
{
	if(getNoOfCopiesInStock() > 0)
		copiesInStock--;
	else
		cout<<"Currently out of Stock"<<endl;
}

int videoType::getNoOfCopiesInStock() const
{
	return copiesInStock;
}

void videoType::printTitle() const
{
	cout<<"Video Title: "<<videoTitle<<endl;
}

void videoType::printInfo() const
{
	cout<<"Video Title: "<<videoTitle<<endl;
	cout<<"Stars: "<<movieStar1<<" and "<<movieStar2<<endl;
	cout<<"Producer: "<<movieProducer<<endl;
	cout<<"Director: "<<movieDirector<<endl;
	cout<<"Production Company: "<<movieProductionCo<<endl;
	cout<<"Copies in stock: "<<copiesInStock<<endl;
}

bool videoType::checkTitle(string title)
{
	return(videoTitle == title);
}

void videoType::updateInStock(int num)
{
	copiesInStock += num;
}

void videoType::setCopiesInStock(int num)
{
	copiesInStock = num;
}

string videoType::getTitle()
{
	return videoTitle;
}

videoType::videoType(string title, string star1, 
					 string star2, string producer, 
					 string director, string productionCo, 
					 int setInStock)
{
	videoTitle = title;
	movieStar1 = star1;
	movieStar2 = star2;
	movieProducer = producer;
	movieDirector = director;
	movieProductionCo = productionCo;
	copiesInStock = setInStock;
}

bool videoType::operator==(const videoType& right) const
{
	return (videoTitle == right.videoTitle);
}

bool videoType::operator!=(const videoType& right) const
{
	return (videoTitle != right.videoTitle);
}

bool videoType::operator<(const videoType& right) const
{
	return (videoTitle < right.videoTitle);
}

bool videoType::operator<=(const videoType& right) const
{
	return (videoTitle <= right.videoTitle);
}

bool videoType::operator>(const videoType& right) const
{
	return (videoTitle > right.videoTitle);
}

bool videoType::operator>=(const videoType& right) const
{
	return (videoTitle >= right.videoTitle);
}

ostream& operator<<(ostream& os, const videoType &video)
{
	os<<endl;
	os<<"Video Title: "<<video.videoTitle<<endl;
	os<<"Stars: "<<video.movieStar1<<" and "
	  <<video.movieStar2<<endl;
	os<<"Producer: "<<video.movieProducer<<endl;
	os<<"Director: "<<video.movieDirector<<endl;
	os<<"Production Company: "<<video.movieProductionCo<<endl;
	os<<"Copies in stock: "<<video.copiesInStock<<endl;
	os<<"_____________________________________"<<endl;
	return os;
}
