#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //Serie fibonacci 0 1 1 2 3 5 8 13 n
    int n = 0,
        n1 = 0,
        n2 = 1,
        suma = 0;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << n1 << " " << n2 << " ";
    for(int i = 0; i < (n - 2); i++) {
       suma = n1 + n2;
       cout << suma << " ";
       n1 = n2;
       n2 = suma;
    }
    cout << endl;
    system("pause");
    return 0;
}