#include<iostream>

using namespace std;

int vector[100], 
    tam;

void input();
int sum();

void input() {
    cout << "Digite el numero de elementos del vector: " ;
    cin >> tam;

    for(int i = 0; i < tam; i++) {
        cout << "Ingrese el valor " << i << ": ";
        cin >>  vector[i];
    }
}

int sum() {
    int sum = 0;
    for(int i = 0; i < tam; i++) {
        sum += vector[i];
    }
    return sum;
}

int main() {
    input();
    cout << sum() << endl;
    system("pause");
    return 0;
}