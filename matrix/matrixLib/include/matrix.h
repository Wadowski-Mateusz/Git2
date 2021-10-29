//
// Created by mateu on 20.10.2021.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <iostream>


    void printD(double**, int, int);
    void printI(int**, int, int);

    double **newMatrixD(int rows, int columns);
    int **newMatrixI(int rows, int columns);

    void deleteMatrix(double **matrix, int rows, int columns);
    void deleteMatrix(int ** matrix, int rows, int columns);

   double **addMatrix (double **matrixA, double **matrixB, int rows, int columns);
   int **addMatrix (int **matrixA, int **matrixB, int rows, int columns);


   double **subtractMatrix(double **matrixA, double **matrixB, int rows, int columns);
   int **subtractMatrix(int **matrixA, int **matrixB, int rows, int columns);


   double **multiplyMatrix (double **matrixA, double **matrixB, int rows, int columnsA, int columnsB);
   int **multiplyMatrix (int **matrixA, int **matrixB, int rows, int columnsA, int columnsB);


   double **multiplyByScalar (double** matrix, int rows, int columns, double scalar);
   int **multiplyByScalar (int** matrix, int rows, int columns, int scalar);


    double **transpozeMatrix(double **matrix, int rows, int columns);// - transponowanie macierzy
    int **transpozeMatrix(int **matrix, int rows, int columns);


    double **powerMatrix(double **matrix, unsigned power, int rows, int columns);// - potęgowanie macierzy, jako drugi parametr przyjmuje wartość potęgi
    int **powerMatrix(int **matrix, unsigned power, int rows, int columns);// - potęgowanie macierzy, jako drugi parametr przyjmuje wartość potęgi


    double determinantMatrix(double** matrix, int rows, int columns);// - wyznacznik macierzy (funkcja powinna zwracać wartość (typu takiego, jakiego są macierze), w tym przypadku wynik nie jest przekazywany przez referencję)
    int determinantMatrix(int** matrix, int rows, int columns);


    bool matrixIsDiagonal(double **matrix, int rows, int columns);// - sprawdzanie, czy macierz jest diagonalna (funkcja powinna zwracać bool, w tym przypadku wynik nie jest przekazywany przez referencję)
    bool matrixIsDiagonal(int **matrix, int rows, int columns);


    void swap(double &a, double &b);// - zamiana dwóch wartości miejscami (parametry przekazywane przez referencję)
    void swap(int &a, int &b);


    double *sortRow(double *array, int columns);   // sortowanie tablicy jednowymiarowej za pomocą sortowania babelkowego (w naszym przypadku bedziemy sortowac wiersze)
    int *sortRow(int *array, int columns);


    double **sortRowsInMatrix(double **matrix, int rows, int columns);// - sortowanie wszystkich wierszy w macierzy — posortuj osobno każdy wiersz w macierzy. Sortowanie ma być rosnące
    int **sortRowsInMatrix(int **matrix, int rows, int columns);



//tutaj znajduja sie helpy dla mozliwych polecen
//w zasadzie wyswietla wraz z otoczka z pliku main.cpp
void addMatrix();
void subtractMatrix();
void multiplyMatrix();
void multiplyByScalar();
void transpozeMatrix();
void powerMatrix();
void determinantMatrix();
void matrixIsDiagonal();
void sortRow();
void sortRowsInMatrix();


#endif //MATRIX_MATRIX_H
