#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char nombre[100];

    cout << "Ingresa tu nombre: ";
    cin.getline(nombre,100,'\n');

    if((nombre[0] == 'A') || (nombre[0] == 'a')) {
        strlwr(nombre);
        cout << nombre << endl;
    } else {
        cout << nombre << endl;
    }
    return 0;
}
