#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra1[] = "hola",
         palabra2[] = "HolA";
    
    strupr(palabra1);
    strupr(palabra2);

    if(strcmp(palabra1,palabra2) == 0) {
        cout << "Las palabras son iguales" << endl;
    } else {
        cout << "Las palabras no son iguales" << endl;
    }

    system("pause");
    return 0;
}