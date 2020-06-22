#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main() {
    system("cls");
    int numero = 0,
        entrada = 0,
        intentos = 0;

    srand(time(NULL));
    // limite inferior + rand() % ((limite superior + 1) - limite inferior)
    numero = 1 + rand() % (101 - 1);

    do {
        cout << "Ingresa un numero: ";
        cin >> entrada;

        if(entrada > numero) {
            cout << "\nEl numero es mas chico" << endl;
        } else if(entrada < numero) {
            cout << "\nEl numero es mas grande" << endl;
        }
        intentos++;
    } while(numero != entrada);

    cout << "\nFelicidades has adivinado el numero en " << intentos << " intentos" << endl;
    system("pause");
    return 0;
}