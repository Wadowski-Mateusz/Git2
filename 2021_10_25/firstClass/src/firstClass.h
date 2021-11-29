//
// Created by mateu on 25.10.2021.
//

#ifndef GIT2_FIRSTCLASS_H
#define GIT2_FIRSTCLASS_H

#include <iostream>
using namespace std;

class firstClass {
private:

    string firstName;
    string lastName;
    unsigned short footSize;
    short tall;
    void printSizeData();

public:
    firstClass();
    firstClass(string firstName, string lastName, unsigned short footSize, short tall);
    void printName();
    void printAllData();
    void printName();
    void printName();

    void setFirstName(string a);
    void setLastName(string a);
    void setFootSize(unsigned short a);
    void setTall(short a);


};


#endif //GIT2_FIRSTCLASS_H
