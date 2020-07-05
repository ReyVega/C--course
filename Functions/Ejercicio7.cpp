#include<iostream>
#include<stdlib.h>

using namespace std;

void intercambiar(int&,int&);

void intercambiar(int& n1, int& n2) {
    int aux = n1;
    n1 = n2;
    n2 = aux;
}

int main() {
    int n1 = 0,
        n2 = 0;
    cout << "Ingresa dos numeros: ";
    cin >> n1 >> n2;

    intercambiar(n1,n2);

    cout << "El valor del primer numero es: " << n1 << endl;
    cout << "El valor del segundo numero es: " << n2 << endl;
    system("pause");
    return 0;
}