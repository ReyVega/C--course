#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int array[] = {3,4,2,1,5};
    int n = sizeof(array) / sizeof(array[0]),
        numero = 4;
    
    for(int i = 0; i < n; i++) {
        if(array[i] == numero) {
            cout << "Se ha encontrado el numero" << endl;
            cout << "El numero " << numero << " se encontro en la posicion " << i << endl;
            system("pause"); 
            return 0;
        }
    }

    cout << "No se ha encontrado el numero" << endl;
    system("pause");
    return 0;
}