#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Persona {
    char nombre[20];
    bool discapacidad;
};

int main() {
    system("cls");
    int n = 0,
        cont1 = 0,
        cont2 = 0;

    cout << "Numero de personas a registrar: ";
    cin >> n;
    system("cls");
    struct Persona personas[n],
                   conDiscapacidad[n],
                   sinDiscapacidad[n];

    for(int i = 0; i < n; i++) {
        fflush(stdin);
        cout << "Persona " << i + 1 << endl;
        cout << "Nombre: ";
        cin.getline(personas[i].nombre,20,'\n');
        cout << "Tiene discapacidad?: ";
        cin >> personas[i].discapacidad;
        cout << endl;
        
        if(personas[i].discapacidad == true) {
            strcpy(conDiscapacidad[cont1].nombre, personas[i].nombre);
            conDiscapacidad[cont1].discapacidad = personas[i].discapacidad;
            cont1++;
        } else {
            strcpy(sinDiscapacidad[cont2].nombre, personas[i].nombre);
            sinDiscapacidad[cont2].discapacidad = personas[i].discapacidad;
            cont2++;
        }
    }

    cout << "\nPersonas con discapacidad" << endl;
    for(int i = 0; i < (cont1); i++) {
        cout << conDiscapacidad[i].nombre << endl;
    }

    cout << "\nPersonas sin discapacidad" << endl;
    for(int i = 0; i < (cont2); i++) {
        cout << sinDiscapacidad[i].nombre << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}