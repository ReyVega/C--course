#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //Enteros positivos solamente
    int x = 0,
        y = 0,
        resultado = 0;
    
    cout << "Ingrese el valor de x: ";
    cin >> x;
    resultado = x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    for(int i = 0; i < y - 1; i++) {
        resultado *= x;
    }

    cout << "El resultado de x ^ y es: " << resultado;
    return 0;
}