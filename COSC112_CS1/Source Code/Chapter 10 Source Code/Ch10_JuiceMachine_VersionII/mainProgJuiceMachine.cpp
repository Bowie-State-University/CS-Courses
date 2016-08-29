 
//*****************************************************
// Author: D.S. Malik
// 
// This program uses the classes cashRegister and 
// dispenserType to implement a juice machine.
// ****************************************************

#include <iostream>
#include "cashRegister.h"
#include "dispenserType.h"
 
using namespace std;
 
void showSelection();
void sellProduct(dispenserType& product, 
                 cashRegister& pCounter);

int main()
{
    cashRegister counter;
    dispenserType orange(100, 50); 
    dispenserType apple(100, 65);
    dispenserType mango(75, 80);
    dispenserType strawberryBanana(100, 85);

    int choice;  //variable to hold the selection

    showSelection();
    cin >> choice;

    while (choice != 9)
    {
        switch (choice)
        {
        case 1: 
            sellProduct(orange, counter);
            break;
        case 2: 
            sellProduct(apple, counter);
            break;
        case 3: 
            sellProduct(mango, counter);
            break;
        case 4: 
            sellProduct(strawberryBanana, counter);
            break;
        default: 
            cout << "Invalid selection." << endl;
        }//end switch

        showSelection();
        cin >> choice;
    }//end while

    return 0;
}//end main

void showSelection()
{
    cout << "*** Welcome to Shelly's Juice Shop ***" << endl;
    cout << "To select an item, enter " << endl;
    cout << "1 for orange juice (50 cents)" << endl;
    cout << "2 for apple juice (65 cents)" << endl;
    cout << "3 for mango juice (80 cents)" << endl;
    cout << "4 for strawberry banana juice (85 cents)" << endl;
    cout << "9 to exit" << endl;
}//end showSelection

void sellProduct(dispenserType& product, 
                 cashRegister& pCounter)
{
    int amount;  //variable to hold the amount entered
    int amount2; //variable to hold the extra amount needed

    if (product.getNoOfItems() > 0) //if the dispenser is not 
                                    //empty
    {
        cout << "Please deposit " << product.getCost()
             << " cents" << endl;
        cin >> amount;

        if (amount < product.getCost())
        {
            cout << "Please deposit another "
                 << product.getCost()- amount
                 << " cents" << endl;
            cin >> amount2;
            amount = amount + amount2;
       }

        if (amount >= product.getCost())
        {
            pCounter.acceptAmount(amount);
            product.makeSale();
            cout << "Collect your item at the bottom and "
                 << "enjoy." << endl;
        }
        else
            cout << "The amount is not enough. " 
                 << "Collect what you deposited." << endl;

        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
             << endl << endl;
    }
    else
        cout << "Sorry, this item is sold out." << endl;
}//end sellProduct
