//
// Created by filip on 11/14/21.
//

#include "../include/Node.h"

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() const{
    std::cout << "x: " << x << "\ty: " << y << std::endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}

double pointsDistance(Node a, Node b){
    return sqrt(pow(a.getx() - b.getx(), 2) + pow(a.gety() - b.gety(), 2));
}
double Node::getx() const{
    return this->x;
}
double Node::gety() const{
    return this->y;
}