#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int opcion = 0,
        numero2 = 0;
    double numero1 = 0.0;

    cout << "\tBienvenido a funciones 3.0" << endl;
    cout << "1. Cubo de un numero" << endl;
    cout << "2. Numero par e impar" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ingrese el numero que quiera elevar al cubo: ";
            cin >> numero1;
            numero1 = pow(numero1, 3.0);
            cout << "El numero elevado al cubo es: " <<  numero1;
            break;
        case 2:
            cout << "Ingrese el numero: ";
            cin >> numero2;

            if(numero2 == 0) {
                cout << "El numero ingresado es 0";
            } else if((numero2 % 2) == 0) {
                cout << "El numero ingresado es par";
            } else {
                cout << "El numero ingresado es impar";
            }
            break;
        case 3:
            break;
        default:
            cout << "Ingreso una opcion erronea";
            break;
    }
    return 0;
}