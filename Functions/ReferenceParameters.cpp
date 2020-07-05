#include<iostream>
#include<stdlib.h>

using namespace std;

void numeros(int&, int&);

void numeros(int& n1, int& n2) {
    cout << "Valor del primer numero: " << n1 << endl;
    cout << "Valor del segundo numero: " << n2 << endl;
    cout << endl;

    n1 = 30;
    n2 = 14;
}

int main() {
    int n1,
        n2;
    
    cout << "Ingrese dos numeros: ";
    cin >> n1 >> n2;
    numeros(n1,n2);

    cout << n1 << endl;
    cout << n2 << endl;

    system("pause");
    return 0;
}

