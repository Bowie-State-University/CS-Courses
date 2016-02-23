#ifndef H_VideoLinkedListType
#define H_VideoLinkedListType
 
#include <iostream>
#include <string>
#include "binarySearchTree.h"
#include "videoType.h"

using namespace std;

class videoBinaryTree:public bSearchTreeType<videoType>
{
public:
    bool videoSearch(string title);
      //Function to search the list to see whether a particular
      //title, specified by the parameter title, is in stock. 
      //Postcondition: Returns true if the title is found, 
      //    false otherwise.
    bool isVideoAvailable(string title);
      //Function to determine whether at least one copy of a 
      //particular video is in stock.
      //Postcondition: Returns true if at least one copy is in
      //    stock, false otherwise.
    void videoCheckOut(string title);
      //Function to check out a video, that is, rent a video.
      //Postcondition: copiesInStock is decremented by 1.
    void videoCheckIn(string title);
      //Function to check in a video returned by a customer.
      //Postcondition: copiesInStock is incremented by 1.   
    bool videoCheckTitle(string title);
      //Function to determine whether a particular video is in 
      //stock.
      //Postcondition: Returns true if the video is in stock,
      //    false otherwise.

    void videoUpdateInStock(string title, int num);
      //Function to update the number of copies of a video by 
      //adding the value of the parameter num. The parameter title
      //specifies the name of the video for which the number of 
      //copies is to be updated.
      //Postcondition: copiesInStock = copiesInStock + num

    void videoSetCopiesInStock(string title, int num);
      //Function to reset the number of copies of a video. The
      //parameter title specifies the name of the video for which
      //the number of copies is to be reset; the parameter num 
      //specifies the number of copies.
      //Postcondition: copiesInStock = num

    void videoPrintTitle();
      //Function to print the titles of all the videos in stock.

private:
    void searchVideoList(string title, bool& found,
                         binaryTreeNode<videoType>* &current);
      //Function to search the video list for a particular video, 
      //specified by the parameter title. 
      //Postcondition: If the video is found, the parameter found 
      //    is set to true, false otherwise. The parameter current
      //    points to the node containing the video.

    void inorderTitle(binaryTreeNode<videoType> *p);
      //Function to print the titles of all the videos in stock. 
};

#endif