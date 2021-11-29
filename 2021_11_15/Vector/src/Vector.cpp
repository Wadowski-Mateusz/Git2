//
// Created by mateu on 15.11.2021.
//
#include "../include/Vector.h"


Vector::Vector() { x=0; y=0;};

Vector::Vector(double x, double y) : x(x), y(y) {}



//Vec
Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}

Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vector &Vector::operator-=(const Vector &rhs) {
    this->x = this->x - rhs.x;
    this->y = this->y - rhs.y;
    return *this;
}

double Vector::operator*(const Vector &rhs) const {
    return this->x*rhs.x + this->y * rhs.y;
}

double Vector::operator/(const Vector &rhs) const {
    return this->x/rhs.x + this->y/rhs.y;
}


//Const
Vector Vector::operator+(const double rhs){
    return {x + rhs, y + rhs};
}
Vector operator+(const double lhs, const Vector &rhs) {
    return {lhs + rhs.x, lhs + rhs.y};
}
Vector &Vector::operator+=(const double rhs) {
    this->x = this->x + rhs;
    this->y = this->y + rhs;
    return *this;
}

Vector Vector::operator-(const double rhs) {
    return {x - rhs, y - rhs};
}
Vector operator-(const double lhs, const Vector &rhs) {
    return {lhs - rhs.x, lhs - rhs.y};
}
Vector &Vector::operator-=(const double rhs) {
    this->x = this->x - rhs;
    this->y = this->y - rhs;
    return *this;
}

Vector Vector::operator*(const double rhs) {
    return {x * rhs, y * rhs};
}
Vector operator*(const double lhs, const Vector &rhs) {
    return {lhs * rhs.x, lhs * rhs.y};
}
Vector &Vector::operator*=(const double rhs) {
    this->x = this->x * rhs;
    this->y = this->y * rhs;
    return *this;
}

Vector Vector::operator/(const double rhs) {
    if(rhs == 0)
        exit(1);
    return {x / rhs, y / rhs};
}
Vector operator/(const double lhs, const Vector &rhs) {
    if(rhs.x == 0 || rhs.y == 0)
        exit(1);
    return {lhs / rhs.x, lhs / rhs.y};
}
Vector &Vector::operator/=(const double rhs) {
    if(rhs == 0)
        exit(1);
    this->x = this->x / rhs;
    this->y = this->y / rhs;
    return *this;
}

//logic
    bool Vector::operator==(const Vector& rhs)const {
        if(this->x == rhs.x && this->y == rhs.y)
            return true;
        return false;
    }
    bool Vector::operator!=(const Vector& rhs) const{
        if(this->x == rhs.x && this->y == rhs.y)
            return false;
        return true;
    }

//out
std::ostream & operator<<(std::ostream &output, const Vector &v){
    output<<"("<<v.x<<", "<< v.y<< ")";
    return output;
}

//methods
void print(const Vector &v) {
    std::cout << "(" << v.x << ", " << v.y << ")";
}

double Vector::length() {
    return sqrt(x * x + y * y);
}

double Vector::get_x() const{
    return x;
}
double Vector::get_y() const{
    return y;
}