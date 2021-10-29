#include "../include/matrix.h"

void printD(double **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << "\n";
    }
}
void printI(int **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << "\n";
    }
}

double **newMatrixD(int rows, int columns) {
    double **matrix = new double *[rows];

    for (int i = 0; i < rows; i++)
        matrix[i] = new double[columns];

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j)
            matrix[i][j] = 0;
    return matrix;

}
int **newMatrixI(int rows, int columns) {
    int **matrix = new int *[rows];

    for (int i = 0; i < rows; i++)
        matrix[i] = new int[columns];

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j)
            matrix[i][j] = 0;
    return matrix;

}

void deleteMatrix(double **matrix, int rows, int columns){
    for(int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;
    matrix = nullptr;
}
void deleteMatrix(int ** matrix, int rows, int columns){
    for(int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;
    matrix = nullptr;
}

double **addMatrix(double **matrixA, double **matrixB, int rows, int columns) {

    double **matrixC = newMatrixD(rows, columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];

    return matrixC;
}
int **addMatrix(int **matrixA, int **matrixB, int rows, int columns) {
    int **matrixC = newMatrixI(rows, columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];

    return matrixC;
}

double **subtractMatrix(double **matrixA, double **matrixB, int rows, int columns) {
    double **matrixC = newMatrixD(rows, columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];

    return matrixC;
}
int **subtractMatrix(int **matrixA, int **matrixB, int rows, int columns) {
    int **matrixC = newMatrixI(rows, columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];

    return matrixC;
}


double **multiplyMatrix(double **matrixA, double **matrixB, int rows, int columnsA, int columnsB) {

    double **matrixC = newMatrixD(rows, columnsB);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columnsB; j++)
            for (int k = 0; k < columnsA; k++)
                matrixC[i][j] += (matrixA[i][k] * matrixB[k][j]);

    return matrixC;
}
int **multiplyMatrix(int **matrixA, int **matrixB, int rows, int columnsA, int columnsB) {

    int **matrixC = newMatrixI(rows, columnsB);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columnsB; j++)
            for (int k = 0; k < columnsA; k++)
                matrixC[i][j] += (matrixA[i][k] * matrixB[k][j]);

    return matrixC;
}


