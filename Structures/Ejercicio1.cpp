#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Corredor{
    char nombre[20],
         sexo[10],
         club[20];
    int edad;
};

int main() {
    struct Corredor corredor;
    char categoria[20];

    cout << "Ingresar nombre: ";
    cin.getline(corredor.nombre,20,'\n');
    cout << "Ingresar edad: ";
    cin >> corredor.edad;
    fflush(stdin);
    cout << "Ingresar sexo: " ;
    cin.getline(corredor.sexo,10,'\n');
    cout << "Ingresar club: ";
    cin.getline(corredor.club,10, '\n');

    if(corredor.edad <= 18) {
        strcpy(categoria,"Juvenil");
    } else if(corredor.edad >= 19 && corredor.edad <= 40) {
        strcpy(categoria,"Senior");
    } else {
        strcpy(categoria,"Veterano");
    }
    
    cout << "\nDatos del corredor:" << endl;
    cout << "Nombre: " << corredor.nombre << endl;
    cout << "Edad: " << corredor.edad << endl;
    cout << "Sexo: " << corredor.sexo << endl;
    cout << "Club: " << corredor.club << endl;
    cout << "Categoria: " << categoria << endl;
    system("pause");
    return 0;
}