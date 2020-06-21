#include<iostream>

using namespace std;

int main() {
    int edad;

    cout << "Ingrese la edad: ";
    cin>> edad;

    if((edad >= 18) && (edad <= 25)) {
        cout << "La edad esta dentro del rango [18-25]";
    } else {
        cout << "La edad no se encuentra dentro del rango";
    }
    return 0;
}