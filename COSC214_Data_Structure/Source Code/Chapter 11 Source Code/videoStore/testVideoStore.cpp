#include <iostream>
#include <fstream>
#include <string>
#include "binarySearchTree.h"
#include "videoType.h"
#include "videoBinaryTree.h"

//****************************************************************
// Author: D.S. Malik
//
// This program illustrates how to use the classes videoType 
// and videoBinaryTree to create and process a list of videos.
//****************************************************************

using namespace std;

void createVideoList(ifstream& infile, 
					 videoBinaryTree& videoList);
void displayMenu();

int main()
{
    videoBinaryTree  videoList;
    int choice;
    char ch;
    string title;

    ifstream infile;

    infile.open("videoDat.txt");
    if (!infile)
    {
        cout << "The input file does not exist" << endl;
        return 1;
    }

    createVideoList(infile, videoList);
    infile.close();

    displayMenu(); 
    cout << "Enter your choice: ";		
    cin >> choice;  //get the request
    cin.get(ch);
    cout << endl;

        //process the request
    while (choice != 9)
    {
        switch(choice)
        {
        case 1: 
            cout << "Enter the title: ";
            getline(cin,title);
            cout << endl;
            if (videoList.videoSearch(title))
                cout << "Title found." << endl;
            else
                cout << "The store does not carry this title."
                     << endl;
            break;

        case 2: 
            cout << "Enter the title: ";
            getline(cin, title);
            cout << endl;
            if (videoList.videoSearch(title))
            {
                if (videoList.isVideoAvailable(title))
                {
                    videoList.videoCheckOut(title);
                    cout << "Enjoy your movie: " << title << endl;
                }
                else
                    cout << "The video is currently out of stock."
                         << endl;
            }
            else
                cout << "The video is not in the store." << endl;
            break;

        case 3: 
            cout << "Enter the title: ";
            getline(cin, title);
            cout << endl;
            if (videoList.videoSearch(title))
            {
                videoList.videoCheckIn(title);
                cout << "Thanks for returning " << title << endl;
            }
            else
                cout << "This video is not from our store." << endl;
            break;

        case 4: 
            cout << "Enter the title: ";
            getline(cin, title);
            cout << endl;
            if (videoList.videoSearch(title))
            {
                if (videoList.isVideoAvailable(title))
                    cout << "The video is currently in stock." 
                         << endl;
                else
                    cout << "The video is out of stock." << endl;
            }
            else
                cout << "The video is not in the store." << endl;
            break;

        case 5: 
            videoList.videoPrintTitle();
             break;

        case 6: 
            videoList.inorderTraversal();
            break;

        default: cout << "Invalid selection." << endl;
        }//end switch

        displayMenu(); 
        cout << "Enter your choice: ";
        cin >> choice;  //get the next request
        cin.get(ch);
        cout << endl;
    }//end while

    return 0;
}

void createVideoList(ifstream& infile, videoBinaryTree& videoList)
{
    string title;
    string star1;
    string star2;
    string producer;
    string director;
    string productionCo;
    char   ch;
    int   inStock;

    videoType newVideo;

    getline(infile, title);
    while (infile)
    {
        getline(infile, star1);
        getline(infile, star2);
        getline(infile, producer);
        getline(infile, director);
        getline(infile, productionCo);
        infile >> inStock;
        infile.get(ch);
        newVideo.setVideoInfo(title, star1, star2, producer,
                             director, productionCo, inStock);
        videoList.insert(newVideo);

        getline(infile, title);
    }//end while
}//end createVideoList

void displayMenu()
{
    cout << "Select one of the following: " << endl;
    cout << "1: To check whether a particular video is in "
         << "the store" << endl;
    cout << "2: To check out a video" << endl;
    cout << "3: To check in a video" << endl;
    cout << "4: To see whether a particular video is in stock"
         << endl;
    cout << "5: To print the titles of all the videos" << endl;
    cout << "6: To print a list of all the videos" << endl;
    cout << "9: To exit" << endl;
}

