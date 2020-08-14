#include<iostream>
#include<stdlib.h>

using namespace std;

void printMatrix(int matrix[][3],int rows,int cols);
void squareMatrix(int matrix[][3],int rows,int cols);

void printMatrix(int matrix[][3],int rows,int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void squareMatrix(int matrix[][3],int rows,int cols) {
     for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] *= matrix[i][j];
        }
    }
}

int main() {
    const int rows = 2;
    const int cols = 3;
    int matrix[rows][cols] = {{1,2,3},{4,5,6}};

    cout << "Nomral Matrix" << endl;
    printMatrix(matrix,rows,cols);
    squareMatrix(matrix,rows,cols);
    cout << "\nSquare Matrix" << endl;
    printMatrix(matrix,rows,cols);

    system("pause");
    return 0;
}