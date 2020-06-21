#include<iostream>

using namespace std;

int main() {
    int x = 0,
        y = 0,
        tmp = 0;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    tmp = x;
    x = y;
    y = tmp;

    cout << "\nEl nuevo valor de x es: " << x <<  endl;
    cout << "El nuvelo valor de y es: " << y << endl;

    return 0;
}