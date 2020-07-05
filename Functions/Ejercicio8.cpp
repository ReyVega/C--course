#include<iostream>
#include<stdlib.h>

using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

void cambio(int precio, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno) {
    cien = precio / 100;
    precio %= 100;
    cincuenta = precio / 50;
    precio %= 50;
    veinte = precio / 20;
    precio %= 20;
    diez = precio / 10;
    precio %= 10;
    cinco = precio / 5;
    precio %= 5;
    uno = precio;
}

int main() {
    int precio = 0,
        cien = 0,
        cincuenta = 0,
        veinte = 0,
        diez = 0,
        cinco = 0,
        uno = 0;
    cout << "Ingrese el precio: ";
    cin >> precio;

    cambio(precio,cien,cincuenta,veinte,diez,cinco,uno);

    cout << "Cambio en billetes del precio " << precio << endl;
    cout << "$100: " << cien << endl;
    cout << "$50: " << cincuenta << endl;
    cout << "$20: " << veinte << endl;
    cout << "$10: " << diez << endl;
    cout << "$5: " << cinco << endl;
    cout << "$1: " << uno << endl;
    system("pause");
    return 0;
}