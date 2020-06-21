#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //Suma de 1 + 2 + 3 + 4 ... + n
    int opcion = 0,
        n =0,
        resultado = 0;

    while(opcion != 3) {
        system("cls");
        cout << "\tBienvenido, selecciona una opcion" << endl;
        cout << "1. Solucion con for loop" << endl;
        cout << "2. Solucion analitica" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingresar opcion: ";
        cin >> opcion;

        if(opcion == 1) {
            cout << "Ingresa el valor de n: ";
            cin >> n;
            for(int i = 1; i <= n; i++) {
                resultado += i;
            }

            cout << "El resultado es: " << resultado << "\n" << endl;
            resultado = 0;
        } else if(opcion == 2) {
            cout << "Ingresa el valor de n: ";
            cin >> n;

            resultado = n * (n + 1) / 2;
            cout << "El resultado es: " << resultado << "\n" << endl;
            resultado = 0;
        } 

        system("pause");
        system("cls");
    }

    return 0;
}