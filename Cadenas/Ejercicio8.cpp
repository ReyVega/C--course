#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra1[100],
         palabra2[100];

    int numero1;
    double numero2;

    cout << "Ingresa un numero entero: ";
    cin >> numero1;

    cout << "Ingresa un numero real: ";
    cin >> numero2;

    cout << numero1 + numero2 << endl;

    system("pause");
    return 0;
}