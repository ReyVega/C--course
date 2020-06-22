#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int n = 0;
    cout << "Tamano de arreglo: ";
    cin >> n;
    int numeros[n];

    for(int i = 0; i < n; i++) {
        cout << "Ingresa un numero: ";
        cin >> numeros[i];
    }

    for(int i = 0; i < n; i++) {
        cout << i << " -> " << numeros[i] << endl;
    }

    system("pause");
    return 0;
}