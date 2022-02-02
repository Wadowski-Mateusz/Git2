//#include <iostream>
#include <ctime>
//#include <fstream>
//#include <vector>
//#include "../include/Item.h"
//#include "../include/Food.h"
#include "../include/Drink.h"
#include "../include/Other.h"
//#inlcude "../include/Node.h"
//#include "../include/List.h"
#include "../include/Backpack.h"
#include "../include/csv.h"
#include "../include/menu.h"

using namespace std;

int allo = 0;

/**
 * @brief loop while user gives number bigger than t
 * @tparam T int, double, float, other number type
 * @param t lower boundary
 * @param str1 string with info to give number
 * @param str2 string to display when number is lower
 * @return number bigger than t
 */
template<typename T>
T get_bigger(T const &t = 0, string const &str1 = "Podaj wartosc\n", string const &str2 = "Nieprawidlowa wartosc\n\n");

/**
 * @brief user can input own data to create item
 * @return pointer to item
 */
Item *create_item();

/**
 * @brief user can input own data to create item
 * @return pointer to node with item
 */
Node<Item> *create_node();

/**
 *
 * @param argc only one argument is acceptable
 * @param argv name of file of .csv expansion
 * @return
 */
int main(int argc, char *argv[]) {

    if (argc > 2) {
        cout << "Za duzo argumentow!\n";
        return 1;
    }

    srand(time(nullptr));
    Backpack *backpack = nullptr;
    fstream file;

    if (argc == 1) {
        int action = menu_loop(&menu_start, MENU_START_MIN, MENU_START_MAX);

        switch (action) {
            case create_backpack:
                do {
                    cout << "Czy chcesz podac rozmiar plecaka?\n";
                    cout << "\t1. Tak\n"
                            "\t2. Nie" << endl;
                    cin >> action;
                    if (action == 1 || action == 2)
                        break;

                    cout << "Brak wybranej akcji\n\n";
                } while (true);

                if (action == 1) {
                    double size = get_bigger(0);
                    backpack = new Backpack(size);
                } else //if (action == 2)
                    backpack = new Backpack();
                break;


            case close_program:
                cout << "Pa Pa\n";
                return 0;


            default:
                cout << "Blad case1\n";
                exit(1);
        }
    }
    else { //argc == 2
        if(string(argv[1]).length() < 5){
            cout<<"Problem z plikiem"<<endl;
            exit(1);
        }
        else{
            string tmp(argv[1]);
            int len = tmp.length();
            if(tmp[len-4] != '.' || tmp[len-3] != 'c' || tmp[len-2] != 's' || tmp[len-1] != 'v'){
                cout<<"Zle rozszerzenie pliku!\n";
                exit(1);
            }
        }
        try{
            string path ="../data/" + string(argv[1]);
            file.open(path, ios::in);
            if(!file.good())
                  throw "Brak pliku\n";
        } catch (const char* msg){
            cout << msg;
            exit (1);
        }

        vector<string> data;
        separate(data,file);

        if(file.is_open())
            file.close();

        vector<string>::reverse_iterator rit = data.rbegin();
        if(rit == data.rend()){
            cout<< "Plik pusty!\n";
            exit (1);
        }

        try {
            backpack = new Backpack(stoi(*rit));
        } catch (const invalid_argument &excep) {
            cout << "Rozmiar " << *rit << " jest niewlasciwy!";
            delete backpack;
            exit(1);
        }
        if (backpack->get_max_size() <= 0) {
            cout << "Rozmiar plecaka musi byc dodatni!\n";
            delete backpack;
            exit(1);
        }
        rit++;

        while(rit != data.rend()){
            int type;
            try {
                type = stoi(*rit++);
            }catch (const invalid_argument& excep){
                cout<< "Klasa \""<< *rit <<"\" nie istnieje!\n";
                delete backpack;
                exit (1);
            }
            string name = *rit++;
            double size;
            try {
                size = stod(*rit++);
            } catch  (const invalid_argument& excep){
                cout<< "Bledny rozmiar!"<<*rit<<"\n";
                delete backpack;
                exit (1);
            }
            switch(type) {
                case food:{
                    string expiry_date = *rit++;
                    backpack->push (new Food(name, size, expiry_date));
                    break;
                }

                case drink:{
                    string expiry_date = *rit++;
                    double volume;
                    try {
                        volume = stod(*rit++);
                    } catch  (const invalid_argument& excep){
                        cout<< "Bledna wartosc!\n";
                        delete backpack;
                        exit (1);
                    }
                    backpack->push (new Drink(name, size, expiry_date, volume));
                    break;
                }

                case other:{
                    int value;
                    try {
                        value = stoi(*rit++);
                    } catch  (const invalid_argument& excep){
                        cout<< "Bledna wartosc!\n";
                        delete backpack;
                        exit (1);
                    }
                    backpack->push (new Other(name, value, size));
                    break;
                }

                default:
                    cout<<"Blad z plikiem - nieznana klasa\n";
                    exit(1);
            }
        }
    }

    do {
        int action = menu_loop(&menu_main, MENU_MAIN_MIN, MENU_MAIN_MAX);

        switch (action) {
            case push_node:
                backpack->push(create_node());
                break;

            case push_item:
                backpack->push(create_item());
                break;

            case plus_node:
                *backpack + create_node();
                break;

            case plus_item:
                *backpack + create_item();
                break;

            case add_random: {

                double size = double(rand() % (int)(1+backpack->get_max_size()) + 1) / double(rand() % (int)(1+backpack ->get_max_size()/10.0) + 1);

                string name;
                for (int i = 0; i < rand() % 10 + 1; i++) {
                    char c = char(rand() % 94 + 32);
                    if (c != '\\' && c != ',')
                        name += c;
                    else
                        i--;
                }


                Item *tmp;

                switch (rand() % 3) {
                    case 0: {//food
                        string expiry_date = to_string(rand() % 31 + 1) +
                                             "/" + to_string(rand() % 12 + 1) +
                                             "/" + to_string(rand() % 12 + 2022);
                        tmp = new Food(name, size, expiry_date);
                        break;
                    }

                    case 1: {//drink
                        string expiry_date = to_string(rand() % 31 + 1) +
                                             "/" + to_string(rand() % 12 + 1) +
                                             "/" + to_string(rand() % 12 + 2022);
                        tmp = new Drink(name, size, expiry_date,
                                        double(rand() % 9000 + 1000) / double(rand() % 100 + 1) + (double) 500);
                        break;
                    }

                    case 2://other
                        tmp = new Other(name, rand(), size);
                        break;

                    default:
                        cout << "Error case random\n";
                        exit(1);
                }
                backpack->push(tmp);
                break;
            }


            case pop:
                backpack->pop()->print();
                break;

            case delete_head:
                backpack->delete_head();
                break;

            case delete_item: {

                int number = get_bigger(0, "Podaj numer przedmiotu do usuniecia\n", "Wartosc musi byc dodatnia!\n");

                Item *tmp = backpack->get_item(number);
                *backpack - tmp;

                break;
            }

            case print_all:
                backpack->print();
                break;

            case print_one: {
                int number = get_bigger(0, "Podaj numer przedmiotu do wyswietlenia\n", "Wartosc musi byc dodatnia!\n");
                backpack->print(number);

                break;
            }

            case print_enum:
                backpack->print_enum();
                break;

            case print_size:
                cout << "Miejsce w plecaku:\n"
                        "\t" << backpack->get_current_size() << " / " << backpack->get_max_size() << endl;
                break;

            case clean:
                backpack->clean();
                cout << "Oprozniono plecak" << endl;
                break;

            case change_max:
                double size;
                do {
                    cout << "Podaj rozmiar:\n";
                    cin >> size;
                    if (size <= 0 || size <  backpack->get_current_size())
                        cout << "Zly rozmiar!\n\n";
                    else
                        break;
                } while (true);
                backpack->set_max_size(size);
                break;

            case exit_with_saving: {

                string file_name;
                bool okay;
                do {
                    okay = false;
                    cout << "Wprowadz nazwe pliku do zapisu. Tylko male i duze litery!\n";
                    cin >> file_name;
                    for (int i = 0; i < file_name.length(); i++) {
                        if (!('A' <= file_name[i] && file_name[i] <= 'Z') && !('a' <= file_name[i] && file_name[i] <= 'z') ) {
                            cout << "Nieprawidlowa nazwa pliku! "<<file_name[i]<<"\n";
                            okay = true;
                            break;
                        }
                    }
                } while (okay);

                file.open("../data/"+file_name+".csv", ios::out);
                if(!file.good()){
                    cout<<"Blad otwarcia pliku!\n";
                    delete backpack;
                    exit(1);
                }

                Item *tmp = backpack -> pop();
                while (tmp != nullptr) {
                    file<<tmp->print_to_string()<<"\n";
                    delete tmp;
                    tmp = backpack->pop();
                }
                file<<to_string(backpack->get_max_size())<<"\n";
                file.close();
                delete backpack;
                cout << "saveLiczba pozostalych obiektow w pamieci: " << allo << "\n";
                return 0;
            }

            case exit_without_saving:
                cout << "Pa pa\n";

                delete backpack;
                cout << "Liczba pozostalych obiektow w pamieci: " << allo << "\n";
                return 0;

            default:
                cout << "Error case 2\n" << endl;
                delete backpack;
                exit(1);
        }

        cout << "************************************************************\n";
    } while (true);


}

