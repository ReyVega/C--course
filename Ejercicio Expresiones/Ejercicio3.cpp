#include<iostream>

using namespace std;

int main() {
    double a = 0.0,
           b = 0.0,
           c = 0.0,
           d = 0.0,
           e = 0.0,
           f = 0.0,
           resultado = 0.0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    cout << "Ingrese el valor de d: ";
    cin >> d;

    cout << "Ingrese el valor de e: ";
    cin >> e;

    cout << "Ingrese el valor de f: ";
    cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));

    cout.precision(3);
    cout << "Resultado: " << resultado;

    return 0;
}