double **multiplyByScalar(double **matrix, int rows, int columns, double scalar) {
    double **matrixB = newMatrixD(rows, columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrixB[i][j] = matrix[i][j] * scalar;

    return matrixB;
}
int **multiplyByScalar(int **matrix, int rows, int columns, int scalar) {
    int **matrixB = newMatrixI(rows, columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrixB[i][j] = matrix[i][j] * scalar;

    return matrixB;
}

double **transpozeMatrix(double **matrix, int rows, int columns) {
    double **matrixB = newMatrixD(columns, rows);

    for (int i = 0; i < columns; i++) //czyli rows dla B       //kolumny są wierszami, a wiersze kolumnami dla nowej macierzy B
        for (int j = 0; j < rows; j++)//czyli columns dla B
            matrixB[i][j] = matrix[j][i];

    return matrixB;
}
int **transpozeMatrix(int **matrix, int rows, int columns) {
    int **matrixB = newMatrixI(columns, rows);

    for (int i = 0; i < columns; i++) //czyli rows dla B       //kolumny są wierszami, a wiersze kolumnami dla nowej macierzy B
        for (int j = 0; j < rows; j++)//czyli columns dla B
            matrixB[i][j] = matrix[j][i];

    return matrixB;
}


double **powerMatrix(double **matrix, unsigned power, int rows, int columns) { //zakladamy ze przyjmujemy macierz kw
    double **matrixB = newMatrixD(rows, columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrixB[i][j] = matrix[i][j];

    for (unsigned i = 0; i < power-1; i++)
        matrixB = multiplyMatrix(matrixB, matrix, rows, columns, columns);

    return matrixB;
}
int **powerMatrix(int **matrix, unsigned power, int rows, int columns) {
    int **matrixB = newMatrixI(rows, columns);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrixB[i][j] = matrix[i][j];

    for (unsigned i = 0; i < power-1; i++)
        matrixB = multiplyMatrix(matrixB, matrix, rows, columns, columns);

    return matrixB;
}


double determinantMatrix(double **matrix, int rows, int columns){

    if(rows == 1)
        return matrix[0][0];

    //obliczamy za pomoca rozwiniecia Laplace'a wzgledem wiersza zerowego
    //skoro wiemy ze macierz jest przynajmniej 2x2, zadeklarujmy sobie miejsce na macierz o 1 rozmiar mniejsza
    double **matrixB = newMatrixD(rows-1, columns-1);//aby kazdorazowo nie deklarowac nowej macierzy
    double det = 0;                 //tutaj przechowamy wyznacznik
    int przeskoczonaKolumna = 0; //jezelie ominiemy juz jakis wiersz i/lub kolumne, nalezy to uzglednicz przy przepisywaniu


    /*
     * Generalnie: pierwszy for odpowiada za wyznaczenie indeksu kolumny ktora wykluczymy
     * drugi for odpowiada za marsz po wierszach przy przepisywaniu
     * trzeci fora ma za zadanie przejsc po kolumnach, ominac niepotrzebną i zapisac macierz
     * po przepisaniu macierzy, rekurencyjnie wywolujemy dla niej te funkcje
     * po powrocie dodajemy/odejmujemy to co otrzymalismy i przechodzimy do kolejnego elementu w wierszu/wracamy
     */


    for(int j = 0; j < columns ; j++){          //wskazanie kolumny do wykreslenia
        for(int k = 1; k < rows; k++){          //przepisanie macierzy po wykresleniu
            przeskoczonaKolumna = 0;            //zerujemy, bo w tym wierszu jeszcze nie bylo okazji do przeskoku kolumny
            for(int l = 0; l<columns; l++){     //przepisanie macierzy po wykresleniu
                if(l==j){ //ta kolumna nie
                    przeskoczonaKolumna = 1;
                    continue;
                }
                matrixB[k-1][l-przeskoczonaKolumna] = matrix[k][l]; //k-1 poniewaz do wiersza 0 zapisujemy wiersz 1 (do wiersza n zapisujemy n+1)
            }//for 3
        }//for 2 - po wyjsciu mamy juz przepisana mniejsza macierz

        if(j%2==0) //jezeli suma indeksow jest parzysta to znak dodatni, w tym przypadku wystarczy by indeks kolumny spelnial ten warunek
            det  +=  matrix[0][j] * determinantMatrix(matrixB, rows-1, columns-1);
        else
            det  -=  matrix[0][j] * determinantMatrix(matrixB, rows-1, columns-1);
    }//for 1
    deleteMatrix(matrixB, rows-1, columns-1);
    return det;

}
int determinantMatrix(int **matrix, int rows, int columns){

    if(rows == 1)
        return matrix[0][0];

    //obliczamy za pomoca rozwiniecia Laplace'a wzgledem wiersza zerowego
    //skoro wiemy ze macierz jest przynajmniej 2x2, zadeklarujmy sobie miejsce na macierz o 1 rozmiar mniejsza
    int **matrixB = newMatrixI(rows-1, columns-1);//aby kazdorazowo nie deklarowac nowej macierzy
    int det = 0;                 //tutaj przechowamy wyznacznik
    int przeskoczonaKolumna = 0; //jezelie ominiemy juz jakis wiersz i/lub kolumne, nalezy to uzglednicz przy przepisywaniu


    /*
     * Generalnie: pierwszy for odpowiada za wyznaczenie indeksu kolumny ktora wykluczymy
     * drugi for odpowiada za marsz po wierszach przy przepisywaniu
     * trzeci fora ma za zadanie przejsc po kolumnach, ominac niepotrzebną i zapisac macierz
     * po przepisaniu macierzy, rekurencyjnie wywolujemy dla niej te funkcje
     * po powrocie dodajemy/odejmujemy to co otrzymalismy i przechodzimy do kolejnego elementu w wierszu/wracamy
     */


    for(int j = 0; j < columns ; j++){          //wskazanie kolumny do wykreslenia
        for(int k = 1; k < rows; k++){          //przepisanie macierzy po wykresleniu
            przeskoczonaKolumna = 0;            //zerujemy, bo w tym wierszu jeszcze nie bylo okazji do przeskoku kolumny
            for(int l = 0; l<columns; l++){     //przepisanie macierzy po wykresleniu
                if(l==j){ //ta kolumna nie
                    przeskoczonaKolumna = 1;
                    continue;
                }
                matrixB[k-1][l-przeskoczonaKolumna] = matrix[k][l]; //k-1 poniewaz do wiersza 0 zapisujemy wiersz 1 (do wiersza n zapisujemy n+1)
            }//for 3
        }//for 2 - po wyjsciu mamy juz przepisana mniejsza macierz

        if(j%2==0) //jezeli suma indeksow jest parzysta to znak dodatni, w tym przypadku wystarczy by indeks kolumny spelnial ten warunek
            det  +=  matrix[0][j] * determinantMatrix(matrixB, rows-1, columns-1);
        else
            det  -=  matrix[0][j] * determinantMatrix(matrixB, rows-1, columns-1);
    }//for 1
    deleteMatrix(matrixB, rows-1, columns-1);
    return det;

}


bool matrixIsDiagonal(double **matrix, int rows, int columns) {// - sprawdzanie, czy macierz jest diagonalna (funkcja powinna zwracać bool, w tym przypadku wynik nie jest przekazywany przez referencję)
    if (rows != columns)
        return false;

    //rozbiecie na dwa fory by ominac przekatna - przy jednym forze sprawdzona zostalaby cala macierz i trzeba by zabezpieczyc przed przekatna
    for (int i = 0; i < rows; i++)
        for (int j = i + 1; j < columns; j++)
            if (matrix[i][j] != 0)
                return false;

    for (int i = 1; i < rows; i++)//omijamy pierwszy rzad, bo i tak pierwszy element lezy na przekatnej
        for (int j = 0; j < i; j++)
            if (matrix[i][j] != 0)
                return false;

    return true;
}
bool matrixIsDiagonal(int **matrix, int rows, int columns) {
    if (rows != columns)
        return false;

    //rozbiecie na dwa fory by ominac przekatna - przy jednym forze sprawdzona zostalaby cala macierz i trzeba by zabezpieczyc przed przekatna
    for (int i = 0; i < rows; i++)
        for (int j = i + 1; j < columns; j++)
            if (matrix[i][j] != 0)
                return false;

    for (int i = 1; i < rows; i++)//omijamy pierwszy rzad, bo i tak pierwszy element lezy na przekatnej
        for (int j = 0; j < i; j++)
            if (matrix[i][j] != 0)
                return false;

    return true;
}


void swap(double &a, double &b) {// - zamiana dwóch wartości miejscami (parametry przekazywane przez referencję)
    double c;
    c = a;
    a = b;
    b = c;
}
void swap(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}


double *sortRow(double *array, int columns) { //sortowanie tylko wiersza o indeksie 0, nie wiemy czy macierz ma wiecej wierszy
    double *A = new double [columns];
    for(int i = 0; i < columns; i++)
        A[i] = array[i];

    for (int i = 0; i < columns; i++)
        for (int j = 0;
             j < columns - i - 1; j++)  //mamy juz posortowanych 'i' elementow, oraz '-1' by nie swyjsc za tablice
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]);
    return A;


}// - sortowanie tablicy za pomocą sortowania bombelkowego (porównywanie każdej wartości z każdą)
int *sortRow(int *array, int columns) {
    int *A = new int [columns];
    for(int i = 0; i < columns; i++)
        A[i] = array[i];

    for (int i = 0; i < columns; i++)
        for (int j = 0;
             j < columns - i - 1; j++)  //mamy juz posortowanych 'i' elementow, oraz '-1' by nie swyjsc za tablice
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]);
            return A;

}


