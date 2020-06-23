#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main() {
    int rows = 0,
        cols = 0;
    srand(time(NULL));

    cout << "Cuantas filas?: ";
    cin >> rows;

    cout << "Cuantas columnas?: ";
    cin >> cols;
    
    int matrix1[rows][cols],
        matrix2[rows][cols];
    //Variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix1[i][j] = 1 + rand() % (101 - 1);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix2[i][j] = matrix1[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}