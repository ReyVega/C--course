#include<iostream>
#include<stdlib.h>

using namespace std;

template<class E>
void despliegue();

template<class E>
void despliegue(E dato){
    cout << "El dato es: " << dato << endl;
}

int main() {
    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 567.7890;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);
    system("pause");
    return 0;
}