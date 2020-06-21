#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //1 + 3 + 5 + 7 + 9 + ... + 2n - 1
    int opcion = 0,
        n = 0,
        resultado = 0;

    while(opcion != 3) {
        system("cls");
        cout << "\tBienvenido seleccione una opcion" << endl;
        cout << "1. Solucion con for loop" << endl;
        cout << "2. Solucion analitica" << endl;
        cout << "Ingresar opcion: ";
        cin >> opcion;

        if(opcion == 1) {
            cout << "Ingrese el valor de n: ";
            cin >> n;

            for(int i = 1; i <= n; i++) {
                resultado += (2 * i) - 1;
            }
            cout << "El resultado es: " << resultado << endl;
            resultado = 0;
        } else if(opcion == 2) {
            cout << "Ingrese el valor de n: ";
            cin >> n;
            
            resultado = n * n;
            cout << "El resultado es: " << resultado << endl;
            resultado = 0;
        }

        system("pause");
        system("cls");
    }
    return 0;
}