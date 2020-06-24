#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //Producto de matrices
    // 2 x 4  4 x 3  resultante = 2 x 3
    int rows1 = 2,
        cols1 = 4,
        rows2 = 4,
        cols2 = 3;
    int matrix1[rows1][cols1] = {{5,3,-4,-2},{8,-1,0,-3}},
        matrix2[rows2][cols2] = {{1,4,0},{-5,3,7},{0,-9,5},{5,1,4}},
        matrixRes[rows1][cols2];

    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            matrixRes[i][j] = 0;
            for(int k = 0; k < cols1; k++) {
                matrixRes[i][j] += matrix1[i][k] * matrix2[k][j]; 
            }
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrixRes[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}