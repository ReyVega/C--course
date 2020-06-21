#include<iostream>

using namespace std;

int main() {
    int n1 = 0,
        n2 = 0,
        n3 = 0;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin>> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    if(n1 >= n2 && n1 >= n3) {
        cout << "El numero mayor es: " << n1;
    } else {
        if(n2 < n3) {
            cout << "El numero mayor es: " << n3;
        } else {
            cout << "El numero mayor es: " << n2;
        }
    }
    return 0;
}