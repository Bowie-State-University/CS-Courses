   
#include <iostream>
#include <iomanip>
#include "rectangleType.h"
#include "boxType.h"
  
using namespace std;

int main()
{
    rectangleType myRectangle1;                    //Line 1
    rectangleType myRectangle2(8, 6);              //Line 2

    boxType myBox1;                                //Line 3
    boxType myBox2(10, 7, 3);                      //Line 4
    
    cout << fixed << showpoint << setprecision(2); //Line 5

    cout << "Line 6: myRectangle1: ";              //Line 6
    myRectangle1.print();                          //Line 7
    cout << endl;                                  //Line 8
    cout << "Line 9: Area of myRectangle1: "
         << myRectangle1.area() << endl;           //Line 9

    cout << "Line 10: myRectangle2: ";             //Line 10
    myRectangle2.print();                          //Line 11
    cout << endl;                                  //Line 12
    cout << "Line 13: Area of myRectangle2: "
         << myRectangle2.area() << endl;           //Line 13

    cout << "Line 14: myBox1: ";                   //Line 14
    myBox1.print();                                //Line 15
    cout << endl;                                  //Line 16
    cout << "Line 17: Surface Area of myBox1: "
         << myBox1.area() << endl;                 //Line 17
    cout << "Line 18: Volume of myBox1: "
         << myBox1.volume() << endl;               //Line 18

    cout << "Line 19: myBox2: ";                   //Line 19
    myBox2.print();                                //Line 20
    cout << endl;                                  //Line 21
    cout << "Line 22: Surface Area of myBox2: "
         << myBox2.area() << endl;                 //Line 22
    cout << "Line 23: Volume of myBox2: "
         << myBox2.volume() << endl;               //Line 23

    return 0;                                      //Line 24
}
