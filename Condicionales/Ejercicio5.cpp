#include<iostream>

using namespace std;

int main() {
    char vocal;

    cout << "Ingresa una vocal minuscula: ";
    cin >> vocal;

    switch (vocal) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "La vocal es minuscula";
            break;
        default:
            cout << "El input no es una vocal o es una vocal mayuscula";
    }
    return 0;
}