#include<iostream>
#include<stdlib.h>

using namespace std;

int vector[100], tam;

void input();
void oddsVector();

void input() {
    cout << "Cual es el tamano del vector: ";
    cin >> tam;

    for(int i = 0; i < tam; i++) {
        cout << "Ingresa el valor del elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
}

void oddsVector() {
    for(int i = 0; i < tam; i++) {
        if(vector[i] % 2 != 0) {
            cout << vector[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    input();
    oddsVector();
    system("pause");
    return 0;
}