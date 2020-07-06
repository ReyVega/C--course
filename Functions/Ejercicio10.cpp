#include<iostream>
#include<stdlib.h>

using namespace std;

void years(int, int&, int&, int&);

void years(int days, int& year, int& month, int& day) {
    day = 1;
    month = 1;
    year = 2000;

    year += days / 360;
    days %= 360;

    month += days / 30;
    days %= 30;

    day += days;
}

int main() {
    int days = 0,
        year = 0,
        month = 0,
        day = 0;

    cout << "01/01/2000" << endl;
    cout << "Ingrese el total de dias: ";
    cin >> days;

    years(days,year,month,day);
    cout << "Fecha: " << day << "/" << month << "/" << year << endl;
    system("pause");
    return 0;
}