/*****************************************************************************/

Item *create_item() {
    int action = -1;
    do {
        cout << "[1] Jedzenie\n"
                "[2]Napój\n"
                "[3]Inne\n";

        cin >> action;

        if (food <= action && action <= other)
            break;

        cout << "Brak wybranej akcji\n\n";
    } while (true);

    string name;
    double size;
    string expiry_date;
    double volume;
    int value;

    bool okay;
    do {
        okay = false;
        cout << "Podaj nazwe (nie moze zawierac \", \" oraz \"\\\"): ";
        cin >> name;
        for(int i = 0; i < name.length(); i++) {
            if(name[i] == ',' || name[i] == '\\') {
                okay = true;
                cout << "Znak " << name[i] << " jest nieprawidlowy!\n";
                break;
            }
        }
    } while (okay);
    okay = 0;
    size = get_bigger(0, "Podaj rozmiar\n", "Nieprawidlowy rozmiar!\n\n");

    switch (action) {
        case food:
            do {
                cout << "Podaj date przydatnosci do spozycia (nie moze zawierac \", \" oraz \"\\\"): ";
                cin >> expiry_date;
                for(int i = 0; i < expiry_date.length(); i++) {
                    if(expiry_date[i] == ',' || expiry_date[i] == '\\') {
                        okay = 1;
                        cout << "Znak " << name[i] << " jest nieprawidlowy!\n";
                    }
                }
            } while (okay == 1);
            return new Food(name, size, expiry_date);


        case drink:
            cout << "Podaj date przydatnosci do spozycia: ";
            cin >> expiry_date;
            volume = get_bigger(0, "Podaj objetosc\n", "Nieprawidlowa objetosc!\n\n");
            return new Drink(name, size, expiry_date, volume);

        case other:
            cout << "Podaj liczbe calkowita: ";
            cin >> value;
            return new Other(name, value, size);


        default:
            cout << "error case create\n";
    }
    return nullptr;
}

Node<Item> *create_node() {
    Item *tmp_item = create_item();
    if (tmp_item != nullptr)
        return new Node<Item>(tmp_item);
    else
        return nullptr;
}

template<typename T>
T get_bigger(T const &t, string const &str1, string const &str2) {

    T number;
    do {
        cout << str1;
        cin >> number;
        if (number <= t)
            cout << str2;
        else
            break;
    } while (true);

    return number;
}
