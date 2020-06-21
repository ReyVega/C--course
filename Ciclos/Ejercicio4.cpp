#include<iostream>

using namespace std;

int main() {
    double temperatura = 0,
           temperaturaTotal = 0,
           temperaturaAlta = 0,
           temperaturaBaja = 0;

    cout << "Ingresa la temperatura: ";
    cin >> temperatura;
    temperaturaTotal += temperatura;
    temperaturaAlta = temperatura;
    temperaturaBaja = temperatura;

    for(int i = 0; i < 4; i++) {
        cout << "Ingresa la temperatura: ";
        cin >> temperatura;
        temperaturaTotal += temperatura;

        if(temperatura > temperaturaAlta) {
            temperaturaAlta = temperatura;
        } else {
            if(temperaturaBaja > temperatura) {
                temperaturaBaja = temperatura;
            }
        }
    }

    cout << "La temperatura promedio es: " << temperaturaTotal / 6 << endl;
    cout << "La temperatura mas alta fue: " << temperaturaAlta << endl;
    cout << "La temperatura mas baja fue: " << temperaturaBaja << endl;

    return 0;
}