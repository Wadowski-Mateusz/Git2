//
// Created by filip on 11/14/21.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

//#include "Triangle.h";
#include <iostream>
#include <math.h>

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display() const;

    void updateValue(double x, double y);

    friend double pointDistance(Node a, Node b);
    double getx() const;
    double gety() const;

    //friend Triangle::Triangle;
};

double pointsDistance(Node a, Node b);


#endif //JIPP2_NODE_H