#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //Matriz simetrica (tiene que ser cuadrada e igual a su traspuesta)
    int rows = 0,
        cols = 0;
    
    do {
        system("cls");
        cout << "Ingresar tamano de matriz cuadrada" << endl;
        cout << "Filas: ";
        cin >> rows;

        cout << "Columnas: ";
        cin >> cols;
    } while(rows != cols);
    
    int matrix[rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Ingrese el valor para matriz[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[j][i] != matrix[i][j]) {
                cout << "La matriz no es simetrica" << endl;
                system("pause");
                return 0;
            }
        }
    }

    cout << "La matriz es simetrica" << endl;
    system("pause");
    return 0;
}