#include<iostream>
#include<stdlib.h>

using namespace std;

struct Alumno {
    char nombre[20];
    int edad;
    double promedio;
};

int main() {
    struct Alumno alumnos[3];
    double mejor = 0.0;
    int index = 0;

    for(int i = 0; i < 3; i++) {
        cout << "Ingresar nombre del alumno: ";
        cin.getline(alumnos[i].nombre,20,'\n');
        cout << "Ingresar su edad: ";
        cin >> alumnos[i].edad;
        cout << "Ingresar su promedio: ";
        cin >> alumnos[i].promedio;

        if(alumnos[i].promedio > mejor) {
            index = i;
        }
        cout << endl;
        fflush(stdin);
    }

    cout << "\nDatos del alumno con mejor promedio:" << endl;
    cout << "Nombre: " << alumnos[index].nombre << endl;
    cout << "Edad: " << alumnos[index].edad << endl;
    cout << "Promedio: " << alumnos[index].promedio << endl;
    system("pause");
    return 0;
}
