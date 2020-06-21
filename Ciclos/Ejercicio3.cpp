#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int suma = 0;

    for(int i = 1; i <= 10; i++ ) {
        suma += i * i;
    }
    
    cout << "La suma de los cuadrados de los primeros 10 numeros enteros enteros es: " << suma << endl;
    system("pause");
    return 0;
}