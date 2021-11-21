//
// Created by mateu on 21.11.2021.
//

#include "../include/Triangle.h"


Triangle::Triangle(Node a, Node b, Node c, std::string name) : a(a), b(b), c(c), name(name){}

void Triangle::display()const{
    a.display();
    b.display();
    c.display();
}

