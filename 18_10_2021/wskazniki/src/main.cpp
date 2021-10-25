//
// Created by mateu on 25.10.2021.
//

#include <iostream>

using namespace std;

void zad4(const int x, int *w) {
    *w = x;
    return;
}

int main() {

    cout << "Zadanie 1" << endl;
    double a, b;
    cin >> a >> b;
    double *aa, *bb;
    aa = &a;
    bb = &b;

    cout << "Srednia a i b wynosi: " << (*aa + *bb) / 2 << endl;

    cout << endl << "Zadanie 2" << endl;
    double *cc = new double[5];
    cout << "Podaj 5 liczb: ";

    for (int i = 0; i < 5; i++)
        cin >> *(cc + i);

    for (int i = 0; i < 5; i++)
        if (*(cc + i) > 0)
            cout << *(cc + i) << " ";


    delete[] cc;

    cout << endl << endl << endl << "Zadanie 3 - BRAK - NIE ROZUMIEM POLECENIA" << endl << "ZADANIE 4\n";
    int x, y, *w;
    x = 4;
    y = 5;
    w = &y;
    cout<<x<<"\t"<<y<<endl;
    zad4(x, w);
    cout<<x<<"\t"<<y<<endl;

}

/*
 *
1)    Do napisania jest program pobierający 2 liczby oraz ustawi wskaźniki na ich adresach, a także obliczy ich średnią. Należy wykorzystać wskaźniki.
2)    Do napisania program gdzie wczytamy i wypiszemy na ekran elementy tablicy większe od 0 (należy użyć wskaźników).
3)    Do napisania jest funkcja do sortowania liczb, które są zapisane w zmiennych w rosnącej kolejności. Należy użyć wskaźników.
4)    Proszę stworzyć funkcję, której argumentami będą liczba całkowita x oraz intowy wskaźnik w. Powinna ona wpisywać wartość x do zmiennej wskazywanej przez wskaźnik.

 */