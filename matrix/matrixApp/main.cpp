#include "../matrixLib/include/matrix.h"
#include <iostream>

using namespace std;

void help();

int **zrobMiMacierzI(int wiersze, int kolumny, char nazwa);

double **zrobMiMacierzD(int wiersze, int kolumny, char nazwa);

int intLubDouble();

int main(int argc, char *argv[]) {

    if (argc == 3 && argv[2][0] == 'h' && argv[2][1] == 'e' && argv[2][2] == 'l' && argv[2][3] == 'p' &&
        argv[2][4] == '\0') { //polecenie help
        //po prostu idz dalej, potem sobie polecenia z osobna beda puszczac helpa
    } else if (argc != 2) {
        cout << "Nieprawidlowa liczba argumentow!" << endl;
        cout << "Dopuszczalne polecenia: " << endl;
        help();
        exit(1);
    }

    static const int liczbaPolecen = 11;              //program obecnie posiada 11 polecen, ktore uzytkownik moze wywolac

    //Jezeli mamy zamiar dodac polecenie do biblioteki, nalezy inkrementowac powyzsza zmienna,
    //dopisac nazwe polecenia do tablicy ponizej, do switch'a oraz helpa

    static const string polecenie[liczbaPolecen] = {"help", "addMatrix",
                                                    "subtractMatrix",
                                                    "multiplyMatrix",
                                                    "multiplyByScalar",
                                                    "transpozeMatrix",
                                                    "powerMatrix",
                                                    "determinantMatrix",
                                                    "matrixIsDiagonal",
                                                    "sortRow",
                                                    "sortRowsInMatrix"
    };

    int polecenieNumer = -1;
    //sprawdzanie czy ktorys element
    for (int i = 0; i < liczbaPolecen; i++) {   //przegladanie polecen
        for (int indeksLitery = 0;
             argv[1][indeksLitery] == polecenie[i][indeksLitery]; indeksLitery++)  //kolejne litery w nazwach polecen
            if (argv[1][indeksLitery] ==
                '\0') {//jezeli prawdziwe, to wprowadzone polecenie znajduje sie w programie na miejscu i
                polecenieNumer = i;
                i = liczbaPolecen; //wyjscie z fora
                break;//wyjscie z whila
            }
    }

    //w zmiennej 'polecenieNumer' mamy numer polecenia w ponizszym switchu, lub -1, jesli nie znaleziono polecenia
    int typ;
    int wiersze, kolumny;
    int wierszeB, kolumnyB;
    switch (polecenieNumer) {

        case 0: //help
            help();
            break;

        case 1: // addMatrix
            if (argc == 3) {
                addMatrix();
                return 0;
            }

            typ = intLubDouble();

            cout << "Podaj liczbe wierszy i kolumn macierzy A i B:\n";
            cin >> wiersze >> kolumny;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, 'A');
                int **B = zrobMiMacierzI(wiersze, kolumny, 'B');
                int **C = addMatrix(A, B, wiersze, kolumny);
                cout << "Suma tych macierzy to: " << endl;
                printI(C, wiersze, kolumny);
            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, 'A');
                double **B = zrobMiMacierzD(wiersze, kolumny, 'B');
                double **C = addMatrix(A, B, wiersze, kolumny);
                cout << "Suma tych macierzy to: " << endl;
                printD(C, wiersze, kolumny);
            }
            break;

        case 2: // subtractMatrix
            if (argc == 3) {
                subtractMatrix();
                return 0;
            }

            typ = intLubDouble();

            cout << "Podaj liczbe wierszy i kolumn macierzy A i B:\n";
            cin >> wiersze >> kolumny;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, 'A');
                int **B = zrobMiMacierzI(wiersze, kolumny, 'B');
                int **C = subtractMatrix(A, B, wiersze, kolumny);
                cout << "Roznica tych macierzy to: " << endl;
                printI(C, wiersze, kolumny);
            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, 'A');
                double **B = zrobMiMacierzD(wiersze, kolumny, 'B');
                double **C = subtractMatrix(A, B, wiersze, kolumny);
                cout << "Roznica tych macierzy to: " << endl;
                printD(C, wiersze, kolumny);
            }
            break;

        case 3: // multiplyMatrix
            if (argc == 3) {
                multiplyMatrix();
                return 0;
            }

            typ = intLubDouble();

            cout << "Podaj liczbe wierszy i kolumn macierzy A:\n";
            cin >> wiersze >> kolumny;
            cout << "Podaj liczbe wierszy i kolumn macierzy B:\n";
            cin >> wierszeB >> kolumnyB;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, 'A');
                int **B = zrobMiMacierzI(wierszeB, kolumnyB, 'B');

                int **C = multiplyMatrix(A, B, wiersze, kolumny, kolumnyB);
                cout << "Iloczyn tych macierzy to: " << endl;
                printI(C, wiersze, kolumnyB);
            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, 'A');
                double **B = zrobMiMacierzD(wiersze, kolumny, 'B');
                double **C = multiplyMatrix(A, B, wiersze, kolumny, kolumnyB);
                cout << "Iloczyn tych macierzy to: " << endl;
                printD(C, wiersze, kolumnyB);
            }
            break;

        case 4: // multiplyByScalar
            if (argc == 3) {
                multiplyByScalar();
                return 0;
            }

            typ = intLubDouble();
            cout << "Podaj liczbe wierszy i kolumn macierzy:\n";
            cin >> wiersze >> kolumny;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, '\0');
                cout << "Podaj skalar:\n";
                cin >> typ; //tej zmiennej i tak juz nie bedziemy potrzebowac, wiec dajmy jej nowe zycie jako skalar
                int **C = multiplyByScalar(A, wiersze, kolumny, typ);
                cout << "Po przeskalowaniu mamy macierz: " << endl;
                printI(C, wiersze, kolumny);
            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, '\0');
                cout << "Podaj skalar:\n";
                cin >> typ; //tej zmiennej i tak juz nie bedziemy potrzebowac, wiec dajmy jej nowe zycie jako skalar
                double **C = multiplyByScalar(A, wiersze, kolumny, typ);
                cout << "Po przeskalowaniu mamy macierz: " << endl;
                printD(C, wiersze, kolumny);
            }
            break;

        case 5: // transpozeMatrix
            if (argc == 3) {
                transpozeMatrix();
                return 0;
            }

            typ = intLubDouble();
            cout << "Podaj liczbe wierszy i kolumn macierzy:\n";
            cin >> wiersze >> kolumny;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, '\0');
                int **C = transpozeMatrix(A, wiersze, kolumny);
                cout << "Po transpozycji macierzy A mamy: " << endl;
                printI(C, kolumny, wiersze);
            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, '\0');
                double **C = transpozeMatrix(A, wiersze, kolumny);
                cout << "Po transpozycji macierzy A mamy: " << endl;
                printD(C, kolumny, wiersze);
            }

            break;

        case 6: // powerMatrix
            if (argc == 3) {
                powerMatrix();
                return 0;
            }

            typ = intLubDouble();
            cout << "Podaj liczbe wierszy i kolumn macierzy:\n";
            cin >> wiersze >> kolumny;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, '\0');
                cout << "Podaj potege:\n";
                cin >> typ; //tej zmiennej i tak juz nie bedziemy potrzebowac, wiec dajmy jej nowe zycie
                int **C = powerMatrix(A, typ, wiersze, kolumny);
                cout << "Macierz do potegi "<<typ<< endl;
                printI(C, wiersze, kolumny);
            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, '\0');
                cout << "Podaj potege:\n";
                cin >> typ; //tej zmiennej i tak juz nie bedziemy potrzebowac, wiec dajmy jej nowe zycie
                double **C = powerMatrix(A, typ, wiersze, kolumny);
                cout << "Macierz do potegi "<<typ<< endl;
                printD(C, wiersze, kolumny);
            }

            break;


        case 7: // determinantMatrix
            if (argc == 3) {
                determinantMatrix();
                return 0;
            }

            typ = intLubDouble();
            cout << "Podaj liczbe wierszy i kolumn macierzy:\n";
            cin >> wiersze >> kolumny;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, '\0');
                cout << "Wyznacznik macierzy wynosi " << determinantMatrix(A, wiersze, kolumny) << endl;
            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, '\0');
                printD(A, wiersze, kolumny);
                cout << "Wyznacznik macierzy wynosi " << determinantMatrix(A, wiersze, kolumny) << endl;
            }
            break;

        case 8: // matrixIsDiagonal
            if (argc == 3) {
                matrixIsDiagonal();
                return 0;
            }

            typ = intLubDouble();
            cout << "Podaj liczbe wierszy i kolumn macierzy:\n";
            cin >> wiersze >> kolumny;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, '\0');
                if (matrixIsDiagonal(A, wiersze, kolumny))
                    cout << "Macierz jest diagonalna" << endl;
                else
                    cout << "Macierz nie jest diagonalna" << endl;

            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, '\0');
                if (matrixIsDiagonal(A, wiersze, kolumny))
                    cout << "Macierz jest diagonalna" << endl;
                else
                    cout << "Macierz nie jest diagonalna" << endl;

            }
            break;


        case 9: // sortRow
            if (argc == 3) {
                sortRow();
                return 0;
            }

            typ = intLubDouble();
            cout << "Podaj liczbe elementow:\n";
            cin >> kolumny;

            if (typ == 0) {

                int *A = new int [kolumny];
                int *B;
                cout<<"Podaj kolejne elementy tablicy: "<<endl;
                for(int i = 0; i < kolumny; i++)
                   cin>>A[i];

                B = sortRow(A, kolumny);

                cout<<"Posortowana tablica: "<<endl;
                for(int i = 0; i < kolumny; i++)
                    cout<<B[i]<<" ";
                cout<<endl;

            } else {
                double *A = new double [kolumny];
                double *B;
                cout<<"Podaj kolejne elementy tablicy: "<<endl;
                for(int i = 0; i < kolumny; i++)
                    cin>>A[i];

                B = sortRow(A, kolumny);

                cout<<"Posortowana tablica: "<<endl;
                for(int i = 0; i < kolumny; i++)
                    cout<<B[i]<<" ";
                cout<<endl;

            }


            break;

        case 10: // sortRowsInMatrix
            if (argc == 3) {
                sortRowsInMatrix();
                return 0;
            }

            typ = intLubDouble();
            cout << "Podaj liczbe wierszy i kolumn macierzy:\n";
            cin >> wiersze >> kolumny;

            if (typ == 0) {
                int **A = zrobMiMacierzI(wiersze, kolumny, '\0');
                int **C = sortRowsInMatrix(A, wiersze, kolumny);

                cout << "Po sortowaniu wierszy macierzy mamy: " << endl;
                printI(C, wiersze, kolumny);
            } else {
                double **A = zrobMiMacierzD(wiersze, kolumny, '\0');
                double **C = sortRowsInMatrix(A, wiersze, kolumny);
                cout << "Po sortowaniu wierszy macierzy mamy: " << endl;
                printD(C, wiersze, kolumny);
            }

            break;

        default:
            cout << "Brak takiego polecenia!\n";
            help();
            exit(2);
    }

    return 0;
}

