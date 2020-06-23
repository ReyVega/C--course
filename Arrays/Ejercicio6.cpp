#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int n = 0,
        suma = 0;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;
    int array[n];

    //Llenar arreglo
    for(int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
    }

    //Operaciones
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                suma += array[j];
            }
        }
        
        if(array[i] == suma) {
            cout << "El numero " << array[i] << " equivale a la suma del resto de elementos" << endl;
            break;
        } 

        suma = 0;
    }
    system("pause");
    return 0;
}