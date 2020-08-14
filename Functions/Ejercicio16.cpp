#include<iostream>

using namespace std;

int rows,
    cols,
    matrix[100][100];

void input();
int minValueRow();

void input() {
    cout << "Ingrese el numero de filas: ";
    cin >> rows;
    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Digite el valor [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

int minValueRow() {
    int wishedRow = 0,
        minValueRow = 0;
    cout << "Ingrese la fila donde quiere sacar el minimo: ";
    cin >> wishedRow;

    minValueRow = matrix[wishedRow][0];

    for(int i = 0; i < cols; i++) {
        if(matrix[wishedRow][i] < minValueRow) {
            minValueRow = matrix[wishedRow][i];
        }
    }
    return minValueRow;
}

int main() {
    input();
    cout << minValueRow() << endl;
    system("pause");
    return 0;
}