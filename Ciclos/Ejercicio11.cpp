#include<iostream>
#include<cmath>
#include<stdlib.h>

using namespace std;

int main() {
    //2^1 + 2^2 + 2^3 + ... + 2^n
    int n = 0,
        resultado = 0;
    cout << "Ingresa el valor de n: ";
    cin >> n;

    for(double i = 1.0; i <= n; i++) {
        resultado += pow(2.0, i);
    }

    cout << "El resultado es: " << resultado << endl;
    system("pause");
    return 0;
}