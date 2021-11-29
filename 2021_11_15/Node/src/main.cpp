//
// Created by filip on 07.11.2021.
//

//#include <iostream>
#include "../include/Node.h"

using namespace std;

int main() {
    Node a = Node(1,2);
    Node b = Node(2,1);
    cout<<pointsDistance(a,b)<<endl;
    return 0;
}