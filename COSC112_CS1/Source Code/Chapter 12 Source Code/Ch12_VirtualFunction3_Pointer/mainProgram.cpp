   
#include <iostream>
#include "petType.h"
#include "dogType.h"

using namespace std;
 
void callPrint(petType *p);

int main()
{
    petType *q;                                  //Line 1
    dogType *r;                                  //Line 2

    q = new petType("Lucky");                    //Line 3
    r = new dogType("Tommy", "German Shepherd"); //Line 4

    q->print();                                  //Line 5
    cout << endl;                                //Line 6
    r->print();                                  //Line 7 

    cout << "*** Calling the function callPrint  ***"
         << endl;                                //Line 8
    callPrint(q);                                //Line 9
    cout << endl;                                //Line 10
    callPrint(r);                                //Line 11

    return 0;
}

void callPrint(petType *p)
{
    p->print();
}

