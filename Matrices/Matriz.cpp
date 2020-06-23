#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int rows = 0,
        cols = 0;
    cout << "Cuantas filas?: ";
    cin >> rows;

    cout << "Cuantas columnas?: ";
    cin >> cols;

    int matrix[rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Ingrese un numero para matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}