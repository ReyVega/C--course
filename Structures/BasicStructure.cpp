#include<iostream>
#include<stdlib.h>

using namespace std;

struct Persona {
    char nombre[20];
    int edad;
}
persona3 = {"Kike",32},
persona4 = {"Katherine0",24};

int main() {
    struct Persona persona1 = {"Alejandra",20},
                   persona2 = {"Reynaldo",20};

    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << endl;
    cout << "Nombre: " << persona2.nombre << endl;
    cout << "Edad: " << persona2.edad << endl;
    cout << endl;
    cout << "Nombre: " << persona3.nombre << endl;
    cout << "Edad: " << persona3.edad << endl;
    cout << endl;
    cout << "Nombre: " << persona4.nombre << endl;
    cout << "Edad: " << persona4.edad << endl;
    system("pause");
    return 0;
}