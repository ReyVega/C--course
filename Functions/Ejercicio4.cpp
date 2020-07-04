#include<iostream>
#include<stdlib.h>

using namespace std;

double numero;

double parteFraccionaria(double numero);
void pedirDatos();

double parteFraccionaria(double numero) {
    int num = numero;
    numero -= num;
    return numero;
}

void pedirDatos() {
    cout << "Ingrese un numero con decimal: ";
    cin >> numero;
    cout << parteFraccionaria(numero) << endl;
}

int main() {
    pedirDatos();
    system("pause");
    return 0;
}