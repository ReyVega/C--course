#include<iostream>

using namespace std;

int main() {
    int n1 = 0,
        n2 = 0;
    cout << "Ingrese el primer numero: ";
    cin>> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if(n1 == n2) {
        cout << "Ambos numeros son iguales" << endl;
    } else if(n1 > n2) {
        cout << "El primer numero es mayor" << endl;
    } else {
        cout << "El segundo numero es mayor" << endl;
    }

    return 0;
}