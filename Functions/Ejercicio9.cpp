#include<iostream>
#include<stdlib.h>

using namespace std;

void tiempo(int,int&,int&,int&);

void tiempo(int totalSegs, int& horas, int& mins, int& segs) {
    horas = totalSegs / 3600;
    totalSegs %= 3600;
    mins = totalSegs / 60;
    totalSegs %= 60;
    segs = totalSegs;
}

int main() {
    int totalSegs = 0,
        horas = 0,
        mins = 0,
        segs = 0;
    cout << "Ingrese el total de segundos a convertir: ";
    cin >> totalSegs;
    tiempo(totalSegs,horas,mins,segs);
    cout << "Conversion del tiempo ingresado" << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << mins << endl;
    cout << "Segundos: " << segs << endl;
    system("pause");
    return 0;
}