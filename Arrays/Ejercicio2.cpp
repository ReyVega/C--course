#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int n = 0,
        numero = 0,
        multiplicacion = 0;
    cout << "De que tamano quieres que sea tu arreglo?: ";
    cin >> n;
    int numeros[n];

    for(int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }
    
    multiplicacion = numeros[0];
    for(int i = 1; i < (sizeof(numeros) / sizeof(numeros[0])); i++) {
        multiplicacion *=  numeros[i];
    } 

    cout << "La multiplicacion de todos los elementos es: " << multiplicacion << endl;
    system("pause");
    return 0;
}