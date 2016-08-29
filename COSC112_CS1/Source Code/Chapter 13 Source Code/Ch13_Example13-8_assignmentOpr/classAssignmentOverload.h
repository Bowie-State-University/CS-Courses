
class cAssignmentOprOverload
{ 
public:
    const cAssignmentOprOverload& 
            operator=(const cAssignmentOprOverload& otherList);
      //Overload assignment operator

    void print() const;
      //Function to print the list

    void insertEnd(int item);
      //Function to insert an item at the end of the list
      //Postcondition: if the list is not full, 
      //                  length++; list[length] = item;
      //               if the list is full,
      //                  output an appropriate message
    void destroyList();
      //Function to destroy the list
      //Postcondition: length = 0; maxSize = 0; list = NULL;

    cAssignmentOprOverload(int size = 0);
      //Constructor
      //Postcondition: length = 0; maxSize = size; 
      //               list is an arry of size maxSize

private:
    int maxSize;
    int length;
    int *list;
};

