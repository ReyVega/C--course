#include<iostream>

using namespace std;

int main() {
    int numero = 0;

    cout << "Ingrese el numero: ";
    cin >> numero;

    if(numero == 0) {
        cout << "El numero es 0";
    } else if((numero % 2) == 0) {
        cout << "El numero es par";
    } else {
        cout << "El numero es impar";
    }
    return 0;
}