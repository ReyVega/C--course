#include<iostream>

using namespace std;

int main() {
    int numero = 0,
        dato = 5;

    cout << "Ingrese un numero: ";
    cin >> numero;

    // == Igual
    if(numero == dato){
        cout << "\nEl numero es 5";
    } else {
        cout << "\nEl numero es diferente de 5";
    }

    cout << "\nIngrese un numero: ";
    cin >> numero;

    // != Diferente
    if(numero != dato){
        cout << "\nEl numero es diferente de 5";
    } else {
        cout << "\nEl numero es 5";
    }

    cout << "\nIngrese un numero: ";
    cin >> numero;

    // < Mayor
    if(numero < dato){
        cout << "\nEl numero es menor a 5";
    } else {
        cout << "\nEl numero es mayor o igual a 5";
    }

    cout << "\nIngrese un numero: ";
    cin >> numero;

    // > Menor
    if(numero > dato){
        cout << "\nEl numero es mayor a 5";
    } else {
        cout << "\nEl numero es menor o igual a 5";
    }

    cout << "\nIngrese un numero: ";
    cin >> numero;

    // <= Mayor o igual
    if(numero <= dato){
        cout << "\nEl numero es menor o igual a 5";
    } else {
        cout << "\nEl numero es mayor a 5";
    }

    cout << "\nIngrese un numero: ";
    cin >> numero;

    // >= Mayor o igual
    if(numero >= dato){
        cout << "\nEl numero es mayor o igual a 5";
    } else {
        cout << "\nEl número es menor a 5";
    }

    return 0;
}