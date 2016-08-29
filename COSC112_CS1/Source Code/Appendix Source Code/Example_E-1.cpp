//Creating and reading binary files
 
#include <iostream>
#include <fstream>
  
using namespace std;
 
struct studentType
{
    char firstName[15];
    char lastName[15];
    int ID;
};

int main()
{
        //create and initialize an array of students’ IDs
    int studentIDs[5] = {111111, 222222, 333333,
                         444444, 555555};             //Line 1

         //declare and initialize the struct newStudent
    studentType newStudent = {"John", "Wilson",
                              777777};                //Line 2

    ofstream outFile;                                 //Line 3

        //open the output file as a binary file
    outFile.open("ids.dat", ios::binary);             //Line 4

         //write the array in the binary format
    outFile.write(reinterpret_cast<const char *> (studentIDs),
                  sizeof(studentIDs));                //Line 5 

        //write the newStudent data in the binary format
    outFile.write(reinterpret_cast<const char *> (&newStudent),
                  sizeof(newStudent));                //Line 6 

    outFile.close();  //close the file                //Line 7

    ifstream inFile;                                  //Line 8
    int arrayID[5];                                   //Line 9
    studentType student;                              //Line 10
    
         //open the input file
    inFile.open("ids.dat");                           //Line 11

    if (!inFile)                                      //Line 12
    {
        cout << "The input file does not exist. "
             << "The program terminates!!!!" << endl; //Line 13
        return 1;                                     //Line 14
    }

       //input the data into the array arrayID
    inFile.read(reinterpret_cast<char *> (arrayID),
                sizeof(arrayID));                     //Line 15
       //output the data of the array arrayID
    for (int i = 0; i < 5; i++)                       //Line 16
        cout << arrayID[i] << " ";                    //Line 17
    cout << endl;                                     //Line 18

         //read the student's data
    inFile.read(reinterpret_cast<char *> (&student),  
                sizeof(student));                     //Line 19

         //output studentData
    cout << student.ID << " " << student.firstName 
         << " " << student.lastName << endl;          //Line 20

    inFile.close();     //close the file              //Line 21

    return 0;                                         //Line 22
}
