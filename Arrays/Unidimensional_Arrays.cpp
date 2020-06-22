#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int numeros[] = {1,2,3,4,5};
    int suma = 0;

    for(int i = 0; i < (sizeof(numeros) / sizeof(numeros[0])); i++) {
        suma += numeros[i];
    }

    cout << "La suma total de los elementos del array es: " << suma << endl;
    system("pause");

}