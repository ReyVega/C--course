#include<iostream>

using namespace std;

int main() {
    double nota1 = 0.0,
           nota2 = 0.0,
           nota3 = 0.0,
           nota4 = 0.0,
           media = 0.0;
    
    cout << "Ingrese la nota del primer alumno: ";
    cin >> nota1;

    cout << "Ingrese la nota del segundo alumno: ";
    cin >> nota2;

    cout << "Ingrese la nota del tercero alumno: ";
    cin >> nota3;

    cout << "Ingrese la nota del cuarto alumno: ";
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "\nMedia de los 4 alumnos: " << media;
    return 0;
}