#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    // 1 - 2 + 3 - 4 + 5 - 6 ... n
    int n = 0,
        resultado = 0;
    cout << "Ingresa el valor de n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if((i % 2) == 0) {
            resultado -= i;
        } else {
            resultado += i;
        }
    }
    cout << "El resultado es: " << resultado << endl;
    system("pause");
    return 0;
}