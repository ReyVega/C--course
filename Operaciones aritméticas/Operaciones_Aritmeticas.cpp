#include<iostream>

using namespace std;

int main() {
    int numero1,
        numero2,
        suma = 0,
        resta = 0,
        multiplicacion = 0,
        division = 0;

    cout << "Ingresa tu primer numero: ";
    cin >> numero1;

    cout << "Ingresa tu segundo numero: ";
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;
    cout << "Division: " << division << endl;

    return 0;
}
