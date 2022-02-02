//
// Created by mateu on 30.01.2022.
//

#include "../include/menu.h"

void menu_start() {
    cout << "Wybierz dzialanie:\n";
    cout << "[" << create_backpack << "] Stworz plecak\n";
    cout << "[" << close_program << "] Zamknij program\n";
}

void menu_main() {
    cout << "Wybierz dzialanie:\n";
    cout << "[" << push_node << "] Dodaj przedmiot (push (Node<Item>))\n";
    cout << "[" << push_item << "] Dodaj przedmiot (push (Item))\n";
    cout << "[" << plus_node << "] Dodaj przedmiot (+ Node<Item>)\n";
    cout << "[" << plus_item << "] Dodaj przedmiot (+ Item)\n";
    cout << "[" << add_random << "] Dodaj losowe cokolwiek\n";
    cout << "[" << pop << "] pop()\n";
    cout << "[" << delete_head << "] Usun glowe delete_head()\n";
    cout << "[" << delete_item << "] Usun element Item()\n";
    cout << "[" << print_all << "] Wyswietl zawartosc plecaka print()\n";
    cout << "[" << print_one << "] Wyswietl przedmiot na wybranej pozycji print() - przeciazony\n";
    cout << "[" << print_enum << "] Wyswietl wylistowana zawartosc plecaka enum_print()\n";
    cout << "[" << print_size << "] Pokaz pozostale miejsce\n";
    cout << "[" << clean << "] Oproznij plecak clean()\n";
    cout << "[" << change_max << "] Zmien maksymalny rozmiar plecaka\n";
    cout << "[" << exit_with_saving << "] Zapisz plecak i wyjdz\n";
    cout << "[" << exit_without_saving << "] Wyjdz bez zapisywania\n";
}


/**
 *
 * @param f menu to print
 * @param min minimum acceptable int
 * @param max maximum acceptable int
 * @return given value as int
 */
int menu_loop(void (*f)(), int const min, int const max) {
    int action = -1;
    do {
        f();
        cin >> action;
        if(cin.fail()){
            cin.clear();
            cin.ignore(256,'n');
            cout << "Brak wybranej akcji\n\n";
            continue;
        }
        if (min <= action && action <= max)
            break;

        cout << "Brak wybranej akcji\n\n";
    } while (true);
    return action;
}

