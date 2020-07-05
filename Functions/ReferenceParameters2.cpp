#include<iostream>
#include<stdlib.h>

using namespace std;

void operaciones(int,int,int&,int&);

void operaciones(int n1, int n2, int& suma, int& producto) {
    suma = n1 + n2;
    producto = n1 * n2;
}

int main() {
    int n1 = 0,
        n2 = 0,
        suma = 0,
        producto = 0;
    
    cout << "Ingrese dos numeros: ";
    cin >> n1 >> n2;
    operaciones(n1,n2,suma,producto);

    cout << "La suma de los numeros es: " << suma << endl;
    cout << "El producto de los numeros es: " << producto << endl;
    system("pause");
    return 0;
}