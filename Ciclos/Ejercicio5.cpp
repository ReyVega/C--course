#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int numero = 0,
        suma = 0;

    do {
        cout << "Ingresa un numero: ";
        cin >> numero;
        if(numero > 0) {
            suma += numero;
        }
    } while((numero != 0) && ((numero > 30) || (numero < 20)));

    cout << "La suma de los numeros ingresados mayor a cero es: " << suma << endl;
    system("pause");
    return 0;
}