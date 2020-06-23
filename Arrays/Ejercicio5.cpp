#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int n = 0,
        mayor = 0;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];

        if(array[i] > mayor) {
            mayor = array[i];
        }
    }

    cout << "El numero mas grande ingresado fue: " << mayor << endl;
    system("pause");
    return 0;
}