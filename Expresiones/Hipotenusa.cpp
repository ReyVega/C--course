#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double cateto1 = 0.0,
           cateto2 = 0.0,
           hipotenusa = 0.0;

    cout << "Ingrese el valor del cateto 1: ";
    cin >> cateto1;

    cout << "Ingrese el valor del cateto 2: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2.0) + pow(cateto2, 2.0));

    cout << "La hipotenusa del triangulo es: " << hipotenusa;

    return 0;
}