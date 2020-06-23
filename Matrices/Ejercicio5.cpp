#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int rows = 0,
        cols = 0;
    cout << "Filas: ";
    cin >> rows;

    cout << "Columnas: ";
    cin >> cols;
    int matrix[rows][cols];
    int matrixTras[cols][rows];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Ingres el valor para matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrixTras[j][i] = matrix[i][j];
        }
    }
    cout << "\nMatriz original" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz Traspuesta" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrixTras[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}