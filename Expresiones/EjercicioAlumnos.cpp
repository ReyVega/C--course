// 30% prácticas, 60% teórica, 10% participación 

#include<iostream>

using namespace std;

int main() {
    double practica = 0.0,
           teorica = 0.0,
           participacion = 0.0,
           notaFinal = 0.0;

    cout << "Ingrese la nota practica: ";
    cin >> practica;

    cout << "Ingrese la nota teorica: ";
    cin >> teorica;

    cout << "Ingrese la nota de participacion: ";
    cin >> participacion;

    practica *= 0.3;
    teorica *= 0.6;
    participacion *= 0.1;

    notaFinal = practica + teorica + participacion;

    cout << "Nota Final del alumno: " << notaFinal;
    return 0;
}