#include<iostream>
#include<stdlib.h>

using namespace std;

int numero,
    potencia;

void funpot(int numero, int potencia);
void pedirDatos();

void funpot(int numero, int potencia) {
    long resultado = 1;
    for(int i = 0; i < potencia; i++) {
        resultado *= numero;
    }
    cout << "El resultado es: " << resultado << endl;
}

void pedirDatos() {
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Ingrese la potencia: ";
    cin >> potencia;
    funpot(numero,potencia);
}

int main() {
    pedirDatos();
    system("pause");
    return 0;
}