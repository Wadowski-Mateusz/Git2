//
// Created by mateu on 21.11.2021.
//

#include "../include/Triangle.h"

Triangle::Triangle(){};

Triangle::Triangle(Node a, Node b, Node c, std::string name){
    i[0] = a;
    i[1] = b;
    i[2] = c;
    this->name = name;
}

void Triangle::display()const{
    std::cout<<name<<":\n";
    i[0].display();
    i[1].display();
    i[2].display();
}
std::ostream & operator<<(std::ostream &output, const Triangle &v){
    output<<v.name<<": {"<<v.i[0]<<", "<<v.i[1]<<", "<<v.i[2]<< "}";
    return output;
}

double Triangle::distance(int firstPointIndex, int secondPointIndex){
    return pointsDistance(this->i[firstPointIndex], this->i[secondPointIndex]);
}

void showTriangleData(Triangle triangle){
    triangle.display();
}
void showTriangleData(Triangle &triangle){
    triangle.display();
}
void showTriangleData(Triangle *triangle){
    triangle->display();
}
