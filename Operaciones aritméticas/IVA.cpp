#include<iostream>

using namespace std;

int main() {
    double precio = 0.0,
           iva = 0.0;

    cout << "Ingresa el precio del producto: ";
    cin >> precio;

    cout << "Ingresa el IVA en porcentaje: ";
    cin >> iva;

    precio += precio * (iva / 100);

    cout << "Monto Total: " << precio;
    return 0;
}