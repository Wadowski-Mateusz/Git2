//
// Created by filip on 07.11.2021.
//

#include <iostream>
#include "Point.h"

using namespace std;

class TestClass {
    public:
        TestClass(const int t) : t(t) {
        }

    private:
        const int t = 0;
};

int main() {
    {
        Point p1("P1"), p2(5, 5, "P2");

        cout << "Initial values" << endl;
        p1.printData();
        p2.printData();

        cout << endl << "Create copy of point" << endl;
        Point p1c = p1, p2c = p2;
        //Update copied points names
        p1c.setName("P1c");
        p2c.setName("P2c");

        cout << "Values after copying" << endl;
        p1.printData();
        p2.printData();
        p1c.printData();
        p2c.printData();

        cout << endl << "Update P1 and P2 x and y (increase 10)" << endl;
        p1.setX(p1.getX() + 10);
        p1.setY(p1.getY() + 10);
        p2.setX(p2.getX() + 10);
        p2.setY(p2.getY() + 10);

        cout << "Values after update values" << endl;
        p1.printData();
        p2.printData();
        p1c.printData();
        p2c.printData();
    }


    cout << "End program" << endl;


    return 0;
}