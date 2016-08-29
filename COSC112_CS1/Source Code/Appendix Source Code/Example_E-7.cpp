//Creating and reading a random access file.

#include <iostream>
#include <fstream>
#include <iomanip>
 
using namespace std;

struct studentType 
{
    char firstName[15];
    char lastName[15];
    int ID;
    double GPA;
};

void printStudentData(const studentType& student);

int main()
{
    studentType st;                                   //Line 1
    ifstream inFile;                                  //Line 2
    ofstream outFile;                                 //Line 3

    long studentSize = sizeof(st);                    //Line 4

        //open the input file, which is a text file
    inFile.open("studentData.txt");                   //Line 5

    if (!inFile)                                      //Line 6
    {
        cout << "The input file does not exist. "
             << "The program terminates!!!!" << endl; //Line 7
       return 1;                                      //Line 8
    }

        //open a binary output file
    outFile.open("student.dat", ios::binary);         //Line 9

    inFile >> st.ID >> st.firstName
           >> st.lastName >> st.GPA;                  //Line 10

    while (inFile)                                    //Line 11
    {
        outFile.seekp((st.ID - 1) * studentSize, 
                       ios::beg);                     //Line 12
        outFile.write(reinterpret_cast<const char *> (&st),
                      sizeof(st));                    //Line 13
        inFile >> st.ID >> st.firstName
               >> st.lastName >> st.GPA;              //Line 14
    };

    inFile.close();                                   //Line 15
    inFile.clear();                                   //Line 16
    outFile.close();                                  //Line 17

    cout << left << setw(3) << "ID"
         << setw(16) << "First Name"
         << setw(16) << "Last Name"
         << setw(12) << "Current GPA" << endl;        //Line 18
    cout << fixed << showpoint << setprecision(2);    //Line 19

         //open the input file, which is a binary file
    inFile.open("student.dat", ios::binary);          //Line 20

    if (!inFile)                                      //Line 21
    {
       cout << "The input file does not exist. "
            << "The program terminates!!!!" << endl;  //Line 22
       return 1;                                      //Line 23
    }

        //read the data at location 0 in the file
    inFile.read(reinterpret_cast<char *> (&st),
                sizeof(st));                          //Line 24

    while (inFile)                                    //Line 25
    {
        if (st.ID != 0)                               //Line 26
            printStudentData(st);                     //Line 27

            //read the data at the current reading position
        inFile.read(reinterpret_cast<char *> (&st),
                    sizeof(st));                      //Line 28
    };

    return 0;                                         //Line 29
}

void printStudentData(const studentType& student)
{
    cout << left << setw(3) << student.ID 
         << setw(16) << student.firstName 
         << setw(16) << student.lastName  
         << right << setw(10)<< student.GPA
         << endl;
}
