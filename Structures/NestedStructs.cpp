#include<iostream>
#include<stdlib.h>

using namespace std;

struct Info_direccion {
    char direccion[30],
         ciudad[20],
         provincia[20];
};

struct Empleado {
    char nombre[20];
    struct Info_direccion dir_empleado;
    double salario;
};

int main() {
    struct Empleado empleado[2];

    for(int i = 0; i < 2; i++) {
        /* Vaciar buffer y permitir ingresar mas valores
           ---------------------------------------------
           Utilizar fflush(stdin);           stdlib.h
           O
           Utilizar cin.ignore();            iostream
           ---------------------------------------------
           Utilizarlo siempre cuando se ingrese primero un valor numerico y el siguiente dato
           sea de tipo char o string
        */
        fflush(stdin); 
        cout << "Ingrese su nombre: "; 
        cin.getline(empleado[i].nombre,20,'\n');
        cout << "Ingrese su direccion: ";
        cin.getline(empleado[i].dir_empleado.direccion,'\n');
        cout << "Ingrese su ciudad: ";
        cin.getline(empleado[i].dir_empleado.ciudad,'\n');
        cout << "Ingrese su provincia: ";
        cin.getline(empleado[i].dir_empleado.provincia,'\n');
        cout << "Ingrese su salario: "; 
        cin >> empleado[i].salario;
        cout << endl;
    }

    for(int i = 0; i < 2; i++) {
        cout << "Nombre: " << empleado[i].nombre << endl;
        cout << "Direccion: " << empleado[i].dir_empleado.direccion << endl;
        cout << "Ciudad: " << empleado[i].dir_empleado.ciudad << endl;
        cout << "Provincia: " << empleado[i].dir_empleado.provincia << endl;
        cout << "Salario: " << empleado[i].salario << endl;
        cout << endl;
    }
    system("pause");
    return 0;
}