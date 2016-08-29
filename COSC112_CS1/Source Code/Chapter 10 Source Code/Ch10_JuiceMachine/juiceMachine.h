  

//************************************************************
// Author: D.S. Malik 
// 
// class cashRegister
// This class specifies the members to implement a cash 
// register.
//************************************************************
 
class cashRegister
{
public:
    int getCurrentBalance() const;
       //Function to show the current amount in the cash 
       //register.
       //Postcondition: The value of cashOnHand is returned.

    void acceptAmount(int amountIn);
       //Function to receive the amount deposited by 
       //the customer and update the amount in the register.
       //Postcondition: cashOnHand = cashOnHand + amountIn;

    cashRegister(int cashIn = 500); 
       //Constructor
       //Sets the cash in the register to a specific amount.
       //Postcondition: cashOnHand = cashIn;
       //               If no value is specified when the 
       //               object is declared, the default value 
       //               assigned to cashOnHand is 500.

private:
     int cashOnHand;     //variable to store the cash 
                         //in the register
};


//************************************************************
// Author: D.S. Malik
// 
// class dispenserType
// This class specifies the members to implement a dispenser.
//************************************************************


class dispenserType
{
public:
    int getNoOfItems() const; 
      //Function to show the number of items in the machine.
      //Postcondition: The value of numberOfItems is returned.

    int getCost() const; 
      //Function to show the cost of the item.
      //Postcondition: The value of cost is returned.

    void makeSale();  
      //Function to reduce the number of items by 1.
      //Postcondition: numberOfItems--;

    dispenserType(int setNoOfItems = 50, int setCost = 50); 
      //Constructor 
      //Sets the cost and number of items in the dispenser
      //to the values specified by the user.
      //Postcondition: numberOfItems = setNoOfItems;
      //               cost = setCost;
      //               If no value is specified for a 
      //               parameter, then its default value is 
      //               assigned to the corresponding member 
      //               variable.

private:
    int numberOfItems;     //variable to store the number of 
                           //items in the dispenser
    int cost;  //variable to store the cost of an item
};
