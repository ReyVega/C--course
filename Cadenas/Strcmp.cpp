#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    // Cadenas iguales
    char palabra1[] = "Hola",
         palabra2[] = "Hola";

    if(strcmp(palabra1,palabra2) != 0) {
        cout << "Las palabras son diferentes" << endl;
    } else {
        cout << "Las palabras son iguales" << endl;
    }
    cout << endl;
    // Cadenas identificar cual esta despues alfabeticamente
    char palabra3[] = "Becerro",
         palabra4[] = "Avion";

    if(strcmp(palabra3,palabra4) > 0) {
        cout << "La palabra esta despues alfabeticamete" << endl;
    } else {
        cout << "La palabra esta antes alfabeticamente" << endl;
    }

    system("pause");
    return 0;
}