#include<iostream>

using namespace std;

int main() {
    int opcion = 0;
    double saldoInicial = 1000.0,
           extra = 0.0,
           retiro = 0.0;
    
    cout << "\tBienvenido a su cajero virtual" << endl;
    cout << "1. Ingresar dinero en cuenta" << endl;
    cout << "2. Retirar dinero de la cuenta" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Digite la cantidad de dinero a ingresar: ";
            cin >> extra;
            saldoInicial += extra;
            cout << "Dinero en cuenta: " << saldoInicial;
            break;
        case 2:
            cout << "Digite la cantidad de dinero que va a retirar: ";
            cin >> retiro;

            if(retiro > saldoInicial) {
                cout << "No tiene esa cantidad de dinero";
            } else {
                saldoInicial -= retiro;
                cout << "Dinero en cuenta: " << saldoInicial;
            }
        case 3:
            break;
    }
    
    return 0;
}