void help() {
    //podstawowe wymagane przez zadanie
    cout << " Uwaga, program jest wrazliwy na wielkosc wprowadzanych liter." << endl << endl;
    cout << "help \t\t\t- wyswietla liste dostepnych polecen wraz z krotkim opisem" << endl;
    cout << "addMatrix \t\t- dodawanie macierzy" << endl;
    cout << "determinantMatrix \t- wyznacznik macierzy" << endl;
    cout << "matrixIsDiagonal \t- sprawdzanie, czy macierz jest diagonalna" << endl;
    cout << "multiplyByScalar \t- mnozenie przez skalar" << endl;
    cout << "multiplyMatrix \t\t- mnozenie dwoch macierzy" << endl;
    cout << "powerMatrix \t\t- potegowanie macierzy" << endl;
    cout << "sortRow \t\t- sortowanie tablicy jednowymiarowej" << endl;
    cout << "sortRowsInMatrix \t- sortuje rosnaco osobno kazdy wiersz w macierzy" << endl;
    cout << "subtractMatrix \t\t- odejmowanie dwoch macierzy" << endl;
    //cout << "swap \t\t\t- zamiana dwoch wartosci miejscami" << endl; //w zasadzie to chyba po nic uzytkownikowi
    cout << "transpozeMatrix\t\t- transponowanie macierzy" << endl;


    cout << endl;
    cout << "UWAGA!" << endl;
    cout << "Podczas tworzenia macierzy najpierw podajemy liczbe 'm' wierszy macierzy," << endl;
    cout << "liczbe 'n' kolumn macierzy, a nastepnie m*n elementow macierzy. " << endl;
    cout << "Macierze wczytywane sa wierszami!" << endl;
    cout << "Przykladowo je   zeli utworzymy macierz: 2 3 4 5 6 7 8 9" << endl;
    cout << "otrzymamy macierz o 2 wierszach i 3 kolumnach:" << endl;
    cout << "4 5 6" << endl << "7 8 9";
    cout << endl << endl;
}


int **zrobMiMacierzI(int wiersze, int kolumny, char nazwa) {

    int **A = newMatrixI(wiersze, kolumny);

    cout << "Podaj elementy macierzy " << nazwa << "\n";

    for (int i = 0; i < wiersze; i++)
        for (int j = 0; j < kolumny; j++)
            cin >> A[i][j];
    return A;
}

double **zrobMiMacierzD(int wiersze, int kolumny, char nazwa) {
    double **A = newMatrixD(wiersze, kolumny);
    cout << "Podaj elementy macierzy " << nazwa << "\n";

    for (int i = 0; i < wiersze; i++)
        for (int j = 0; j < kolumny; j++)
            cin >> A[i][j];
    return A;
}

int intLubDouble() {
    double typ; //jakby ktos poztanowil podac 1.49 to aby nie zaokraglilo w dol i nie przyjelo tego jako 1
    cout << "Wybierz typ macierzy:\n[0]. Int\n[1]. Double\n";
    cin >> typ;
    if (typ != 0 && typ != 1) {
        cout << "Zly typ!";
        exit(3);
    }
    return (int) typ;

}