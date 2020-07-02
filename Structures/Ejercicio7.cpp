#include<iostream>
#include<stdlib.h>

using namespace std;

struct Etapas {
    int horas,
        minutos,
        segundos;
};

int main() {
    int n = 0,
        totalHoras = 0,
        totalMinutos = 0,
        totalSegundos = 0;

    cout << "Ingrese el numero de etapas: ";
    cin >> n;

    struct Etapas etapas[n];

    for(int i = 0; i < n; i++) {
        cout << "\nEtapa " << i + 1 << endl;
        cout << "Horas: ";
        cin >> etapas[i].horas;
        cout << "Minutos: ";
        cin >> etapas[i].minutos;
        cout << "Segundos: ";
        cin >> etapas[i].segundos;

        totalHoras += etapas[i].horas;
        totalMinutos += etapas[i].minutos;
        totalSegundos += etapas[i].segundos;

        if(totalSegundos >= 60) {
            totalMinutos += totalSegundos / 60;
            totalSegundos = totalSegundos % 60;
        }

        if(totalMinutos >= 60) {
            totalHoras += totalMinutos / 60;
            totalMinutos = totalMinutos % 60;
        }
    }

    cout << "\nTiempo total del ciclista en las etapas" << endl;
    cout << "Horas: " << totalHoras << endl;
    cout << "Minutos: " << totalMinutos << endl;
    cout << "Segundos: " << totalSegundos << endl;
    system("pause");
    return 0;
}