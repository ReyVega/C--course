#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    system("cls");
    int opcion1 = 0,
        opcion2 = 0,
        opcion3 = 0,
        contTodos = 0,
        contAlmenos = 0,
        contUltimo = 0;

    for(int i = 0; i < 5; i++) {
        system("cls");
        cout << "1. Si        2.No" << endl;
        cout << "El alumno numero " << i + 1 << " aprobo el primer examen?: ";
        cin >> opcion1;

        cout << "El alumno numero " << i + 1 << " aprobo el segundo examen?: ";
        cin >> opcion2;

        cout << "El alumno numero " << i + 1 << " aprobo el tercer examen?: ";
        cin >> opcion3;

        if((opcion1 == 1) && (opcion2 == 1) && (opcion3 == 1)) {
            contTodos++;
        }

        if((opcion1 == 1) || (opcion2 == 1) || (opcion3 == 1)) {
            contAlmenos++;
        }

        if((opcion1 == 0) && (opcion2 == 0) && (opcion3 == 1)) {
            contUltimo++;
        }
    }
    cout << endl;
    cout << "Numero de alumnos que aprobaron todos los examenes: " << contTodos << endl;
    cout << "Numero de alumnos que aprobaron al menos un examen: " << contAlmenos << endl;
    cout << "Numero de alumnos que solo aprobaron el ultimo examen: " << contUltimo << endl;
    system("pause");
    return 0;
}