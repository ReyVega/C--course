#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    //La busqueda binaria solo se puede utilizar al tener un arreglo ordenado
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array) / sizeof(array[0]),
        inf = 0,
        sup = (n - 1),
        mid = 0,
        numero = 6;
    
    while(inf <= sup) {
        mid = inf + (sup - inf) / 2;

        if(array[mid] == numero) {
            cout << "Se ha encontrado el numero" << endl;
            cout << "El numero " << numero << " se encontro en la posicion " << mid << endl;
            return 0;
        }

        if(array[mid] < numero) {
            inf = mid + 1;
        } else {
            sup = mid - 1;
        }
    }
    return 0;
}