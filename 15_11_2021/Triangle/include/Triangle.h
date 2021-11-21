//
// Created by mateu on 21.11.2021.
//

#ifndef VECTOR_TRAINGLE_H
#define VECTOR_TRAINGLE_H

#include "Node.h"
#include <iostream>

class Triangle {
private:
    Node i[3];
    std::string name;
public:
    Triangle();
    Triangle(Node a, Node b, Node c, std::string name);
    friend std::ostream & operator<<(std::ostream& output, const Triangle &t);
    void display()const;

    double distance(int firstPointIndex, int secondPointIndex);
};

void showTriangleData(Triangle triangle);
void showTriangleData(Triangle &triangle);
void showTriangleData(Triangle *triangle);

#endif //VECTOR_TRAINGLE_H
