#include<iostream>
#include<stdlib.h>

using namespace std;

int vec[100], tam;

void input();
void changeSigns();
void printVector();

void input() {
    cout << "Digite el tamano del arreglo: ";
    cin >> tam;

    for(int i = 0; i < tam; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> vec[i];
    }
}

void changeSigns() {
    for(int i = 0; i < tam; i++) {
        vec[i] *= -1;
    }
}

void printVector() {
    for(int i = 0; i < tam; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    input();
    changeSigns();
    printVector();
    system("pause");
    return 0;
}