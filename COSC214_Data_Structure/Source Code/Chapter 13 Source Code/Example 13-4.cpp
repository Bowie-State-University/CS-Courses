
//***************************************************************
// Author: D.S. Malik
//
// This program illustrates how the operations on a map/multimap
// container work.
//***************************************************************

#include <iostream>                                     //Line 1
#include <map>                                          //Line 2
#include <utility>                                      //Line 3
#include <string>                                       //Line 4
#include <iterator>                                     //Line 5

using namespace std;                                    //Line 6

int main()                                              //Line 7
{                                                       //Line 8
    map<int, int>  intMap;                              //Line 9
    map<int, int>::iterator  mapItr;                    //Line 10

    intMap.insert(make_pair(1, 16));                    //Line 11
    intMap.insert(make_pair(2, 8));                     //Line 12
    intMap.insert(make_pair(4, 20));                    //Line 13
    intMap.insert(make_pair(3, 3));                     //Line 14
    intMap.insert(make_pair(1, 23));                    //Line 15
    intMap.insert(make_pair(20, 18));                   //Line 16
    intMap.insert(make_pair(8, 28));                    //Line 17
    intMap.insert(make_pair(15, 60));                   //Line 18
    intMap.insert(make_pair(6, 43));                    //Line 19
    intMap.insert(pair<int, int>(12, 16));              //Line 20

    cout << "Line 21: The elements of intMap" << endl;  //Line 21
    for (mapItr = intMap.begin(); 
            mapItr != intMap.end(); mapItr++)           //Line 22
        cout << mapItr->first << "\t"
             << mapItr->second << endl;                 //Line 23
    cout << endl;                                       //Line 24

    intMap.erase(12);                                   //Line 25

    mapItr = intMap.begin();                            //Line 26
    ++mapItr;                                           //Line 27
    ++mapItr;                                           //Line 28
    intMap.erase(mapItr);                               //Line 29

    cout << "Line 30: After deleting, elements of " 
         << "intMap" << endl;                           //Line 30
    for (mapItr = intMap.begin(); 
            mapItr != intMap.end(); mapItr++)           //Line 31
        cout << mapItr->first << "\t" 
             << mapItr->second << endl;                 //Line 32
    cout << endl;                                       //Line 33

    multimap<string, string> namesMultiMap;             //Line 34
    multimap<string, string>::iterator nameItr;         //Line 35

    namesMultiMap.insert(make_pair("A1", "Donny"));     //Line 36
    namesMultiMap.insert(make_pair("B1", "Zippy"));     //Line 37
    namesMultiMap.insert(make_pair("K1", "Ronny"));     //Line 38
    namesMultiMap.insert(make_pair("A2", "Hungry"));    //Line 39
    namesMultiMap.insert(make_pair("D1", "Ronny"));     //Line 40
    namesMultiMap.insert(make_pair("A1", "Dumpy"));     //Line 41

    cout << "Line 42: namesMultiMap: " << endl;         //Line 42
    for (nameItr = namesMultiMap.begin(); 
           nameItr != namesMultiMap.end(); nameItr++)  //Line 43
        cout << nameItr->first << "\t" 
             << nameItr->second << endl;                //Line 44
    cout << endl;                                       //Line 45

    return 0;                                           //Line 46
}                                                       //Line 47
