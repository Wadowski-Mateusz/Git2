//
// Created by filip on 07.11.2021.
//

#include "Point.h"

Point::Point(const double x,const  double y, const string name) : name(name) {
    *this->x = x;
    *this->y = y;
}

Point::Point(const string name) : name(name) {
    *x = *y = 0;
}

double Point::getX() const{
    return *x;
}

void Point::setX(const double x) {
    *this->x = x;
}

double Point::getY() const{
    return *y;
}

void Point::setY(const double y) {
    *this->y = y;
}

void Point::printData() const {
    cout << "Point " << name << " (x = " << *x << ", y = " << *y << ")\n";
}

void Point::setName(const string name) {
    this->name = name;
}

bool Point::operator==(const Point &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           name == rhs.name;
}

bool Point::operator!=(const Point &rhs) const {
    return !(rhs == *this);
}

const string &Point::getName() const {
    return name;
}

Point::~Point(){
    delete x;
    delete y;
}

Point::Point(const Point &point){
    *x = point.getX(); // lub *x = *point.x;
    *y = point.getY(); // lub *y = *point.y;
    name = point.getName();
}
