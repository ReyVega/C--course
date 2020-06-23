#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int n = 2;
    int matrix1[n][n] = {{1,2},{3,4}},
        matrix2[n][n];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrix2[i][j] = matrix1[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix2[i][j] <<  " ";
        }
        cout << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}