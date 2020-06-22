#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //Factores primos de un numero
    int numero = 0,
        dato = 0;;
    cout << "Ingresa un numero: ";
    cin >> numero;
    dato = numero;

    for(int i = 2; numero > 1; i++) {
        while((numero % i) == 0) {
            cout << i << " ";
            numero /= i;
        }
    }
    cout << "= " << dato << endl;
    system("pause");
    return 0;
}