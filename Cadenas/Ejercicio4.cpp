#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char frase[] = "Hola que tal ",
         nombre[100];

    cout << "Ingresa tu nombre: ";
    cin.getline(nombre,100,'\n');

    strcat(frase,nombre);

    cout << frase << endl;

    system("pause");
    return 0;
}