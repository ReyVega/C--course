#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //1! + 2! + 3! + 4! + ... n!
    int n = 0,
        resultado = 0;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = i - 1; j >= 1; j--) {
            n *= j;
        }
        resultado += n;
        n = i - 1;
    }

    cout << "El resultado es: " << resultado << endl;
    system("pause");

    return 0;
}