#include<iostream>

using namespace std;

int main() {
    char vocal;
   
    cout << "Ingresa una vocal: ";
    cin >> vocal;

    bool vocalMin = vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u',
         vocalMay = vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U';

    if(vocalMin) {
        cout << "La vocal es minuscula";
    } else if(vocalMay) {
        cout << "La vocal es mayuscula";
    } else {
        cout << "El dato que ingreso no es una vocal";
    }
    return 0;
}