double **sortRowsInMatrix(double **matrix, int rows, int columns) {// - sortowanie wszystkich wierszy w macierzy — posortuj osobno każdy wiersz w macierzy. Sortowanie ma być rosnące
    double **matrixB = newMatrixD(rows, columns);
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            matrixB[i][j]=matrix[i][j];

    for (int i = 0; i < rows; i++)
        sortRow(matrixB[i], columns);
    return matrixB;
}
int **sortRowsInMatrix(int **matrix, int rows, int columns) {

    int **matrixB = newMatrixI(rows, columns);

    for(int i = 0; i < rows; i++)
        for(int j = 0; j < columns; j++)
            matrixB[i][j] = matrix[i][j];

    for (int i = 0; i < rows; i++)
        matrixB[i] = sortRow(matrixB[i], columns);

    return matrixB;
}


void addMatrix(){
    std::cout<<"addMatrix\t\t - Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A i B wyswietla ich sume.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}
void subtractMatrix(){
    std::cout<<"subtractMatrix\t\t- Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A i B wyswietla ich roznice.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}
void multiplyMatrix(){
    std::cout<<"multiplyMatrix\t\t- Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A i B wyswietla ich iloczyn.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}
void multiplyByScalar(){
    std::cout<<"multiplyByScalar\t\t- Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A jak i stalej danego typu, wyswietla iloczyn macierzy i skalaru.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}
void transpozeMatrix(){
    std::cout<<"transpozeMatrix\t\t- Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A, wyswietla jej transpozycje.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}
void powerMatrix(){
    std::cout<<"powerMatrix\t\t- Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A jak i stalej calkowitej n, wyswietla n-ta potege macierzy A.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}
void determinantMatrix(){
    std::cout<<"determiantMatrix\t\t- Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A jak i stalej calkowitej n, wyswietla wyznacznik macierzy A.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}
void matrixIsDiagonal(){
    std::cout<<"matrixIsDiagonal\t\t- Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A, sprawdza czy podana macierz jest diagonalna.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}

void sortRow(){
    std::cout<<"sortRow\t\t- Po wybraniu typu elementow tablicy, ich liczby oraz wprowadzeniu jej, wyswietla posortowana rosnaco tablice"<<std::endl;
}
void sortRowsInMatrix(){
    std::cout<<"sortRowInMatrix\t\t- Po wybraniu typu elementow macierzy oraz wprowadzeniu macierzy A, z osobna sortuje kazdy wiersz macierzy w porzadku rosnacym.\nPomoc dotyczaca wprowadzania macierzy znajduje sie w poleceniu help."<<std::endl;
}