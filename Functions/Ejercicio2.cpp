#include<iostream>
#include<stdlib.h>

using namespace std;

void alCuadrado(int dato) {
    cout << "El cuadrado del numero es: " << dato * dato << endl;
}

void pedirDatos() {
    double dato;
    cout << "Ingresa un numero: ";
    cin >> dato;
    alCuadrado(dato);
}

int main() {
    pedirDatos();
    system("pause");
    return 0;
}