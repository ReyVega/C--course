#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int cont = 0,
        entrada = 0;
    cout << "Ingresa todos los valores que guste: "; 

    while(true) {
        cin >> entrada;
        if(entrada > 0) {
            cont++;
        } else {
            break;
        }
    }

    cout << "Valores mayores a 0 ingresados: " << cont << endl;
    system("pause");
    return 0;
}