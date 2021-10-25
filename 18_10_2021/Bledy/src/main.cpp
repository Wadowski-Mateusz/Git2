//
// Created by mateu on 25.10.2021.
//

#include <iostream>

using namespace std;

int main() {

    cout << "Zadanie 1: \n";
    int a, b;
    cin >> a >> b;

    try {
        if (b != 0)
            cout << (1 / b) << endl;
        else
            throw "Mam cie paszkudniku";
    } catch (const char *msg) {
        cout << msg << endl;
    }

//1)    Do napisania jest program wczytuje od użytkownika dwie liczby naturalne a i b.
//      Program ma wypisać na ekran wynik dzielenia a przez b, a jeśli jest to niemożliwe to ma wypisać odpowiedni komunikat.
//      Dzielenie będzie odbywać się w zbiorze liczb naturalnych, dlatego wynikiem dzielenia nie może być ułamek.

    cout << "Zadanie 2: \n";
    return 0;
}

/*

2)    Do napisania jest funkcja, która wczyta od użytkownika linijkę zawierającą ciąg znaków.
        Program powinien następnie spróbować przekonwertować wprowadzony tekst na liczbę typu int.
        W trakcie konwersji program może zwrócić dwa wyjątki: Wprowadzony ciąg zawiera nieprawidłowe znaki oraz Wprowadzona liczba jest za duża.
        Na sam koniec program powinien wypisać skonwertowaną liczbę na ekran.
 */