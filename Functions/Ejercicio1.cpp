#include<iostream>
#include<stdlib.h>

using namespace std;

double n1,
       n2;

void mult(double n1, double n2) {
    cout << "El resultado de la multiplicacion es: " << n1 * n2 << endl;
}

void pedirDatos() {
    cout << "Ingresar primer numero: ";
    cin >> n1;
    cout << "Ingresar segundo numero: ";
    cin >> n2;
}

int main() {
    pedirDatos();
    mult(n1,n2);
    system("pause");
    return 0;
}