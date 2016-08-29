#ifndef H_listType 
#define H_listType
 
#include <iostream>
#include <cassert>
  
using namespace std;

template <class elemType>
class listType
{
public:
    bool isEmpty() const;  
      //Function to determine whether the list is empty.
      //Postcondition: Returns true if the list is empty,
      //               otherwise it returns false.

    bool isFull() const;  
      //Function to determine whether the list is full.
      //Postcondition: Returns true if the list is full,
      //               otherwise it returns false.
    
    int getLength() const;
      //Function to return the number of elements in the list.
      //Postcondition: The value of length is returned.

    int getMaxSize() const;
      //Function to return the maximum number of elements 
      //that can be stored in the list.
      //Postcondition: The value of maxSize is returned.

    void sort();  
      //Function to sort the list.
      //Postcondition: The list elements are in ascending order.

    void print() const; 
      //Outputs the elements of the list.

    void insertAt(const elemType& item, int position);
      //Function to insert item in the list at the location
      //specified by position.
      //Postcondition: list[position] = item; length++;
      //               If position is out of range, the program
      //               is aborted.

    listType(int listSize = 50); 
      //Constructor
      //Creates an array of the size specified by the
      //parameter listSize; the default array size is 50.
      //Postcondition: list contains the base address of the
      //               array; length = 0; maxsize = listSize;

    ~listType(); 
        //Destructor
        //Deletes all the elements of the list.
        //Postcondition: The array list is deleted.

private:
    int maxSize;   //variable to store the maximum size 
                   //of the list
    int length;    //variable to store the number of elements
                   //in the list
    elemType *list; //pointer to the array that holds the
                    //list elements
};

template <class elemType>
bool listType<elemType>::isEmpty() const
{
    return (length == 0)
}

template <class elemType>
bool listType<elemType>::isFull() const
{
    return (length == maxSize);
}

template <class elemType>
int listType<elemType>::getLength() const
{
    return length;
}

template <class elemType>
int listType<elemType>::getMaxSize() const
{
    return maxSize;
}

    //Constructor; the default array size is 50
template <class elemType>
listType<elemType>::listType(int listSize) 
{
    maxSize = listSize;
    length = 0;
    list = new elemType[maxSize];
}

template <class elemType>
listType<elemType>::~listType()  //destructor
{
    delete [] list;
}

template <class elemType>
void listType<elemType>::sort()   //selection sort
{
    int i, j;
    int min;
    elemType temp;

    for (i = 0; i < length; i++)
    {
        min = i;
        for (j = i + 1; j < length; ++j)
            if (list[j] < list[min])
                min = j;

        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }//end for
}//end sort

template <class elemType>
void listType<elemType>::print() const
{
    int i;
    for (i = 0; i < length; ++i)
        cout << list[i] << " ";
    cout << endl;
}//end print


template <class elemType>
void listType<elemType>::insertAt(const elemType& item, 
                                  int position)
{
    assert(position >= 0 && position < maxSize);
    list[position] = item;
    length++;
}

#endif
