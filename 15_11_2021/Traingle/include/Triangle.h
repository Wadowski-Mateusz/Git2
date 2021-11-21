//
// Created by mateu on 21.11.2021.
//

#ifndef VECTOR_TRAINGLE_H
#define VECTOR_TRAINGLE_H

#include "Node.h"
#include <iostream>

class Triangle {
private:
    Node a, b, c;
    std::string name;
public:
    Triangle(Node a, Node b, Node c, std::string name);
    void display()const;
};


#endif //VECTOR_TRAINGLE_H
