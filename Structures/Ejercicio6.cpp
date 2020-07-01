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
    struct Promedio promedio;
};

int main() {
    int n = 0,
        mejorProm = 0,
        index = 0;

    cout << "Cuantos alumnos va a registrar?: ";
    cin >> n;
    cout << endl;

    struct Alumno alumnos[n];

    for(int i = 0; i < n; i++) {
        fflush(stdin);
        cout << "Datos del alumno " << i + 1 << endl;
        cout << "Nombre del alumno: ";
        cin.getline(alumnos[i].nombre,20,'\n'); 
        cout << "Sexo del alumno: ";
        cin.getline(alumnos[i].sexo,10,'\n');

        cout << "\nIngresar notas del alumno:" << endl;
        cout << "Nota 1: ";
        cin >> alumnos[i].promedio.nota1;
        cout << "Nota 2: ";
        cin >> alumnos[i].promedio.nota2;
        cout << "Nota 3: ";
        cin >> alumnos[i].promedio.nota3;
        cout << endl;

        double promedio = (alumnos[i].promedio.nota1 + alumnos[i].promedio.nota2 + alumnos[i].promedio.nota3) / 3;

        if(promedio > mejorProm) {
            mejorProm = promedio;
            index = i;
        }
    }
    cout << "\nDatos del alumno con mejor promedio" << endl;;
    cout << "Nombre: " << alumnos[index].nombre << endl;
    cout << "Sexo: " << alumnos[index].sexo << endl;
    cout << "Promedio: " << mejorProm << endl;
    system("pause");
    return 0;
}