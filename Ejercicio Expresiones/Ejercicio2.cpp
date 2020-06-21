#include<iostream>

using namespace std;

int main() {
    double a = 0.0,
           b = 0.0,
           c = 0.0,
           d = 0.0,
           resultado = 0.0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    cout << "Ingrese el valor de d: ";
    cin >> d;

    resultado = (a + b) / (c + d);

    cout.precision(3);
    cout << "Resultado: " << resultado;
    return 0;
}