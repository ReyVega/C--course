#include<iostream>

using namespace std;

int main() {
    int n1 = 0,
        n2 = 0,
        n3 = 0,
        n4 = 0;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    cout << "Ingrese el cuarto numero: ";
    cin >> n4;

    bool condicion = n4 == n3 || n4 == n2 || n4 == n1;

    if(condicion) {
        cout << "El cuarto numero coincidio con al menos uno de los numeros anteriores ingresados";
    } else {
        cout << "El cuarto numero no coincidio con ninguno de los anteriores";
    }
    return 0;
}