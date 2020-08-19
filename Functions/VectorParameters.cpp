#include<iostream>
#include<stdlib.h>

using namespace std;

void cuadrado(int vector[],int size);
void muestra(int vector[],int size);

void cuadrado(int vector[],int size) {
    for(int i = 0; i < size; i++) {
        vector[i] *= vector[i];
    }
}

void muestra(int vector[],int size) {
    for(int i = 0; i < size; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    //Dato curioso: los arreglos automaticamente al ponerse como parametro de una función
    //se pasan por referencia es por eso que no se necesita crearla
    const int size = 5;
    int vector[size] = {1,2,3,4,5};

    cuadrado(vector,size);
    muestra(vector,size);

    system("pause");
    return 0;
}