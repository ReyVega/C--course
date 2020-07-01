#include<iostream>
#include<stdlib.h>

using namespace std;

struct Promedio {
    double nota1,
           nota2,
           nota3;
};

struct Alumno {
    char nombre[20],
         sexo[10];
    int edad;
    struct Promedio promedio;
};

int main() {
    struct Alumno alumno;

    //Datos alumno
    cout << "Ingresar nombre del alumno: ";
    cin.getline(alumno.nombre,20,'\n');
    cout << "Ingresar sexo del alumno: ";
    cin.getline(alumno.sexo,10,'\n');

    //Promedio del alumno
    cout << "\nNotas del alumno:" << endl;
    cout << "Ingrese la primer nota del alumno: ";
    cin >> alumno.promedio.nota1;

    cout << "Ingrese la segunda nota del alumno: ";
    cin >> alumno.promedio.nota2;

    cout << "Ingrese la tercera nota del alumno: ";
    cin >> alumno.promedio.nota3;

    double promedio = (alumno.promedio.nota1 + alumno.promedio.nota2 + alumno.promedio.nota3) / 3;
    
    //Imprimir
    cout << "\nDatos del alumno:" << endl;
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Sexo: " << alumno.sexo << endl;
    cout << "Promedio: " << promedio << endl;
    system("pause");
    return 0;
}