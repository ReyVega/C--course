#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[100],
         copia[100];

    cout << "Ingrese una palabra: ";
    cin.getline(palabra, 100, '\n');

    strcpy(copia, palabra);

    cout << copia << endl;
    system("pause");
    return 0;
}