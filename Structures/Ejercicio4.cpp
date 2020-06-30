#include<iostream>
#include<stdlib.h>

using namespace std;

struct Atleta {
    char nombre[20],
         pais[30];
    int numero_medallas = 0;
};

int main() {
    int n = 0,
        mayor = 0,
        mayorIndex = 0;

    cout << "Ingrese el numero de atletas: ";
    cin >> n;
    cout << endl;
    fflush(stdin);

    struct Atleta atletas[n];

    cout << "Ingrese el nombre del atleta: ";
    cin.getline(atletas[0].nombre,20,'\n');
    cout << "Ingrese el pais del atleta: ";
    cin.getline(atletas[0].pais,30,'\n');
    cout << "Ingrese el numero de medallas del atleta: ";
    cin >> atletas[0].numero_medallas;
    cout << endl;

    mayor = atletas[0].numero_medallas;

    for(int i = 1; i < n; i++) {
        fflush(stdin);
        cout << "Ingrese el nombre del atleta: ";
        cin.getline(atletas[i].nombre,20,'\n');
        cout << "Ingrese el pais del atleta: ";
        cin.getline(atletas[i].pais,30,'\n');
        cout << "Ingrese el numero de medallas del atleta: ";
        cin >> atletas[i].numero_medallas;
        cout << endl;

        if(atletas[i].numero_medallas > mayor) {
            mayor = atletas[i].numero_medallas;
            mayorIndex = i;
        }
    }

    cout << "Atleta con mas medallas:" << endl;
    cout << "Nombre: " << atletas[mayorIndex].nombre << endl;
    cout << "Pais: " << atletas[mayorIndex].pais << endl;
    cout << "Medallas: " << atletas[mayorIndex].numero_medallas << endl;
    system("pause");
    return 0;
}