#include<iostream>
#include<stdlib.h>

using namespace std;

int encontrarMax(int n1, int n2) {
    if(n1 == n2) {
        return n1;
    } else {
        if(n1 > n2) {
            return n1;
        } else {
            return n2;
        }
    }
}

int main() {
    int n1 = 0,
        n2 = 0;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "\nEl numero mas grande es: " << encontrarMax(n1,n2) << endl;
    system("pause");
    return 0;
}