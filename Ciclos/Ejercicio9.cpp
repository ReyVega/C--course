#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    int factorial = 0;
    cout << "Ingresar el numero factorial a calcular: ";
    cin >> factorial;

    if(factorial == 0) {
        cout << "El resultado es: 1";
    } else {
        for(int i = factorial - 1; i >= 1; i--) {
            factorial *= i;
        }
        cout << "El resultado es: " << factorial << endl;
    }
    system("pause");
    return 0;
}