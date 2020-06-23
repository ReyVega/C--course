#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //Diagonal de matriz
    int rows = 0,
        cols = 0;
    cout << "Cuantas filas?: ";
    cin >> rows;

    cout << "Cuantas columnas?: ";
    cin >> cols;

    int matriz[rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Ingrese el valor de matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Diagonal: ";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == j) {
                cout << matriz[i][j] << " ";
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}