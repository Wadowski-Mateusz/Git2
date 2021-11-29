//
// Created by mateu on 25.10.2021.
//

#include "firstClass.h"

void firstClass::printName(){
    cout<<firstName << " " << lastName<<endl;
}

void firstClass::printSizeData() {
    cout << footSize << endl;
}

void firstClass::printAllData() {
    printName();
    printSizeData();
}

firstClass::firstClass(){
    firstName = "Name";
    lastName = "Last";
    tall = 0;
    footSize = 0;

}
firstClass::firstClass(string firstName, string lastName, unsigned short footSize, short tall)
:(firstName(firstName), lastName(lastName), footSize(footSize), tall(tall)){};

void firstClass::setFirstName(string a){

};
void firstClass::setLastName(string a){

};
void firstClass::setFootSize(unsigned short a){

};
void firstClass::setTall(short a){

};