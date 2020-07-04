#include<iostream>
#include<stdlib.h>

using namespace std;

int n1,
    n2,
    n3;

int maximo(int n1, int n2, int n3);
void pedirDatos();

int maximo(int n1, int n2, int n3) {
    if(n1 >= n2 && n1 >= n3) {
        return n1;
    } else {
        if(n2 > n3) {
            return n2;
        } else {
            return n3;
        }
    }
}

void pedirDatos() {
    cout << "Ingresa el primer numero: ";
    cin >> n1;
    cout << "Ingresa el segundo numero: ";
    cin >> n2;
    cout << "Ingresa el tercer numero: ";
    cin >> n3;

    cout << "El numero mas grande es: " << maximo(n1,n2,n3) <<  endl;
}

int main() {
    pedirDatos();
    system("pause");
    return 0;
}