//
// Created by filip on 07.11.2021.
//

#include <iostream>
#include "Pojazd.h"

using namespace std;

int main() {

    Pojazd p("kokos", "kokos", 3, "kokos i ananas");
    p.printData();

    Pojazd pp = p;

    cout<<"\n\n";

    pp.set_nazwa("const string");
    pp.set_numer_rejestracyjny("const string");

    pp.get_nazwa();
    pp.get_numer_rejestracyjny();
    pp.get_marka_i_Typ();

    pp.printData();

    return 0;
}