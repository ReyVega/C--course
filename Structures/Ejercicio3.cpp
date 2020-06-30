#include<iostream>
#include<stdlib.h>

using namespace std;

struct Empleado {
    char nombre[20];
    double salario;
};
int main() {
    int n = 0,
        mayor = 0,
        mayorIndex = 0,
        menor = 0,
        menorIndex;
    cout << "Numero de empleados a registrar: ";
    cin >> n;
    cout << endl;
    fflush(stdin);
    struct Empleado empleados[n];

    cout << "Nombre de empleado: ";
    cin.getline(empleados[0].nombre,20,'\n');

    cout << "Ingresar salario: ";
    cin >> empleados[0].salario;
    cout << endl;

    mayor = empleados[0].salario;
    menor = mayor;

    for(int i = 1; i < n; i++) {
        fflush(stdin);
        cout << "Nombre de empleado: ";
        cin.getline(empleados[i].nombre,20,'\n');

        cout << "Ingresar salario: ";
        cin >> empleados[i].salario;
        cout << endl;

        if(empleados[i].salario > mayor) {
            mayor = empleados[i].salario;
            mayorIndex = i;
        }

        if(empleados[i].salario < menor) {
            menor = empleados[i].salario;
            menorIndex = i;
        }
    }

    cout << "Empleado con mayor salario:" << endl;
    cout << "Nombre: " << empleados[mayorIndex].nombre << endl;
    cout << "Salario: " << empleados[mayorIndex].salario << endl;

    cout << "\nEmpleado con menor salario:" << endl;
    cout << "Nombre: " << empleados[menorIndex].nombre << endl;
    cout << "Salario: " << empleados[menorIndex].salario << endl;
    system("pause");
    return 0;
}