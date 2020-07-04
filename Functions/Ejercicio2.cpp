#include<iostream>
#include<stdlib.h>

using namespace std;

template<class E>
void alCuadrado(E dato) {
    cout << "El cuadrado del numero es: " << dato * dato << endl;
}

void pedirDatos() {
    //Cambiar el dato al que gustes
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