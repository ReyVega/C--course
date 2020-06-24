#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    char nombre1[] = {'R','e','y','n','a','l','d','o', '\0'},
         nombre2[] = "Reynaldo",
         nombre3[9];

    cout << "Ingrese su nombre: ";
    cin.getline(nombre3,9,'\n');

    cout << nombre1 << endl;
    cout << nombre2 << endl;
    cout << nombre3 << endl;

    system("pause");
    return 0;
}