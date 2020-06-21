#include<iostream>

using namespace std;

int main() {
    int edad = 0;
    char sexo[10];
    double altura = 0.0;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tu sexo: ";
    cin >> sexo;

    cout << "Ingresa tu altura: ";
    cin >> altura;

    cout << "\nEdad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << endl;

    return 0;
}