#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double x = 0.0,
           y = 0.0,
           resultado = 0.0;
    
    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    resultado = sqrt(x) / (pow(y, 2.0) - 1);

    cout << "El resultado es: " << resultado;
    return 0;
}