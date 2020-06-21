#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double a = 0.0,
           b = 0.0,
           c = 0.0,
           resultado1 = 0.0,
           resultado2 = 0.0;

    cout << "Ingresa el valor de a: ";
    cin >> a;

    cout << "Ingresa el valor de b: ";
    cin >> b;

    cout << "Ingresa el valor de c: ";
    cin >> c;

    resultado1 = (-b + sqrt(pow(b, 2.0) - 4.0 * a * c)) / (2.0 * a);
    resultado2 = (-b - sqrt(pow(b, 2.0) - 4.0 * a * c)) / (2.0 * a);

    cout << "\nResultado 1: " << resultado1 << endl;
    cout << "Resultado 2: " << resultado2 << endl;

    return 0;
}