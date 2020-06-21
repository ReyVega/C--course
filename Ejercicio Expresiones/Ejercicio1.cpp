#include<iostream>

using namespace std;

int main() {
    double  a = 0.0,
            b = 0.0,
            resultado = 0.0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    resultado = (a / b) + 1;

    cout.precision(3);
    cout << "Resultado: " << resultado;
    return 0;
}