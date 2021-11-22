//
// Created by mateu on 22.11.2021.
//

#include <iostream>
using namespace std;

class Figure{
public:
    virtual double getArea() = 0;
};

class Circle : public Figure{
private:
    double r = 0;
    double PI = 3.141592;//lub z math.h

public:
    Circle(double r) : r(r){};

    double getArea()  {return PI * r * r;}

};

class Rectangle: public Figure{
private:
    double a = 0;
    double b = 0;

public:
    Rectangle(double a, double b) : a(a), b(b){};

    double getArea()    {return a * b;}

};


int main() {
    Figure *circle = new Circle(5);
    Figure *rectangle = new Rectangle(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;
}

