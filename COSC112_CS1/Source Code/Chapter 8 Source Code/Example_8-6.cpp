    //Function to initialize an int array to 0.
    //The array to be initialized and its size are passed
    //as parameters. The parameter listSize specifies the
    //number of elements to be initialized.
void initializeArray(int list[], int listSize)
{
    int index;  

    for (index = 0; index < listSize; index++)
        list[index] = 0;
}

    //Function to read and store the data into an int array.
    //The array to store the data and its size are passed as 
    //parameters. The parameter listSize specifies the number
    //of elements to be read.
void fillArray(int list[], int listSize)
{
    int index;

    for (index = 0; index < listSize; index++)
        cin >> list[index];
}

    //Function to print the elements of an int array.
    //The array to be printed and the number of elements 
    //are passed as parameters. The parameter listSize
    //specifies the number of elements to be printed.
void printArray(const int list[], int listSize)
{
    int index;

    for (index = 0; index < listSize; index++)
        cout << list[index] << " ";
}


    //Function to find and return the sum of the
    //elements of an int array. The parameter listSize
    //specifies the number of elements to be added.
int sumArray(const int list[], int listSize)
{
    int index;
    int sum = 0;

    for (index = 0; index < listSize; index++)
        sum = sum + list[index];

    return sum;
}
  
    //Function to find and return the index of the first
    //largest element in an int array. The parameter listSize
    //specifies the number of elements in the array.
int indexLargestElement(const int list[], int listSize)
{
    int index;
    int maxIndex = 0; //Assume the first element is the largest

    for (index = 1; index < listSize; index++)
        if (list[maxIndex] < list[index])
            maxIndex = index;

    return maxIndex;
}


    //Function to copy some or all the elements of one array 
    //into another array. Starting at the position specified 
    //by src, the  elements of list1 are copied into list2 
    //starting at the position specified by tar. The parameter
    //numOfElements specifies the number of elements of list1 to 
    //be copied into list2. Starting at the position specified 
    //by tar, the list2 must have enough components to copy the 
    //elements of list1. The following call copies all the 
    //elemenst of list1 into the corresponding positions in
    //list2:  copyArray(list1, 0, list2, 0, numOfElements);
 void copyArray(int list1[], int src, int list2[],
                int tar, int numOfElements)
 {
     for (int index = src; index < src + numOfElements; index++)
     {
         list2[index] = list1[tar];
         tar++;
     }
 }


