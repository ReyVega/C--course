#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra1[100],
         palabra2[100];
    cout << "Ingrese la primera palabra: ";
    cin.getline(palabra1, 100, '\n');

    cout << "Ingrese la segunda palabra: ";
    cin.getline(palabra2, 100, '\n');

    if(strcmp(palabra1,palabra2) == 0) {
        cout << "Las palabras son iguales" << endl;
    } else {
        if(strcmp(palabra1,palabra2) > 0) {
            cout << "La primera palabra esta despues alfabeticamente" << endl;
        } else {
            cout << "La primera palabra esta antes alfabeticamente" << endl;
        }
    }
    system("pause");
    return 0;
}