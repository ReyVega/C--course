#include<iostream>
#include<stdlib.h>

using namespace std;

int rows, 
    cols,
    matrix[100][100];

void input();
void isSimmetric();

void input() {
    cout << "Ingrese el numero de filas: ";
    cin >> rows;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Ingrese el valor de [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void isSimmetric() {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                cout << "No es simetrica" << endl;
                return;
            }
        }
    }
    cout << "Es simetrica" << endl;
}

int main() {
    input();
    isSimmetric();
    system("pause");
    return 0;
}